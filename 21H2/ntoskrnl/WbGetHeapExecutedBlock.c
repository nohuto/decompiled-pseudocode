/*
 * XREFs of WbGetHeapExecutedBlock @ 0x1406427A4
 * Callers:
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140642370 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 *     sub_1406434C4 @ 0x1406434C4 (sub_1406434C4.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, __int64 **a3)
{
  int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // edi
  __int64 *v10; // rbx
  int v12; // eax
  __int64 *v13; // r14
  __int64 *v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+58h] BYREF

  v5 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56);
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks((unsigned __int64 *)a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_1406434C4(a1, *(_QWORD *)(a2 + 272), &v14, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v12 = sub_1405E5EA0(a1, a2, &v14);
    v10 = v14;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddHeapExecutedBlockToCache(a1, (__int64)v14, &v15);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v15;
    if ( v15 )
    {
      sub_14064290C(a1, v10);
      v10 = v13;
      v15 = 0LL;
    }
  }
  else
  {
    v10 = v14;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v10);
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_14064290C(a1, v10);
  sub_14064290C(a1, v15);
  return (unsigned int)v9;
}
