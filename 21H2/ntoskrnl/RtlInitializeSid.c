/*
 * XREFs of RtlInitializeSid @ 0x1406BC580
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14029E950 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403C9F80 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405A5840 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406BC3D0 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1407683F4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EEDC (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140794574 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14079D7F0 (InitializeSidLookupTable.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407A32C4 (PiAuAllocateAndInitializeSid.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A72A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CCABC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A3C08 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140913920 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913DCC (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CBC0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409505D0 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140A49B6C (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x140A5E080 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7227C (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A7299C (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
