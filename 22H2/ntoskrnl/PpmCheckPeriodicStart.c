/*
 * XREFs of PpmCheckPeriodicStart @ 0x14022AD30
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x140229DC0 (PpmCheckStart.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14032476C (PpmEventTraceFailedPerfCheckStart.c)
 */

__int64 __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C230A8, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0);
}
