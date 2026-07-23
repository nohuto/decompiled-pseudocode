/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407764F4
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140382E58 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140775EE8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776208 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorWorker @ 0x1407762E0 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776368 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopNotifyCsStateExited @ 0x1408EFEF0 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408FA5D8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
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
