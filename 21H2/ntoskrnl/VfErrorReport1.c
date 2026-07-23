/*
 * XREFs of VfErrorReport1 @ 0x1409D9008
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1409E3BE0 (VfPnpVerifyIrpStackDownward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E4040 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 */

__int64 __fastcall VfErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  return ViErrorReport1(a1, a2, a3);
}
