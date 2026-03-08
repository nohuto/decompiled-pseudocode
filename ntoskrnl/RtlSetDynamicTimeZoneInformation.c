/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x1409BA810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA84C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
