/*
 * XREFs of RtlInitializeSid @ 0x14068E3A0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1402FCFD0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407445E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407FC318 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140810910 (InitializeSidLookupTable.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140815AD8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14081E100 (PiAuAllocateAndInitializeSid.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1409586E0 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409B9200 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B43F40 (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B4A3A0 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B50A80 (CmpInitializeTrustedInstallerSid.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6811C (PspInitializeCpuPartitionsDefaultSd.c)
 *     IopCreateUmdfDirectory @ 0x140B69C28 (IopCreateUmdfDirectory.c)
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
