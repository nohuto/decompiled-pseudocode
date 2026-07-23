/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x14095D470
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x14088E5C0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _QWORD *v10; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = Callback;
  PoolWithTag[3] = Context;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (_QWORD *)qword_140CF4728;
  if ( *(PVOID **)qword_140CF4728 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  v6[1] = qword_140CF4728;
  *v6 = &WheapInUsePageOfflineNotifyList;
  *v10 = v6;
  qword_140CF4728 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
