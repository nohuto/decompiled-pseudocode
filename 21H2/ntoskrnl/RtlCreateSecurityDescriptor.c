/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x140724520
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SepVerifyDesktopAppxImage @ 0x1403761D8 (SepVerifyDesktopAppxImage.c)
 *     SepInitProcessAuditSd @ 0x1403CE4A4 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405F412C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x14063BB90 (ExpPlRunOnceInit.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406C32B0 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CC960 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateNotificationName @ 0x1406E7694 (PopCreateNotificationName.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14074F220 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14074F2EC (IopCreateSecurityDescriptorPerType.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407F813C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140801A80 (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14082C34C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14082C74C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14082C950 (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140831E08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     DbgkpCreateNotificationEvent @ 0x14084ED68 (DbgkpCreateNotificationEvent.c)
 *     PfpCreateEvent @ 0x14085075C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14086240C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BB4D8 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D6F7C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A349F0 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140A820BC (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B1ED10 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B1EFA0 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140B2114C (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     WmipInitializeSecurity @ 0x140B22DD4 (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B28514 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140B2940C (IopCreateUmdfDirectory.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 *     ExpKeyedEventInitialization @ 0x140B2A324 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  result = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_OWORD *)SecurityDescriptor + 1) = 0LL;
  *((_QWORD *)SecurityDescriptor + 4) = 0LL;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
