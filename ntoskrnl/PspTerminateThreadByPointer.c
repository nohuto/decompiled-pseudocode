/*
 * XREFs of PspTerminateThreadByPointer @ 0x1407DA8F0
 * Callers:
 *     PspSystemThreadStartup @ 0x140354CF0 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     NtTerminateThread @ 0x1407DADE0 (NtTerminateThread.c)
 *     PspTerminateAllThreads @ 0x1407DB73C (PspTerminateAllThreads.c)
 *     NtTerminateProcess @ 0x1407DC2F0 (NtTerminateProcess.c)
 *     PsTerminateSystemThread @ 0x1407DC870 (PsTerminateSystemThread.c)
 *     PspUserThreadStartup @ 0x1407ED430 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x1409AE950 (PspSecureThreadStartup.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x140354D78 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1409B0A80 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1376) & 0x20) != 0 && (*(_DWORD *)(v4 + 1124) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1448));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1376), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 2172) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1376), 0) )
    *(_DWORD *)(a1 + 1432) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
