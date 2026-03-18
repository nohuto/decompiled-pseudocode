/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1409BD860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD87C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
