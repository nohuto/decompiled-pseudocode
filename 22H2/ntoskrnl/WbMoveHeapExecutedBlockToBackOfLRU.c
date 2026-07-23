/*
 * XREFs of WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406C6310
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall WbMoveHeapExecutedBlockToBackOfLRU(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rcx
  char v11; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (a2[2] & 1) != 0 )
  {
    v8 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v9 = (__int64 **)a2[1], *v9 != a2)
      || (*v9 = v8, v8[1] = (__int64)v9, v10 = *(__int64 ***)(a1 + 72), *v10 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *a2 = a1 + 64;
    a2[1] = (__int64)v10;
    *v10 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
