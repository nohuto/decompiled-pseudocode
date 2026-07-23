/*
 * XREFs of RtlInitializeSid @ 0x140718B40
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140360020 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403C9710 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405A5550 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1406D7180 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140718990 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140767854 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EC1C (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14079D224 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14079DA20 (InitializeSidLookupTable.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407A34F4 (PiAuAllocateAndInitializeSid.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A74D0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A884C (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C7220 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC86C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AF8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140913810 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913CBC (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CAB0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950450 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140958514 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E94C (DrvDbGetSecurityDescriptor.c)
 *     PopNetInitialize @ 0x140A3EBF8 (PopNetInitialize.c)
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
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
