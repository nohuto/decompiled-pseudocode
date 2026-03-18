/*
 * XREFs of SeAccessCheck @ 0x140231630
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14022F340 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14035A14C (IopCreateSecurityCheck.c)
 *     SeIsSystemContext @ 0x1405B91FC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405FB898 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616408 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF740 (EtwpFindOrCreateGuidEntry.c)
 *     CmpCheckCreateAccess @ 0x1406C0898 (CmpCheckCreateAccess.c)
 *     ObpCheckObjectReference @ 0x1406C301C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4FC0 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     ExpWnfCheckCallerAccess @ 0x1407138E4 (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     CmpCheckNotifyAccess @ 0x140766F94 (CmpCheckNotifyAccess.c)
 *     PiAuVerifyAccessToObject @ 0x14079ADDC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A60F0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1407B6810 (ObCheckObjectAccess.c)
 *     ExIsRestrictedCaller @ 0x1407D8DA4 (ExIsRestrictedCaller.c)
 *     PopBootStatAccessCheck @ 0x1407EC0D4 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140851720 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x14095B7C0 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14097B7C8 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409B214C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409B6494 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x140A11EDC (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A121EC (CmUpdateFeatureUsageSubscription.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B198 (CmpCheckKeyBodyAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC3724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
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
