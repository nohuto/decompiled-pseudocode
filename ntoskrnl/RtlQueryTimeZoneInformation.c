/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1409BA7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140773434 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
