This works with Super Mario Galaxy 2 (SB4E01). Not sure about other regions. Nintendo Switch port is not supported nor planned.

### Setup
You MUST add the following entries to your `ProductMapObjDataTable.bcsv`:
*UFOStrongA*, *UFOSolid* (ModelName, ClassName)
*UFONormalD*, *UFOBreakable* (ModelName, ClassName)
*UFONormalB*, *UFOBreakable* (ModelName, ClassName)
*UFOBattleStageE*, *UFOSolid* (ModelName, ClassName)
*UFOBattleStageD*, *UFOSolid* (ModelName, ClassName)
*UFOBattleStageC*, *UFOSolid* (ModelName, ClassName)

### Object Arguments (UFOBattleStageC)
*Note that the current list of arguments may be subject to any corrections, if needed*

> **Path ID**<br>
A valid one is required for this to work properly; the Path ID refers to the identifier assigned to a movement path in the level editor, and you can obtain or set it by selecting the desired path and noting its assigned ID value.<br><br>
**SW_B**<br>
When activated, the object moves on its assigned path<br><br>

If you're still not understanding how to set this object up correctly, and you have a copy of Super Mario Galaxy (2007), look in the `VsHugeBattleShipZone` in the level editor.

### Global (Module) Object Arguments
*Note that the current list of arguments may be subject to any corrections, if needed*
**SW_DEAD**<br>
Activated when the object is destroyed. Used for UFOBreakable objects (needs confirmation?)<br><br>