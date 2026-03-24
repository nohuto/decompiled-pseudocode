/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1406A2524
 * Callers:
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x14064EE24 (WbDispatchOperation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14064ECF4 @ 0x14064ECF4 (sub_14064ECF4.c)
 *     sub_14064F00C @ 0x14064F00C (sub_14064F00C.c)
 *     sub_1406A2AFC @ 0x1406A2AFC (sub_1406A2AFC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  char v10; // di
  volatile signed __int64 *v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DB8, v3, (ULONG_PTR)&qword_140C53DB8);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_14064ECF4(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53DB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53DB8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53DB8, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53DB8, v7, (ULONG_PTR)&qword_140C53DB8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v4 = sub_1406A2AFC((unsigned int)&dword_140C53D90, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53DB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53DB8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14064F00C(v11);
  }
  return (unsigned int)v4;
}
