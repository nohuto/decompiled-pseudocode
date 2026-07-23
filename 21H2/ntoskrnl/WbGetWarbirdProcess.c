/*
 * XREFs of WbGetWarbirdProcess @ 0x140643E64
 * Callers:
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 *     WbCreateWarbirdProcess @ 0x14062186C (WbCreateWarbirdProcess.c)
 *     sub_140643B14 @ 0x140643B14 (sub_140643B14.c)
 *     sub_140643E2C @ 0x140643E2C (sub_140643E2C.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  _RTL_BALANCED_NODE *v12; // rax
  __int64 v13; // r8
  signed __int8 v14; // cf
  _RTL_BALANCED_NODE *v15; // rdi
  _QWORD *v16; // r14
  char v17; // si
  _QWORD *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DF8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DF8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DF8, v8, (ULONG_PTR)&qword_140C53DF8);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_140643B14(a1, &v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53DF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53DF8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_24;
    v9 = WbCreateWarbirdProcess(a1, &v18);
    if ( v9 < 0 )
      goto LABEL_24;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DF8, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53DF8, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53DF8, v12, (ULONG_PTR)&qword_140C53DF8);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    v16 = v18;
    v9 = sub_1405E7374((__int64)&dword_140C53DD0, (__int64)v18, v13, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DF8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53DF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53DF8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_24:
    v3 = v18;
    goto LABEL_11;
  }
  *a3 = v18;
LABEL_11:
  sub_140643E2C((__int64)v3);
  return (unsigned int)v9;
}
