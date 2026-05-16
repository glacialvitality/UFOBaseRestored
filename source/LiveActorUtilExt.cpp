#include "LiveActorUtilExt.h"

namespace MR
{
    LodCtrl* createLodCtrlMapObj(LiveActor* pActor, const JMapInfoIter& rIter, f32 farClip) {
        LodCtrl* pLod = new LodCtrl(pActor, rIter);
        pLod->createLodModel(MR::DrawBufferType_MapObj, -1, MR::DrawBufferType_PlanetLow);
        pLod->setDistanceToMiddleAndLow(5000.0f, 10000.0f);
        pLod->setFarClipping(farClip);

        if (pLod->mModelObjMiddle != nullptr) {
            const char* pResName = getModelResourceHolder(pLod->mModelObjMiddle)->mModelResTable->getResName(0UL);
            tryStartAllAnim(pLod->mModelObjMiddle, pResName);
        }

        if (pLod->mModelObjLow != nullptr) {
            const char* pResName = getModelResourceHolder(pLod->mModelObjLow)->mModelResTable->getResName(0UL);
            tryStartAllAnim(pLod->mModelObjLow, pResName);
        }

        return pLod;
    }
}