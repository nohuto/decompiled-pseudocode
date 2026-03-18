/*
 * XREFs of RtlEqualSid @ 0x14022A790
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140224B44 (SepSetTrustLevelForProcessToken.c)
 *     RtlFindAceBySid @ 0x140227990 (RtlFindAceBySid.c)
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     SepMaximumAccessCheck @ 0x14022A180 (SepMaximumAccessCheck.c)
 *     SepMatchPackage @ 0x14022C730 (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x140233520 (SepNormalAccessCheck.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3710 (SepSetProcessTrustLabelAceForToken.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A9F00 (RtlGetAppContainerNamedObjectPath.c)
 *     SeFastTraverseCheck @ 0x1405B7984 (SeFastTraverseCheck.c)
 *     SepRmReferenceFindCap @ 0x1405B9948 (SepRmReferenceFindCap.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepHasCriticalAcesRemoved @ 0x14069C020 (SepHasCriticalAcesRemoved.c)
 *     CmpCheckKeyOwnerForPca @ 0x14069E2E4 (CmpCheckKeyOwnerForPca.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C341C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     LookupSidInTable @ 0x1406C3710 (LookupSidInTable.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C38CC (SePrivilegedServiceAuditAlarm.c)
 *     RtlpIsDuplicateAce @ 0x1406C39C0 (RtlpIsDuplicateAce.c)
 *     RtlpGenerateInheritedAce @ 0x1406C3D10 (RtlpGenerateInheritedAce.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7894 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406C79E4 (SepValidOwnerSubjectContext.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateImpersonationTokenDacl @ 0x140733820 (SepCreateImpersonationTokenDacl.c)
 *     SeTokenCanImpersonate @ 0x1407354A0 (SeTokenCanImpersonate.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB5FC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCompareTokens @ 0x1407C7650 (NtCompareTokens.c)
 *     SepCompareSidAndAttributeArrays @ 0x1407C7960 (SepCompareSidAndAttributeArrays.c)
 *     SepAdjustGroups @ 0x1407CB22C (SepAdjustGroups.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ED23C (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F3170 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F4CCC (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1407F504C (SepFindMatchingLowBoxNumberEntry.c)
 *     PspLookupProcessQuotaBlock @ 0x1407F8D08 (PspLookupProcessQuotaBlock.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EFD0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDqSameUserHive @ 0x14095C620 (PiDqSameUserHive.c)
 *     RtlpCompareKnownObjectAces @ 0x1409BC708 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE764 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     SepIdAssignableAsGroup @ 0x1409CDD48 (SepIdAssignableAsGroup.c)
 *     SepCheckCapabilities @ 0x1409CF30C (SepCheckCapabilities.c)
 *     SepCompareSidValuesBlocks @ 0x1409CF524 (SepCompareSidValuesBlocks.c)
 *     SepIsLpacCapabilitySid @ 0x1409CF958 (SepIsLpacCapabilitySid.c)
 *     SepIsSidEqual @ 0x1409D1308 (SepIsSidEqual.c)
 *     SepFindSharedSidEntry @ 0x1409D17FC (SepFindSharedSidEntry.c)
 *     CmpBuildAdminInformation @ 0x140A18A0C (CmpBuildAdminInformation.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
