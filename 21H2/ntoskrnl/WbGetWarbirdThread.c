/*
 * XREFs of WbGetWarbirdThread @ 0x1406438F0
 * Callers:
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 *     sub_140642978 @ 0x140642978 (sub_140642978.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 *     sub_1406222AC @ 0x1406222AC (sub_1406222AC.c)
 *     sub_140643AE0 @ 0x140643AE0 (sub_140643AE0.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rbx
  unsigned __int64 *v7; // rdi
  PRTL_BALANCED_NODE v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v12; // rax
  _RTL_BALANCED_NODE *v13; // rax
  __int64 v14; // r8
  _RTL_BALANCED_NODE *v15; // rsi
  _QWORD *v16; // r14
  char v17; // bp
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 128);
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v18 = 0LL;
  v9 = sub_140643B78((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v18, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v18;
    if ( v18 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 8));
      v10 = (_QWORD *)v18;
    }
    v19 = v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v9 = sub_1406222AC(a1, (__int64)CurrentThread, &v19);
    if ( v9 < 0 )
    {
LABEL_25:
      v4 = v19;
      goto LABEL_15;
    }
    v12 = KeGetCurrentThread();
    --v12->SpecialApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v13, (ULONG_PTR)v7);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    v16 = v19;
    v9 = sub_1405E7374(a1 + 88, (__int64)v19, v14, *v19, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 1);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_25;
  *a3 = v19;
LABEL_15:
  sub_140643AE0(a1, v4);
  return (unsigned int)v9;
}
