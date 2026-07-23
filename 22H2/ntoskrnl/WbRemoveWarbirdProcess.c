/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1406872A4
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14068787C @ 0x14068787C (sub_14068787C.c)
 *     sub_1406C7AB4 @ 0x1406C7AB4 (sub_1406C7AB4.c)
 *     sub_1406C7DCC @ 0x1406C7DCC (sub_1406C7DCC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  char v10; // di
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DB8, v3, (ULONG_PTR)&qword_140C53DB8);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_1406C7AB4(a1, 0LL);
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
    v4 = sub_14068787C((unsigned int)&dword_140C53D90, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53DB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53DB8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_1406C7DCC(v11);
  }
  return (unsigned int)v4;
}
