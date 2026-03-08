/*
 * XREFs of KiInswapAndReadyThread @ 0x1402C06E8
 * Callers:
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1402C0908 (KiRequestProcessInSwap.c)
 */

int __fastcall KiInswapAndReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  volatile signed __int32 *v5; // rdi
  signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) != 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
      {
        v5 = *(volatile signed __int32 **)(a2 + 184);
        KiAcquireKobjectLockSafe(v5);
        if ( (v5[210] & 7) != 0 )
          goto LABEL_11;
        _InterlockedAnd(v5, 0xFFFFFF7F);
      }
    }
    *(_QWORD *)(a2 + 216) = 0LL;
    v10 = (_QWORD *)(a2 + 216);
    LODWORD(v7) = KiReadyDeferredReadyList(a1, &v10);
    return v7;
  }
  v5 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v5);
  if ( (v5[210] & 7) != 0 )
  {
LABEL_11:
    LODWORD(v7) = KiRequestProcessInSwap(a2, v5);
    return v7;
  }
  _InterlockedExchangeAdd(v5 + 210, 8u);
  _InterlockedAnd(v5, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
  *(_BYTE *)(a2 + 388) = 6;
  v6 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiStackInSwapListHead);
  v7 = KiStackInSwapListHead;
  do
  {
    *v6 = v7;
    v8 = v7;
    v7 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v6, v7);
  }
  while ( v7 != v8 );
  if ( !v7 )
    LODWORD(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  return v7;
}
