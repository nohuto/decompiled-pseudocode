/*
 * XREFs of sub_1406069DC @ 0x1406069DC
 * Callers:
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     WbFreeMemoryBlockRegion @ 0x140606AE4 (WbFreeMemoryBlockRegion.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall sub_1406069DC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  unsigned __int64 *v5; // rbx
  PRTL_BALANCED_NODE v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  char v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v4 = a1;
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 224);
  v6 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v13 = 0LL;
  v7 = sub_140643B78(v4 + 184, a2, 8, (unsigned int)&v13, (__int64)&v11);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v13;
  v12 = v8;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v12, a2);
  return (unsigned int)v9;
}
