/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14079A330
 * Callers:
 *     NtInitializeRegistry @ 0x14078D400 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1403F1B68 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x1403F20B0 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x1403F2118 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x14077F470 (RtlLockBootStatusData.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x140799F94 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x14079A1D4 (CmpCreateRegistryThread.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14079A578 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x14079A600 (PoEnableCriticalShutdown.c)
 *     PoClearTransitionMarker @ 0x14079A638 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 *     PnpBootPhaseComplete @ 0x1407A3624 (PnpBootPhaseComplete.c)
 *     PsBootPhaseComplete @ 0x1407A8CFC (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1407A94CC (ExpRefreshSystemTime.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  char v3; // di
  __int64 v4; // rdx
  int RegistryThread; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2u);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    CmpCmdInit(a1 == 1);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v3 = 0, CmpForceSynchronousMachineHiveLoad) )
        v3 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      RegistryThread = CmpCreateRegistryThread(
                         (__int64)&Handle,
                         v4,
                         (__int64)CmpFinishSystemHivesLoad,
                         (unsigned __int64)&Event & -(__int64)(v3 != 0));
      if ( RegistryThread < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, RegistryThread);
      if ( v3 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
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
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
