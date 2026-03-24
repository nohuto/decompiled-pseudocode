/*
 * XREFs of KiReadyThread @ 0x140247FB0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140247410 (KiProcessExpiredTimerList.c)
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KiProcessThreadWaitList @ 0x14024AC40 (KiProcessThreadWaitList.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KiRequestProcessInSwap @ 0x1402F28A0 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v5; // rax
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rdi
  signed __int64 *v8; // rbx
  signed __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) != 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
      {
        v10 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe(v10);
        if ( (*(_DWORD *)(v10 + 840) & 7) != 0 )
        {
          LODWORD(v5) = KiRequestProcessInSwap(a2, v10);
          return v5;
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      }
    }
    v5 = a2 + 216;
    v6 = 0LL;
    *(_QWORD *)(a2 + 216) = 0LL;
    while ( 1 )
    {
      v12 = v6;
      KiDeferredReadySingleThread(a1, v5 - 216, &v12);
      v5 = (signed __int64)v12;
      if ( !v12 )
        break;
      v6 = (_QWORD *)*v12;
    }
  }
  else
  {
    v7 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v7);
    if ( (v7[210] & 7) != 0 )
    {
      LODWORD(v5) = KiRequestProcessInSwap(a2, v7);
    }
    else
    {
      _InterlockedExchangeAdd(v7 + 210, 8u);
      _InterlockedAnd(v7, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      *(_BYTE *)(a2 + 388) = 6;
      v8 = (signed __int64 *)(a2 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      v5 = KiStackInSwapListHead;
      do
      {
        *v8 = v5;
        v9 = v5;
        v5 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v8, v5);
      }
      while ( v5 != v9 );
      if ( !v5 )
        LODWORD(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
    }
  }
  return v5;
}
