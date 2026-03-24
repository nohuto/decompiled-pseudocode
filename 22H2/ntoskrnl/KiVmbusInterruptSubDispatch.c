/*
 * XREFs of KiVmbusInterruptSubDispatch @ 0x140404480
 * Callers:
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     KiEntropyQueueDpc @ 0x14031D4A0 (KiEntropyQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvlDummyInterruptCallback @ 0x1404F14C0 (HvlDummyInterruptCallback.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     PerfInfoLogInterruptHv @ 0x1405AA080 (PerfInfoLogInterruptHv.c)
 */

__int64 __fastcall KiVmbusInterruptSubDispatch(__int64 a1, __int64 a2, __int64 CurrentThread, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  bool v14; // zf
  __int64 (*v15)(void); // rsi
  __int64 result; // rax
  LARGE_INTEGER v17[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(3LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v4 - 87) = CurrentIrql;
  *(_DWORD *)(v4 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v7 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v9 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v9 = v7 ^ __ROR4__(*v9, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v4 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v10 = v7 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v10;
    v11 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v10;
    v12 = v10 + v11;
    v13 = v12;
    if ( HIDWORD(v12) )
      v13 = -1;
    *(_DWORD *)(CurrentThread + 80) = v13;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v10);
  }
  _enable();
  if ( *(_DWORD *)(v4 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v14 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v4 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v14 )
    EtwGetKernelTraceTimestamp(v17, 536887296LL, CurrentThread, a4);
  v15 = HvlpInterruptCallback[*(unsigned int *)(v4 + 224)];
  result = v15();
  if ( *(_BYTE *)(v4 + 243) )
    result = PerfInfoLogInterruptHv(v15, (unsigned int)(((*(_DWORD *)(v4 + 224) + 48) << 8) + 1), v17);
  _disable();
  return result;
}
