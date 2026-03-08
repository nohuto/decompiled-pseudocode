/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x140A052E0
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x14093E190 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 Pool2; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _QWORD *v10; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1634035799LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)(Pool2 + 16) = Callback;
  *(_QWORD *)(Pool2 + 24) = Context;
  v7 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = (_QWORD *)qword_140D169C8;
  if ( *(PVOID **)qword_140D169C8 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  v6[1] = qword_140D169C8;
  *v6 = &WheapInUsePageOfflineNotifyList;
  *v10 = v6;
  qword_140D169C8 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
