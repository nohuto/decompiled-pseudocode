/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14037948C
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x140764AA4 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  return HalpMmAllocCtxFree(a1, a1);
}
