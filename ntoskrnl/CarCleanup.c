/*
 * XREFs of CarCleanup @ 0x1405D1318
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D2190 (CarReportUnusualShutdown.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADAA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1402FF440 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CarLoggingExit @ 0x1405D1050 (CarLoggingExit.c)
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
