/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     RtlInsertHeadCircularList @ 0x14024AC04 (RtlInsertHeadCircularList.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  PRTL_BALANCED_NODE v7; // rax
  _RTL_BALANCED_NODE *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v10[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  v10[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v10[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v10);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 24);
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  v6 = a1 + 40;
  v7 = KeAbPreAcquire(v6, 0LL, 0);
  v8 = v7;
  if ( v7 )
    KeAbPreWait((__int64)v7);
  KeWaitForSingleObject(&v10[1], Executive, 0, 0, 0LL);
  if ( v8 )
  {
    KeAbPreAcquire(v6, v8, 0);
    KeAbPostReleaseEx(v6, (ULONG_PTR)v8);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
