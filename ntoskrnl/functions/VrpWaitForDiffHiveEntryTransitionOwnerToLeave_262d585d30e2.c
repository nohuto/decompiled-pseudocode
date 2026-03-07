__int64 __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  ULONG_PTR v3; // rsi
  __int64 *v4; // rax
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v8; // rdi
  struct _KEVENT v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v9[1], SynchronizationEvent, 0);
  v10 = 0LL;
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v9);
  v2 = (unsigned __int64 *)(a1 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = (__int64 *)KeAbPreAcquire(v3, 0LL);
  v5 = (ULONG_PTR)v4;
  if ( v4 )
    KeAbPreWait(v4);
  KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
  if ( v5 )
  {
    KeAbPreAcquire(v3, v5);
    KeAbPostReleaseEx(v3, v5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)v2, 0LL);
  v8 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  return result;
}
