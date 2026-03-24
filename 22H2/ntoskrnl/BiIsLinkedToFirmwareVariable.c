/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1407848A8
 * Callers:
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1407848DC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x140972730 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
