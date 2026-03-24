/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140776334
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140382CA8 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140775D28 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776048 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorWorker @ 0x140776120 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407761A8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopNotifyCsStateExited @ 0x1408EFD90 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408FA478 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
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
