char __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v7; // r10
  __int64 CurrentThread; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r12
  bool v13; // zf
  int v14; // edi
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned __int8 v20; // [rsp+20h] [rbp-48h]
  _BYTE v21[64]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 92);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = KzSetIrqlUnsafe(v2);
  }
  else
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = v3;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v5 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v7 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v7 = v5 ^ __ROR4__(*v7, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v3 = v5 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v3;
    v9 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v3;
    v10 = v3 + v9;
    v11 = v10;
    if ( HIDWORD(v10) )
      v11 = -1;
    *(_DWORD *)(CurrentThread + 80) = v11;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0xBE) != 0 )
      LOBYTE(v3) = KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v3);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    LOBYTE(v3) = KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v12 = v1 + 8;
  v13 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v13 )
    LOBYTE(v3) = EtwGetKernelTraceTimestamp((__int64)v21, 536887296LL);
  while ( 2 )
  {
    v14 = 0;
    do
    {
      v15 = v12 - 8;
      if ( (*(_DWORD *)(v15 + 104) & 1) != 0 )
      {
        v20 = 0;
      }
      else
      {
        v16 = *(unsigned __int8 *)(v15 + 93);
        if ( !(_BYTE)v16 )
        {
          LOBYTE(v3) = KiDispatchPassiveInterrupts(v15);
          goto LABEL_29;
        }
        if ( (_BYTE)v16 != *(_BYTE *)(v1 + 92) )
          __writecr8(v16);
        LOBYTE(v3) = KiCallInterruptServiceRoutine(v15, 1);
        v20 = v3;
        v17 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v17 != *(_BYTE *)(v15 + 93) )
          __writecr8(v17);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v18 = v20;
        BYTE1(v18) = *(_BYTE *)(v15 + 88);
        PerfInfoLogInterrupt(v15, v18, (__int64)v21);
        LOBYTE(v3) = EtwGetKernelTraceTimestamp((__int64)v21, 536887296LL);
      }
      if ( v20 )
      {
        if ( *(_WORD *)(v15 + 108) != 1 )
          goto LABEL_29;
        ++v14;
      }
      v12 = *(_QWORD *)(v15 + 8);
    }
    while ( v12 != v1 + 8 );
    if ( v14 )
      continue;
    break;
  }
LABEL_29:
  _disable();
  return v3;
}
