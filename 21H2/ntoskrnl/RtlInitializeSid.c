/*
 * XREFs of RtlInitializeSid @ 0x1406E52A0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402ED600 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403C9DE0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405A5610 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x14065E3C0 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D458 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140768234 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077ED1C (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140792FC4 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14079D5F0 (InitializeSidLookupTable.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407A30C4 (PiAuAllocateAndInitializeSid.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A70A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A841C (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC94C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AA8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1409137C0 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913C6C (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CA60 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950400 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E8FC (DrvDbGetSecurityDescriptor.c)
 *     PopNetInitialize @ 0x140A3F7C8 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140A48B6C (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7127C (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A7199C (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
