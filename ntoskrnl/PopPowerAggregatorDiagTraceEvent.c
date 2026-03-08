/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1407577FC
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140757608 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorWorker @ 0x140871F90 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140990D0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopNotifyCsStateExited @ 0x140994E00 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x14099DF84 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
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
