/*
 * XREFs of _PnpSetObjectProperty @ 0x14077198C
 * Callers:
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1406E9E7C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PnpInitializeSessionId @ 0x14076B24C (PnpInitializeSessionId.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x14076B308 (PnpInitializeInheritedRestrictedSd.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiDcContainerRequiresConfiguration @ 0x14076DAF0 (PiDcContainerRequiresConfiguration.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14076DC84 (PnpClearDeviceTemporaryProperties.c)
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PiDrvDbSetupNodes @ 0x1408260F8 (PiDrvDbSetupNodes.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140845D74 (PipDmgSaveDeviceDmarPolicy.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x14085531C (PiIommuSaveDeviceAtsSettings.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x140947274 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140957044 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipSetGuestAssignedProperty @ 0x14095A5E8 (PipSetGuestAssignedProperty.c)
 *     _CmDeleteDeviceWorker @ 0x140A245FC (_CmDeleteDeviceWorker.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A297B0 (_CmUpdateDevicePanelInterface.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A2A0E4 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A2AAB0 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A2B388 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140B4FB90 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x140771B04 (_PnpSetObjectPropertyWorker.c)
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
