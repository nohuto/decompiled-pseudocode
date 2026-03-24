/*
 * XREFs of RtlCreateAcl @ 0x140660570
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14027F450 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1402C91B4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x1403B4648 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C44 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenCapability @ 0x140586730 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5610 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405DAB30 (ObpVerifyAccessToBoundaryEntry.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SepCreateImpersonationTokenDacl @ 0x14065B8D0 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14065F440 (SepAppendAceToTokenObjectAcl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpCreateServerAcl @ 0x1406B2784 (RtlpCreateServerAcl.c)
 *     PopCreateNotificationName @ 0x1406C1060 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406E49AC (PiUEventInitClientRegistrationContext.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14071BA28 (IopCreateSecurityDescriptorPerType.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140731E9C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C380 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140768234 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140778F88 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077ED1C (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407845E0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140792FC4 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140795F90 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0CAC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407A1094 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407A128C (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A70A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A841C (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407BFE50 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA510 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC94C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A3B68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3D20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A3FA4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x140914058 (RtlpComputeMergedAcl2.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CA60 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E8FC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14098098C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C6BB8 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140A47F10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A484C0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A4874C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A4A880 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A517DC (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A51B9C (PiAuCreateStandardSecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     WmipInitializeSecurity @ 0x140A69C2C (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6DD90 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6E0A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x140A6F2EC (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
  result = 0;
  Acl->AclRevision = v4;
  Acl->Sbz1 = 0;
  Acl->AclSize = v3 & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
