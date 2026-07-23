/*
 * XREFs of WbAllocateSlots @ 0x14066759C
 * Callers:
 *     sub_140667500 @ 0x140667500 (sub_140667500.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     memset @ 0x140413800 (memset.c)
 *     sub_140667774 @ 0x140667774 (sub_140667774.c)
 */

__int64 __fastcall WbAllocateSlots(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  __int64 v11; // rsi
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  char v19; // r14

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 1072);
  v11 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  v12 = 0LL;
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = a3 + 1;
  while ( 1 )
  {
    if ( a2 >= v13 )
    {
LABEL_10:
      a2 = -1;
    }
    else
    {
      v14 = (_BYTE *)(a2 + a1 + 44);
      while ( *v14 != (_BYTE)v12 )
      {
        ++a2;
        ++v14;
        if ( a2 >= v13 )
          goto LABEL_10;
      }
    }
    if ( a2 == -1 )
      break;
    v15 = sub_140667774(a1, a2 + 1, a4 - 1);
    if ( v15 == -1 )
      break;
    a2 = v15 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v12, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( a2 != -1 )
  {
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v17, (ULONG_PTR)v10);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    if ( (unsigned int)sub_140667774(a1, a2, a4) == -1 )
    {
      v4 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( a4 )
        memset((void *)(a1 + a2 + 44LL), 2, a4 - 1);
      *(_BYTE *)(a2 + a4 - 1 + a1 + 44) = 1;
    }
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}
