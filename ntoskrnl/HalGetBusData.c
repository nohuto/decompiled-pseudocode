/*
 * XREFs of HalGetBusData @ 0x140370320
 * Callers:
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140370350 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
