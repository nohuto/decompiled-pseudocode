/*
 * XREFs of WbGetWarbirdThread @ 0x1406C7890
 * Callers:
 *     WbHeapExecuteCall @ 0x1406C63F8 (WbHeapExecuteCall.c)
 *     sub_1406C6918 @ 0x1406C6918 (sub_1406C6918.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_140667ED4 @ 0x140667ED4 (sub_140667ED4.c)
 *     sub_1406A5FDC @ 0x1406A5FDC (sub_1406A5FDC.c)
 *     sub_1406C7A80 @ 0x1406C7A80 (sub_1406C7A80.c)
 *     sub_1406C7B18 @ 0x1406C7B18 (sub_1406C7B18.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
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
    *(_BYTE *)(v8 + 26) |= 1u;
  v18 = 0LL;
  v9 = sub_1406C7B18((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v18, 0LL);
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
    v9 = sub_1406A5FDC(a1, (__int64)CurrentThread, &v19);
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
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v19;
    v9 = sub_140667ED4(a1 + 88, (__int64)v19, v14, *v19, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 1);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_25;
  *a3 = v19;
LABEL_15:
  sub_1406C7A80(a1, v4);
  return (unsigned int)v9;
}
