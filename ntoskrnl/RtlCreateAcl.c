/*
 * XREFs of RtlCreateAcl @ 0x1406DB640
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140247DF0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1402BE754 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x140384A3C (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140606620 (ExpPlRunOnceInit.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlpCreateServerAcl @ 0x1406839D0 (RtlpCreateServerAcl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14068E428 (PiUEventInitClientRegistrationContext.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D22B0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406D3000 (SepCreateImpersonationTokenDacl.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140740870 (ObpVerifyAccessToBoundaryEntry.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407825CC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x140794270 (PopCreateNotificationName.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1407F0A50 (IopCreateSecurityDescriptorPerType.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407FC318 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140809588 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14080D1E8 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140815AD8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1408458E4 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     ObpGetDosDevicesProtection @ 0x140855400 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x140857EAC (DbgkpCreateNotificationEvent.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408592D8 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     MiCreateMemoryEventSD @ 0x14085B500 (MiCreateMemoryEventSD.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408808A8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x1409B9A6C (RtlpComputeMergedAcl2.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BBA64 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A71340 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140ABFA28 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B48710 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B489A0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B48C50 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B4C2CC (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140B54220 (WmipInitializeSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 *     SshpAlpcInitialize @ 0x140B6437C (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6811C (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6869C (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B69148 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140B69C28 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140B6A590 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B6CC1C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset(Acl, 0, AclLength);
  Acl->AclRevision = v4;
  result = 0;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  Acl->AclSize = v3 & 0xFFFC;
  return result;
}
