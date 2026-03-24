/*
 * XREFs of EditionBaseDriverEntryInitialize @ 0x1C0126FB0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeWin32kCall @ 0x1C0127000 (InitializeWin32kCall.c)
 *     wil_InitializeFeatureStaging @ 0x1C0393078 (wil_InitializeFeatureStaging.c)
 */

__int64 EditionBaseDriverEntryInitialize()
{
  __int64 result; // rax

  result = wil_InitializeFeatureStaging();
  if ( (int)result >= 0 )
  {
    result = InitializeWin32kCall();
    if ( (int)result >= 0 )
    {
      CRitTimerScanWakeSystem::ritTimerScanWakeEvent = (PRKEVENT)CreateKernelEvent(1LL);
      if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
      {
        CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0LL;
        return 0LL;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
