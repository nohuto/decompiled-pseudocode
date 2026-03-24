/*
 * XREFs of PpmCheckPeriodicStart @ 0x14022B3C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x14022A450 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1402CB14C (PpmEventTraceFailedPerfCheckStart.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C23C68, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0);
}
