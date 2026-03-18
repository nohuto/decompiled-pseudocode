/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140806574
 * Callers:
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1408065B4 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x14080663C (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
