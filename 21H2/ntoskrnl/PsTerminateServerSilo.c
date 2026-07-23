/*
 * XREFs of PsTerminateServerSilo @ 0x140905E60
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140615028 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  volatile signed __int32 *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
