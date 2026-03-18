/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1409BD800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F8114 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
