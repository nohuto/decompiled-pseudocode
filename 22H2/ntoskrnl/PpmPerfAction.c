/*
 * XREFs of PpmPerfAction @ 0x140220730
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402207D0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckContinueExecution @ 0x14022B0F0 (PpmCheckContinueExecution.c)
 *     PpmPerfApplyProcessorState @ 0x14039843C (PpmPerfApplyProcessorState.c)
 *     PpmParkReportParkedCore @ 0x14057D6F4 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14057D7EC (PpmParkReportSoftParkChange.c)
 *     PpmParkReportUnparkedCore @ 0x14057D8A0 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile __int32 *v4; // rdi
  char v5; // bl
  __int64 v6; // rax

  v4 = DeferredContext;
  v5 = _InterlockedExchange(DeferredContext + 8276, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance(DeferredContext + 8282, 0LL, 0LL, SystemArgument2);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)v4 + 4142);
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
