/*
 * XREFs of WbGetWarbirdProcess @ 0x1406C7E04
 * Callers:
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_140667ED4 @ 0x140667ED4 (sub_140667ED4.c)
 *     WbCreateWarbirdProcess @ 0x1406A559C (WbCreateWarbirdProcess.c)
 *     sub_1406C7AB4 @ 0x1406C7AB4 (sub_1406C7AB4.c)
 *     sub_1406C7DCC @ 0x1406C7DCC (sub_1406C7DCC.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  signed __int8 v14; // cf
  __int64 v15; // rdi
  _QWORD *v16; // r14
  char v17; // si
  _QWORD *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DB8, v8, (ULONG_PTR)&qword_140C53DB8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_1406C7AB4(a1, &v18);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53DB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53DB8);
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
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53DB8, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53DB8, v12, (ULONG_PTR)&qword_140C53DB8);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v18;
    v9 = sub_140667ED4((__int64)&dword_140C53D90, (__int64)v18, v13, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53DB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53DB8);
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
  sub_1406C7DCC((__int64)v3);
  return (unsigned int)v9;
}
