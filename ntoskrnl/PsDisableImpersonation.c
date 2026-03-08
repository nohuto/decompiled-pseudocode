/*
 * XREFs of PsDisableImpersonation @ 0x1406D2C20
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x14086411C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // r14
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v6; // rax
  BOOLEAN result; // al
  void *v8; // rcx

  v2 = 0;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = *((_DWORD *)&Thread[1].0 + 1) & 3;
      ImpersonationState->EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
      v6 = Thread[1].WaitBlock[1].Thread;
      if ( v6 )
      {
        ImpersonationState->Token = v6;
        v8 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v8);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
