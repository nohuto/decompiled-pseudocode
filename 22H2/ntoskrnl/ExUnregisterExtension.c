/*
 * XREFs of ExUnregisterExtension @ 0x140956A50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExpDereferenceHost @ 0x140956B3C (ExpDereferenceHost.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  void (__fastcall *Count)(__int64, unsigned __int64); // rax
  void (__fastcall *v7)(__int64, unsigned __int64); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_Count = &a1[9].Count;
  v4 = KeAbPreAcquire((ULONG_PTR)&a1[9], 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (ULONG_PTR)p_Count);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  Count = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  if ( Count )
    Count(2LL, a1[7].Count);
  ExWaitForRundownProtectionRelease(a1 + 8);
  v7 = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  a1[10].Count = 0LL;
  if ( v7 )
    v7(3LL, a1[7].Count);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ExpDereferenceHost(a1);
}
