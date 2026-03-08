/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14038CD68
 * Callers:
 *     IommuDeviceCreate @ 0x140820F90 (IommuDeviceCreate.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1408220EC (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HalpMmAllocCtxFree(a1, a1, a3, a4);
}
