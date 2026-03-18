/*
 * XREFs of HalSetBusData @ 0x140501050
 * Callers:
 *     <none>
 * Callees:
 *     HalSetBusDataByOffset @ 0x140394D80 (HalSetBusDataByOffset.c)
 */

ULONG __fastcall HalSetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalSetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
