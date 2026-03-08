/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1403554AC
 * Callers:
 *     KiBeginThreadAccountingPeriod @ 0x140228310 (KiBeginThreadAccountingPeriod.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiSignalThreadForApc @ 0x140353F08 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140354598 (KiInsertQueueApc.c)
 */

char __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return v6;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  v8 = 0;
  v5 = a2 + 648;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v8);
      v6 = *(_QWORD *)(a2 + 64);
    }
    while ( v6 );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v5 + 82) )
  {
    *(_BYTE *)(v5 + 82) = 1;
    KiInsertQueueApc(v5);
    LOBYTE(v6) = KiSignalThreadForApc(a1, v5, 2);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return v6;
}
