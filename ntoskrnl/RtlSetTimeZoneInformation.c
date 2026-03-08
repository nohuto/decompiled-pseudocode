/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1409BA830
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA84C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
