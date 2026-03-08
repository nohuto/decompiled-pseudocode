/*
 * XREFs of KiRequestProcessInSwap @ 0x1402C0908
 * Callers:
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402C0868 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C0A08 (MmNotifyProcessInSwapTrigger.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // si
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 *v8; // rdi
  signed __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = *(_QWORD **)(a2 + 352);
  v6 = (_QWORD *)(a1 + 216);
  if ( *v5 != a2 + 344 )
    __fastfail(3u);
  *v6 = a2 + 344;
  v6[1] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 352) = v6;
  LOBYTE(v7) = *(_DWORD *)(a2 + 840) & 7;
  if ( (_BYTE)v7 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 840), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v8 = (signed __int64 *)(a2 + 360);
    _m_prefetchw(&KiProcessInSwapListHead);
    v7 = KiProcessInSwapListHead;
    do
    {
      *v8 = v7;
      v9 = v7;
      v7 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v8, v7);
    }
    while ( v7 != v9 );
    if ( !v7 )
      LOBYTE(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v7;
}
