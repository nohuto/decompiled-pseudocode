/*
 * XREFs of RtlEqualSid @ 0x140208A60
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     RtlFindAceBySid @ 0x140245DF0 (RtlFindAceBySid.c)
 *     SepMatchPackage @ 0x14024717C (SepMatchPackage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140247DF0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     SepSetTrustLevelForProcessToken @ 0x140296E90 (SepSetTrustLevelForProcessToken.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A7A70 (RtlGetAppContainerNamedObjectPath.c)
 *     SeFastTraverseCheck @ 0x1405B54D4 (SeFastTraverseCheck.c)
 *     SepRmReferenceFindCap @ 0x1405B7498 (SepRmReferenceFindCap.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140699B5C (SePrivilegedServiceAuditAlarm.c)
 *     RtlpIsDuplicateAce @ 0x140699C50 (RtlpIsDuplicateAce.c)
 *     RtlpGenerateInheritedAce @ 0x140699FA0 (RtlpGenerateInheritedAce.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14069D29C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepValidOwnerSubjectContext @ 0x14069D3EC (SepValidOwnerSubjectContext.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406D3000 (SepCreateImpersonationTokenDacl.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     SepGetCachedHandlesEntry @ 0x1407397EC (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140739B6C (SepFindMatchingLowBoxNumberEntry.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140740870 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140744780 (SepIsImpersonationAllowedDueToCapability.c)
 *     PspLookupProcessQuotaBlock @ 0x140745414 (PspLookupProcessQuotaBlock.c)
 *     CmpCheckExeOwnerForPca @ 0x14074CBB4 (CmpCheckExeOwnerForPca.c)
 *     SepHasCriticalAcesRemoved @ 0x14074E8C0 (SepHasCriticalAcesRemoved.c)
 *     CmpCheckKeyOwnerForPca @ 0x140750B84 (CmpCheckKeyOwnerForPca.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407569CC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCompareTokens @ 0x140776460 (NtCompareTokens.c)
 *     SepCompareSidAndAttributeArrays @ 0x140776770 (SepCompareSidAndAttributeArrays.c)
 *     SepAdjustGroups @ 0x14077A39C (SepAdjustGroups.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDqSameUserHive @ 0x140959600 (PiDqSameUserHive.c)
 *     RtlpCompareKnownObjectAces @ 0x1409B97E8 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BB734 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     SepIdAssignableAsGroup @ 0x1409CAEA4 (SepIdAssignableAsGroup.c)
 *     SepCheckCapabilities @ 0x1409CC46C (SepCheckCapabilities.c)
 *     SepCompareSidValuesBlocks @ 0x1409CC684 (SepCompareSidValuesBlocks.c)
 *     SepIsLpacCapabilitySid @ 0x1409CCAB8 (SepIsLpacCapabilitySid.c)
 *     SepIsSidEqual @ 0x1409CE468 (SepIsSidEqual.c)
 *     SepFindSharedSidEntry @ 0x1409CE95C (SepFindSharedSidEntry.c)
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
