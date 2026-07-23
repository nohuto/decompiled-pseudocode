/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140915100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407141E4 (RtlpQueryTimeZoneInformationWorker.c)
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
