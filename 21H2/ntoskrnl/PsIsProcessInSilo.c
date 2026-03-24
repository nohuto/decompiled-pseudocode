/*
 * XREFs of PsIsProcessInSilo @ 0x14025CA38
 * Callers:
 *     PsIsThreadInSilo @ 0x14025C988 (PsIsThreadInSilo.c)
 *     PsLookupThreadByThreadId @ 0x140625630 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x140625880 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140625930 (PspThreadFromTicket.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406BF51C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
