/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x140594C0C
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x140584360 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1409850E8 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 7u, a2);
  }
}
