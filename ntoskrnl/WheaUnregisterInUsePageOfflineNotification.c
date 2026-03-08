/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x140A05460
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x14093E1D0 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // bl
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *v7; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v8; // rax
  PVOID *v9; // rdx

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v4 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v4, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( Callback == v7[2] )
        break;
      v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*v7;
      if ( (char *)v8 == (char *)&WheapInUsePageOfflineNotifyList )
        goto LABEL_10;
    }
    if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)v8 + 1) != v7 || (v9 = (PVOID *)v7[1], *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    ExFreePoolWithTag(v7, 0x61656857u);
    v1 = 1;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v1 == 0 ? 0xC0000008 : 0;
}
