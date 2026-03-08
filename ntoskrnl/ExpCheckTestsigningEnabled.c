/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x1409F8C88
 * Callers:
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExpTestSigningEnabled;
}
