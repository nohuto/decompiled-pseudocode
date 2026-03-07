__int64 __fastcall KiVmbusInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v3; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v5; // r10
  __int64 CurrentThread; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  __int64 (*v12)(void); // rsi
  __int64 result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(3LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v3 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v5 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v5 = v3 ^ __ROR4__(*v5, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v7 = v3 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v7;
    v8 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v7;
    v9 = v7 + v8;
    v10 = v9;
    if ( HIDWORD(v9) )
      v10 = -1;
    *(_DWORD *)(CurrentThread + 80) = v10;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0xBE) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v7);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v11 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v11 )
    EtwGetKernelTraceTimestamp((__int64)v14, 536887296LL);
  v12 = HvlpInterruptCallback[*(unsigned int *)(v0 + 224)];
  result = v12();
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv(v12, (unsigned int)(((*(_DWORD *)(v0 + 224) + 48) << 8) + 1), v14);
  _disable();
  return result;
}
