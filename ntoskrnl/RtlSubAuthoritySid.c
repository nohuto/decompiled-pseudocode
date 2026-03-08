/*
 * XREFs of RtlSubAuthoritySid @ 0x1402BE740
 * Callers:
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140743AE8 (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140743CF0 (RtlIsElevatedRid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407445E8 (RtlpCapabilityCheckSystemCapability.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407FC318 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140810910 (InitializeSidLookupTable.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140815AD8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1409586E0 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409B9200 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9428 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     SepCheckCapabilities @ 0x1409CC46C (SepCheckCapabilities.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
