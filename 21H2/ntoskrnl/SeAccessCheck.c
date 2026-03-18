/*
 * XREFs of SeAccessCheck @ 0x1402F9C80
 * Callers:
 *     IopCreateSecurityCheck @ 0x14024B8BC (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x1402AC350 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14053EFBC (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x1405F5174 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     CmpCheckCreateAccess @ 0x140668AEC (CmpCheckCreateAccess.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     CmpCheckNotifyAccess @ 0x1406BC164 (CmpCheckNotifyAccess.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     ObpCheckTraverseAccess @ 0x1406CDC5C (ObpCheckTraverseAccess.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     PiAuVerifyAccessToObject @ 0x14078A644 (PiAuVerifyAccessToObject.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     ExpWnfCheckCallerAccess @ 0x140794654 (ExpWnfCheckCallerAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PspCheckJobAccessState @ 0x1409B0030 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409B3230 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140A81DB4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
