/*
 * XREFs of KiScanInterruptObjectList @ 0x1403FF030
 * Callers:
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x1402F2A90 (PerfInfoLogInterrupt.c)
 *     KiEntropyQueueDpc @ 0x14031D4A0 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x1403439C0 (KiCallInterruptServiceRoutine.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiDispatchPassiveInterrupts @ 0x1405212D0 (KiDispatchPassiveInterrupts.c)
 */

void __fastcall KiScanInterruptObjectList(__int64 a1, __int64 a2, __int64 CurrentThread, __int64 a4)
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
  __int64 v16; // r12
  bool v17; // zf
  int v18; // edi
  __int64 v19; // r12
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // edx
  unsigned __int8 v23; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v24[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(unsigned __int8 *)(v5 + 92);
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
  v16 = v5 + 8;
  v17 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v4 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v17 )
    EtwGetKernelTraceTimestamp(v24, 0x20004000u);
  while ( 2 )
  {
    v18 = 0;
    do
    {
      v19 = v16 - 8;
      if ( (*(_DWORD *)(v19 + 104) & 1) != 0 )
      {
        v23 = 0;
      }
      else
      {
        v20 = *(unsigned __int8 *)(v19 + 93);
        if ( !(_BYTE)v20 )
        {
          KiDispatchPassiveInterrupts(v19);
          goto LABEL_29;
        }
        if ( (_BYTE)v20 != *(_BYTE *)(v5 + 92) )
          __writecr8(v20);
        v23 = KiCallInterruptServiceRoutine(v19, 1LL, CurrentThread, a4);
        v21 = *(unsigned __int8 *)(v5 + 92);
        if ( (_BYTE)v21 != *(_BYTE *)(v19 + 93) )
          __writecr8(v21);
      }
      if ( *(_BYTE *)(v4 + 243) )
      {
        v22 = v23;
        BYTE1(v22) = *(_BYTE *)(v19 + 88);
        PerfInfoLogInterrupt(v19, v22, (__int64)v24);
        EtwGetKernelTraceTimestamp(v24, 0x20004000u);
      }
      if ( v23 )
      {
        if ( *(_WORD *)(v19 + 108) != 1 )
          goto LABEL_29;
        ++v18;
      }
      v16 = *(_QWORD *)(v19 + 8);
    }
    while ( v16 != v5 + 8 );
    if ( v18 )
      continue;
    break;
  }
LABEL_29:
  _disable();
}
