/*
 * XREFs of RtlSubAuthoritySid @ 0x14027F290
 * Callers:
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x140673594 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x140674294 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x14067432C (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406744C0 (RtlIsElevatedRid.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     SepCheckCapabilities @ 0x1406A7AE0 (SepCheckCapabilities.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     SepValidateReferencedCachedHandles @ 0x1407182A0 (SepValidateReferencedCachedHandles.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D458 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140768234 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077ED1C (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140792FC4 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14079D5F0 (InitializeSidLookupTable.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A70A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A841C (CmpHiveRootSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC94C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AA8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1409137C0 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140913C6C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140914568 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CA60 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950400 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E8FC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
