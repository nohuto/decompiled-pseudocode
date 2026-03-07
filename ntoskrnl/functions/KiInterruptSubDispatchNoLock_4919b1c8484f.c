unsigned __int8 __fastcall KiInterruptSubDispatchNoLock()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v7; // r10
  __int64 CurrentThread; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  bool v13; // zf
  unsigned __int8 result; // al
  int v15; // edx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
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
    v9 = v5 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v9;
    v10 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v9;
    v11 = v9 + v10;
    v12 = v11;
    if ( HIDWORD(v11) )
      v12 = -1;
    *(_DWORD *)(CurrentThread + 80) = v12;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0xBE) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v9);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v1 + 136) = v0 - 128;
  v13 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v13 )
    EtwGetKernelTraceTimestamp((__int64)v16, 536887296LL);
  result = KiCallInterruptServiceRoutine(v1, 0);
  if ( *(_BYTE *)(v0 + 243) )
  {
    v15 = result;
    BYTE1(v15) = *(_BYTE *)(v1 + 88);
    result = PerfInfoLogInterrupt(v1, v15, (__int64)v16);
  }
  _disable();
  return result;
}
