/*
 * XREFs of _PnpSetObjectProperty @ 0x140686C8C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     _CmUpdateDevicePanel @ 0x140683E30 (_CmUpdateDevicePanel.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14068539C (PnpClearDeviceTemporaryProperties.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140685424 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x14078E748 (PnpInitializeInheritedRestrictedSd.c)
 *     PnpInitializeSessionId @ 0x140791830 (PnpInitializeSessionId.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PiDrvDbSetupNodes @ 0x14081C208 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14081D82C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1408213C0 (PipDmgSaveDeviceDmarPolicy.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x14084B2A8 (PiIommuSaveDeviceAtsSettings.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiDcContainerRequiresConfiguration @ 0x1408793AC (PiDcContainerRequiresConfiguration.c)
 *     _CmUpdateDevicePanelInterface @ 0x140881498 (_CmUpdateDevicePanelInterface.c)
 *     IoGetDeviceDirectory @ 0x1409520A0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x140955E50 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140968954 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipSetGuestAssignedProperty @ 0x14096C138 (PipSetGuestAssignedProperty.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A6478C (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140B91320 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x140686E0C (_PnpSetObjectPropertyWorker.c)
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
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
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
  v18 = PnpSetObjectPropertyWorker(
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
  v16 = v18;
  if ( v14 )
  {
    LODWORD(SecurityDescriptorLength[0]) = v18;
    v19 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
