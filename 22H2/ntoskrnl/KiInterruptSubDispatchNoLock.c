/*
 * XREFs of KiInterruptSubDispatchNoLock @ 0x1403FF360
 * Callers:
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x1402F2A90 (PerfInfoLogInterrupt.c)
 *     KiEntropyQueueDpc @ 0x14031D4A0 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x1403439C0 (KiCallInterruptServiceRoutine.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 */

void __fastcall KiInterruptSubDispatchNoLock(__int64 a1, __int64 a2, __int64 CurrentThread, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v9; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  bool v16; // zf
  unsigned __int8 v17; // al
  int v18; // edx
  LARGE_INTEGER v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(unsigned __int8 *)(v5 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v6);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
  }
  *(_BYTE *)(v4 - 87) = CurrentIrql;
  *(_DWORD *)(v4 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v9 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v11 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v11 = v9 ^ __ROR4__(*v11, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v4 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v12 = v9 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v12;
    v13 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v12;
    v14 = v12 + v13;
    v15 = v14;
    if ( HIDWORD(v14) )
      v15 = -1;
    *(_DWORD *)(CurrentThread + 80) = v15;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v12);
  }
  _enable();
  if ( *(_DWORD *)(v4 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v5 + 136) = v4 - 128;
  v16 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v4 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v16 )
    EtwGetKernelTraceTimestamp(v19, 0x20004000u);
  v17 = KiCallInterruptServiceRoutine(v5, 0LL, CurrentThread, a4);
  if ( *(_BYTE *)(v4 + 243) )
  {
    v18 = v17;
    BYTE1(v18) = *(_BYTE *)(v5 + 88);
    PerfInfoLogInterrupt(v5, v18, (__int64)v19);
  }
  _disable();
}
