/*
 * XREFs of PsIsProcessInSilo @ 0x1402484DC
 * Callers:
 *     PsIsThreadInSilo @ 0x1402B6178 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402B60F4 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x140796550 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.StaticBitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
