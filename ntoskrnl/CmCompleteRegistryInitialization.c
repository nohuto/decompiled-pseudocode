/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1408174BC
 * Callers:
 *     NtInitializeRegistry @ 0x140799FB0 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x14040A310 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x14040A3E0 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x14040A448 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 *     PsBootPhaseComplete @ 0x140812760 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x140817810 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x140817904 (CmpCreateRegistryThread.c)
 *     PoEnableCriticalShutdown @ 0x140818B24 (PoEnableCriticalShutdown.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140818C3C (ExNotifyPlatformBinaryExecuted.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     CmpCmdInit @ 0x140819024 (CmpCmdInit.c)
 *     PnpBootPhaseComplete @ 0x14081BD60 (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     ExEnableNlsSectionCache @ 0x1409F8758 (ExEnableNlsSectionCache.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  bool v3; // di
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v3 = a1 == 1;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(3u, 0LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    if ( !CmNtSkipRegistryInit )
      CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v4) = v3;
    CmpCmdInit(v4);
    CmpUnlockRegistry(v6, v5, v7, v8);
    if ( a1 != 1 && !CmNtSkipRegistryInit )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v9 = 0, CmpForceSynchronousMachineHiveLoad) )
        v9 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v11 = CmpCreateRegistryThread(
              &Handle,
              v10,
              CmpFinishSystemHivesLoad,
              (unsigned __int64)&Event & -(__int64)(v9 != 0));
      if ( v11 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v11);
      if ( v9 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v13, v12, v14);
    }
    Feature_BamQosGrouping__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x800u;
    Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x1000u;
    Feature_SchedulerQosPreemption__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x4000u;
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PoEnableCriticalShutdown();
    ExEnableNlsSectionCache();
    ExNotifyPlatformBinaryExecuted();
    byte_140D1BC30 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
