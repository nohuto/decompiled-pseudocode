/*
 * XREFs of CarCleanup @ 0x1405D37C8
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D4640 (CarReportUnusualShutdown.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADEA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADEBEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14036A570 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x140435400 (memset.c)
 *     CarLoggingExit @ 0x1405D3500 (CarLoggingExit.c)
 */

unsigned __int64 CarCleanup()
{
  unsigned __int64 result; // rax

  result = (unsigned int)CarInitialized;
  if ( CarInitialized )
  {
    CarLoggingExit();
    KeDeregisterBugCheckReasonCallback(&CarBugCheckCallback);
    CarBugCheckCallback.CallbackRoutine = 0LL;
    result = (unsigned __int64)memset(&CarViolationSnapshot, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
