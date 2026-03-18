/*
 * XREFs of WheaConfigureErrorSource @ 0x140A55520
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x14084E340 (WheaAddErrorSourceDeviceDriver.c)
 *     HalpWheaInitDiscard @ 0x140AF9508 (HalpWheaInitDiscard.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     WheapInitializeDeferredErrorSources @ 0x140643344 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  char v14; // cl
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 > 0x10 )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 64 * (__int64)a1);
  v5 = -1073741823;
  v6 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock, 0, v6, (__int64)&WheapConfigTableLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = KeAbPreAcquire((__int64)&WheapSourceConfiguration + 64 * v2, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapSourceConfiguration + 8 * v2,
      v7,
      (__int64)&WheapSourceConfiguration + 64 * v2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( !*((_BYTE *)v4 + 8) )
  {
    *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
      *((_QWORD *)v4 + 2) = v9;
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 )
      *((_QWORD *)v4 + 3) = v10;
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
      *((_QWORD *)v4 + 4) = v11;
    v12 = *(__int64 (**)())(a2 + 32);
    if ( !v12 )
    {
      if ( (int)v2 <= 11 || (_DWORD)v2 == 14 )
        goto LABEL_22;
      v12 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v12;
LABEL_22:
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
      *((_QWORD *)v4 + 6) = v13;
    _InterlockedOr(v16, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v5 = WheapInitializeDeferredErrorSources(v2);
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((char *)&WheapSourceConfiguration + 64 * v2);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 64 * v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
  KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  return v5;
}
