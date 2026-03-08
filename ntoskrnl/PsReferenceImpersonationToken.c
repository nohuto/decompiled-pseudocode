/*
 * XREFs of PsReferenceImpersonationToken @ 0x1407C9C20
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v10; // rbp
  BOOLEAN v11; // al

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v10 = Thread[1].WaitBlock[1].Thread;
    if ( v10 )
    {
      v11 = 0;
    }
    else
    {
      v10 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      v11 = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
    }
    *CopyOnOpen = v11;
    ObfReferenceObjectWithTag(v10, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
    *EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
