/*
 * XREFs of CarInit @ 0x1405D18E4
 * Callers:
 *     CarReportUnusualShutdown @ 0x1405D2190 (CarReportUnusualShutdown.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 * Callees:
 *     CarInitLogging @ 0x1405D0E40 (CarInitLogging.c)
 *     CarLoadConfig @ 0x1405D3274 (CarLoadConfig.c)
 *     CarpBugcheckInit @ 0x1405D34B4 (CarpBugcheckInit.c)
 */

__int64 CarInit()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&CarInitialized, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C36518 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    CarLoadConfig();
    result = CarpBugcheckInit();
    if ( DifIsVolatileMode )
      return CarInitLogging();
  }
  return result;
}
