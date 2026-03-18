/*
 * XREFs of RtlSubAuthoritySid @ 0x1402979B0
 * Callers:
 *     LookupSidInTable @ 0x1406C3710 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14071A040 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C9098 (ObpVerifyCreatorAccessCheck.c)
 *     SeQueryMandatoryLabel @ 0x1407DD960 (SeQueryMandatoryLabel.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF4A0 (RtlpCapabilityCheckSystemCapability.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F51D0 (SepValidateReferencedCachedHandles.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800FBC (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080DE08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080E690 (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140824194 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140851720 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085A568 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F758 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140881244 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14095B700 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409BC120 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC348 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     SepCheckCapabilities @ 0x1409CF30C (SepCheckCapabilities.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA1FC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC894 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01BFC (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA74 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
