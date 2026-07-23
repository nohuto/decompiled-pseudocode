/*
 * XREFs of PspTerminateThreadByPointer @ 0x1406B14D0
 * Callers:
 *     PspSystemThreadStartup @ 0x14029D480 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1406B1130 (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x1406B1460 (NtTerminateThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1296) & 0x20) != 0 && (*(_DWORD *)(v4 + 1124) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1448));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 2172) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1296), 0) )
    *(_DWORD *)(a1 + 1352) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
