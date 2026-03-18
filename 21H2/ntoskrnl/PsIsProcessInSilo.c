/*
 * XREFs of PsIsProcessInSilo @ 0x140300B74
 * Callers:
 *     PsIsThreadInSilo @ 0x1402F6170 (PsIsThreadInSilo.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x1407A87D0 (PspThreadFromTicket.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x140212034 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406E1570 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.StaticBitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
