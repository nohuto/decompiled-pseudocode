/*
 * XREFs of RtlSubAuthoritySid @ 0x1402EF430
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140660EF4 (RtlpCapabilityCheckSystemCapability.c)
 *     LookupSidInTable @ 0x1406775C8 (LookupSidInTable.c)
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406C0B60 (ObpVerifyCreatorAccessCheck.c)
 *     SeQueryMandatoryLabel @ 0x1406C9990 (SeQueryMandatoryLabel.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140801A80 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140831E08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140848298 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140949890 (PiAuCheckClientInteractive.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9218 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     SepCheckCapabilities @ 0x1409CC77C (SepCheckCapabilities.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D6F7C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC784 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
