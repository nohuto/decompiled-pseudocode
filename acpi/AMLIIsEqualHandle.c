/*
 * XREFs of AMLIIsEqualHandle @ 0x1C0048794
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIEcStartDevice @ 0x1C0025450 (ACPIEcStartDevice.c)
 *     CacheBBNResult @ 0x1C00349D8 (CacheBBNResult.c)
 *     GetCachedBBNResult @ 0x1C0034ACC (GetCachedBBNResult.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
    return *a1 == *a2;
  return result;
}
