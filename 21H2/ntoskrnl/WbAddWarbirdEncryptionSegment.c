/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x1405D6CE0
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     sub_1405D72F4 @ 0x1405D72F4 (sub_1405D72F4.c)
 *     sub_1405D7328 @ 0x1405D7328 (sub_1405D7328.c)
 *     sub_1405D760C @ 0x1405D760C (sub_1405D760C.c)
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rbx
  int v11; // eax
  int v12; // r8d
  int v13; // ebx
  char v14; // si
  __int64 v16; // rdx
  int v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v21 = 0;
  v18 = 0LL;
  v17 = 0;
  v20 = v3;
  v19 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(a1 + 176);
  v9 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  v11 = sub_1405D7328(a1, &v19, &v18, &v17);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_1405E7374((int)a1 + 136, a2, v12, (unsigned int)&v19, 16, v17);
      if ( v13 >= 0 )
        v13 = sub_1405D760C(a2);
    }
  }
  else if ( a3 )
  {
    sub_1405D760C(v18);
    v18 = 0LL;
    *a3 = v16;
  }
  sub_1405D72F4(v18);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
