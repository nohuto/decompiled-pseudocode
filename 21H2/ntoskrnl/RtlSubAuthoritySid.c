/*
 * XREFs of RtlSubAuthoritySid @ 0x14026D6C0
 * Callers:
 *     SepCheckCapabilities @ 0x140605560 (SepCheckCapabilities.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406687C4 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x1406694C4 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x14066955C (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406696F0 (RtlIsElevatedRid.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406BC3D0 (ObpVerifyCreatorAccessCheck.c)
 *     SepValidateReferencedCachedHandles @ 0x1406C68F0 (SepValidateReferencedCachedHandles.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1407683F4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EEDC (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140794574 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14079D7F0 (InitializeSidLookupTable.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A72A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CCABC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A3C08 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140913920 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913DCC (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409146C8 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CBC0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409505D0 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
