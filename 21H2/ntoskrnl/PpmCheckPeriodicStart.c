/*
 * XREFs of PpmCheckPeriodicStart @ 0x1402CFC70
 * Callers:
 *     <none>
 * Callees:
 *     PpmEventTraceFailedPerfCheckStart @ 0x140249A3C (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmCheckStart @ 0x1402CED00 (PpmCheckStart.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C23128, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  }
  else
  {
    PpmCheckMakeupCount = a3;
    PpmCheckStart(0);
  }
}
