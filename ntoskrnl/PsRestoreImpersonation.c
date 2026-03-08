/*
 * XREFs of PsRestoreImpersonation @ 0x1406D2D60
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x14086411C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x140245F40 (SeQueryTokenTrustLink.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspWriteTebImpersonationInfo @ 0x1406DA6D0 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r15
  void *v3; // rbp
  __int64 Token; // rdi
  struct _KTHREAD *v6; // r13
  struct _KTHREAD *v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // bl

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = Thread[1].WaitBlock[1].Thread;
    v3 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( ImpersonationState->Token )
  {
    *($B2204E9EE8E7DD8EE814BFFAF87CA578 *)((char *)&Thread[1].116 + 4) = ($B2204E9EE8E7DD8EE814BFFAF87CA578)v10;
    Thread[1].WaitBlock[1].Thread = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    goto LABEL_11;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  v11 = 1;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v11 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}
