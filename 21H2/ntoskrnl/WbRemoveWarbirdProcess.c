/*
 * XREFs of WbRemoveWarbirdProcess @ 0x14067BEB0
 * Callers:
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_140605F04 @ 0x140605F04 (sub_140605F04.c)
 *     sub_140643B14 @ 0x140643B14 (sub_140643B14.c)
 *     sub_140643E2C @ 0x140643E2C (sub_140643E2C.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  _RTL_BALANCED_NODE *v7; // rax
  signed __int8 v8; // cf
  _RTL_BALANCED_NODE *v9; // rbx
  char v10; // di
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DF8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DF8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DF8, v3, (ULONG_PTR)&qword_140C53DF8);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  v4 = sub_140643B14(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53DF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53DF8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DF8, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53DF8, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53DF8, v7, (ULONG_PTR)&qword_140C53DF8);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v4 = sub_140605F04((__int64)&dword_140C53DD0, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DF8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53DF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53DF8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_140643E2C(v11);
  }
  return (unsigned int)v4;
}
