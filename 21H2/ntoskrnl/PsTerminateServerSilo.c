/*
 * XREFs of PsTerminateServerSilo @ 0x1409AB9B0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D78E0 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
