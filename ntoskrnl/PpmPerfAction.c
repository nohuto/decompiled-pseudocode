/*
 * XREFs of PpmPerfAction @ 0x140236430
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSnapDeliveredPerformance @ 0x140234BB0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckContinueExecution @ 0x140236E60 (PpmCheckContinueExecution.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 *     PpmParkReportUnparkedCore @ 0x14045B1CC (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x14059AC6C (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059AD7C (PpmParkReportSoftParkChange.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile __int32 *v4; // rbx
  char v5; // di
  __int64 v6; // rax

  v4 = DeferredContext;
  v5 = _InterlockedExchange(DeferredContext + 8486, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance((__int64)(DeferredContext + 8492), 0, 0);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)v4 + 4247);
    if ( *(_BYTE *)(v6 + 124) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v6 + 124) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
