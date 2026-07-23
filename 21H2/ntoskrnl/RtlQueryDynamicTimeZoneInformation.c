/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140622AD0
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4CB0 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406B7C24 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(void *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
