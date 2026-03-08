/*
 * XREFs of WheaConfigureErrorSource @ 0x140A8D100
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x14080C280 (WheaAddErrorSourceDeviceDriver.c)
 *     HalpWheaInitDiscard @ 0x140B60A80 (HalpWheaInitDiscard.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     WheapInitializeDeferredErrorSources @ 0x14060DF90 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 (*v9)(); // rax
  char v10; // cl
  signed __int32 v12[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 > 0x12 )
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
    if ( *(_QWORD *)(a2 + 8) )
      *((_QWORD *)v4 + 2) = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) )
      *((_QWORD *)v4 + 3) = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) )
      *((_QWORD *)v4 + 4) = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 32) )
    {
      v9 = *(__int64 (**)())(a2 + 32);
    }
    else
    {
      if ( (int)v2 <= 11 || (_DWORD)v2 == 14 )
        goto LABEL_23;
      v9 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v9;
LABEL_23:
    if ( *(_QWORD *)(a2 + 40) )
      *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 40);
    _InterlockedOr(v12, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v5 = WheapInitializeDeferredErrorSources(v2);
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 8 * v2);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 64 * v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
  KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  return v5;
}
