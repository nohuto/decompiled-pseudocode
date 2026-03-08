/*
 * XREFs of KiFastReadyThread @ 0x140239100
 * Callers:
 *     KeReadyThread @ 0x140238CF8 (KeReadyThread.c)
 *     KiInSwapKernelStacks @ 0x1402A72E0 (KiInSwapKernelStacks.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140226178 (KiDeferredReadyThread.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiEnterDeferredReadyState @ 0x140341110 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rdx
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = 4;
    if ( CurrentIrql != 2 )
    {
      a2 = -1LL << (CurrentIrql + 1);
      v9 = a2 & 4;
    }
    a3 = (unsigned int)v9 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiEnterDeferredReadyState(a1);
  *(_QWORD *)(a1 + 64) = 0LL;
  KiDeferredReadyThread((__int64)CurrentPrcb, a1);
  LOBYTE(v6) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v6);
}
