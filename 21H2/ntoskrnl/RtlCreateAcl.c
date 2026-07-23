/*
 * XREFs of RtlCreateAcl @ 0x140655390
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140247A94 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403B47B8 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5840 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpCreateServerAcl @ 0x1406117C4 (RtlpCreateServerAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406506F0 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140654260 (SepAppendAceToTokenObjectAcl.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406BBC8C (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406BCCD8 (PopCreateNotificationName.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406C9E98 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CA2B0 (ObpVerifyAccessToBoundaryEntry.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F4388 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14073205C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C540 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1407683F4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140779148 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EEDC (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407847A0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140794574 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140796190 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0EAC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407A1294 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407A148C (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A72A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407C036C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA830 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CCABC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A3CC8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3E80 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A4104 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x1409141B8 (RtlpComputeMergedAcl2.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CBC0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140980B6C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C7BB8 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140A48F10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A494C0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A4974C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A4B880 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A527DC (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A52B9C (PiAuCreateStandardSecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140A5E080 (IopCreateUmdfDirectory.c)
 *     WmipInitializeSecurity @ 0x140A6AC2C (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6ED90 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6F0A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x140A702EC (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A70E7C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
