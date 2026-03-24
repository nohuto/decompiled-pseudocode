/*
 * XREFs of _PnpSetObjectProperty @ 0x1407420C4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725C90 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmDeleteDeviceWorker @ 0x14072D948 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14072EAF8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PnpStartDeviceNode @ 0x14073A3A4 (PnpStartDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140741C2C (PiPnpRtlSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140742F90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     _CmUpdateDevicePanel @ 0x140743B48 (_CmUpdateDevicePanel.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14074E254 (PnpClearDeviceTemporaryProperties.c)
 *     PiDcContainerRequiresConfiguration @ 0x140758E58 (PiDcContainerRequiresConfiguration.c)
 *     PnpInitializeSessionId @ 0x14076E184 (PnpInitializeSessionId.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140771514 (PipDmgSaveDeviceDmarPolicy.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772660 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbSetupNodes @ 0x1407A3A1C (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x1407A3CA8 (PiDrvDbRegisterNode.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14089E860 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2154 (PnpUpdateRebootRequiredReason.c)
 *     PipSetGuestAssignedProperty @ 0x1408B4554 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 *     _CmUpdateDevicePanelInterface @ 0x140978E70 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A02C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097A940 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140A90500 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14074223C (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptorLength);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
  v17 = v16;
  if ( !v14 )
    return v17;
  LODWORD(SecurityDescriptorLength[0]) = v16;
  v18 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
