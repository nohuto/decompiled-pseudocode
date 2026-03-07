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
      CRitTimerScanWakeSystem::ritTimerScanWakeEvent = (PRKEVENT)CreateKernelEvent(1LL);
      if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
      {
        CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0LL;
        result = 0LL;
        qword_1C0362190 = 0LL;
        dword_1C0362188 = 0;
        byte_1C0362198 = 0;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
