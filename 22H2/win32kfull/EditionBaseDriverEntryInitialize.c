/*
 * XREFs of EditionBaseDriverEntryInitialize @ 0x1C00BEDF0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeWin32kCall @ 0x1C00BEE7C (InitializeWin32kCall.c)
 *     wil_InitializeFeatureStaging @ 0x1C03B3078 (wil_InitializeFeatureStaging.c)
 */

__int64 EditionBaseDriverEntryInitialize()
{
  __int64 v0; // rcx
  __int64 result; // rax

  MmPageEntireDriver(EditionBaseDriverEntryInitialize);
  *(_DWORD *)(SGDGetUserSessionState(v0) + 24) = 1;
  result = wil_InitializeFeatureStaging();
  if ( (int)result >= 0 )
  {
    result = InitializeWin32kCall();
    if ( (int)result >= 0 )
    {
      CRitTimerScanWakeSystem::ritTimerScanWakeEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
      if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
      {
        CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0LL;
        result = 0LL;
        qword_1C035F140 = 0LL;
        dword_1C035F138 = 0;
        byte_1C035F148 = 0;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
