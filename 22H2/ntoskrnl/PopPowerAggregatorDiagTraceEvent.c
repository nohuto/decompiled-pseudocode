/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407A9EF0
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1407A9CFC (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorWorker @ 0x140874E50 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1408782B8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993DBC (PopPowerAggregatorNotifySuspendResume.c)
 *     PopNotifyCsStateExited @ 0x140997EB0 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A1014 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
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
