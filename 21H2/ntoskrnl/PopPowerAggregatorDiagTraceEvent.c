/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407F274C
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1407F2558 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x1407FFBAC (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorWorker @ 0x140808DA0 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopNotifyCsStateExited @ 0x140996F70 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A0730 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v6; // rdi

  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v6, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
