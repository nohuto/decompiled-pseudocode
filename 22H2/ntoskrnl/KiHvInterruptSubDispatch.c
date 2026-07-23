/*
 * XREFs of KiHvInterruptSubDispatch @ 0x140404320
 * Callers:
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     KiEntropyQueueDpc @ 0x14031D4A0 (KiEntropyQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvlDummyInterruptCallback @ 0x1404F14C0 (HvlDummyInterruptCallback.c)
 *     HvlSharedIsr @ 0x1404F1B80 (HvlSharedIsr.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiEpfCompletionIsr @ 0x1405240A0 (KiEpfCompletionIsr.c)
 *     PerfInfoLogInterruptHv @ 0x1405AA080 (PerfInfoLogInterruptHv.c)
 */

__int64 __fastcall KiHvInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v3; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v5; // r10
  __int64 CurrentThread; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  __int64 result; // rax
  LARGE_INTEGER v13[5]; // [rsp+20h] [rbp-28h] BYREF

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
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v7);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v11 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v11 )
    EtwGetKernelTraceTimestamp(v13, 0x20004000u);
  KiEpfCompletionIsr();
  HvlSharedIsr();
  result = HvlpInterruptCallback[*(unsigned int *)(v0 + 224)]();
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv(KiHvInterrupt, (unsigned int)(((*(_DWORD *)(v0 + 224) + 48) << 8) + 1), v13);
  _disable();
  return result;
}
