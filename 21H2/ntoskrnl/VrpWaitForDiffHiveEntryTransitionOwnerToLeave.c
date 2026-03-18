/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140927128
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140690FEC (VrpLoadDifferencingHive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1402334A0 (RtlInsertHeadCircularList.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v9[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v9[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v9);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 24);
  KeAbPostRelease(a1 + 24);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = (__int64 *)KeAbPreAcquire(v3, 0LL);
  v7 = (unsigned __int64)v4;
  if ( v4 )
    KeAbPreWait(v4, v5, v6);
  KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
  if ( v7 )
  {
    KeAbPreAcquire(v3, v7);
    KeAbPostReleaseEx(v3, v7);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
