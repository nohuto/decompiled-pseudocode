/*
 * XREFs of WbGetWarbirdProcess @ 0x14064F044
 * Callers:
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
 *     sub_140688214 @ 0x140688214 (sub_140688214.c)
 *     WbCreateWarbirdProcess @ 0x1406C2B6C (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  signed __int8 v14; // cf
  __int64 v15; // rdi
  volatile signed __int64 *v16; // r14
  char v17; // si
  volatile signed __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140C53DB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53DB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53DB8, v8, (ULONG_PTR)&qword_140C53DB8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14064ECF4(a1, &v18);
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
    v9 = sub_140688214((unsigned int)&dword_140C53D90, (_DWORD)v18, v13, *v18, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53DB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53DB8);
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
  sub_14064F00C(v3);
  return (unsigned int)v9;
}
