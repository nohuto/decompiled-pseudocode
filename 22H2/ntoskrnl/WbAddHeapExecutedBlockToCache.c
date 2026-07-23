/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x140667CF0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140667E04 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_140667ED4 @ 0x140667ED4 (sub_140667ED4.c)
 *     sub_1406C6210 @ 0x1406C6210 (sub_1406C6210.c)
 *     sub_1406C7464 @ 0x1406C7464 (sub_1406C7464.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // bp
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v16 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_1406C7464(a1, *(_QWORD *)(a2 + 48), &v16, &v15);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v16;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_140667ED4((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v15);
    if ( v12 >= 0 )
    {
      v12 = sub_1406C6210(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
