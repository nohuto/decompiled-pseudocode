/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x14082D76C
 * Callers:
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14082C4D8 (BcdCreateObject.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14082D7AC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x14082D834 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
