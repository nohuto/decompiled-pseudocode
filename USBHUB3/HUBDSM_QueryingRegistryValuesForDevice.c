/*
 * XREFs of HUBDSM_QueryingRegistryValuesForDevice @ 0x1C0021380
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0083100 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 */

__int64 __fastcall HUBDSM_QueryingRegistryValuesForDevice(__int64 a1)
{
  return HUBMISC_QueryAndCacheRegistryValuesForDevice(*(_QWORD *)(a1 + 960));
}
