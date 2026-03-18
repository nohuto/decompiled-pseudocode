/*
 * XREFs of PpmPerfAction @ 0x140343B00
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140304CE0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckContinueExecution @ 0x140343BA0 (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCore @ 0x1405DD1A8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1405DD260 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x1405DD2E0 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        struct _KPRCB *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // bl
  _PROC_PERF_CONSTRAINT *Constraint; // rax

  v5 = _InterlockedExchange(&DeferredContext->PowerState.PerfActionMask, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance((__int64)&DeferredContext->PowerState.CheckContext, 0, 0);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    Constraint = DeferredContext->PowerState.CheckContext.Constraint;
    if ( Constraint->Force )
    {
      Constraint->Force = 0;
      PpmPerfApplyProcessorState(DeferredContext, 1);
    }
    PpmPerfApplyProcessorState(DeferredContext, 0);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
