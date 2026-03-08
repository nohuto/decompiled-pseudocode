/*
 * XREFs of SeAccessCheck @ 0x140265330
 * Callers:
 *     IopCreateSecurityCheck @ 0x1402ED19C (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x140311EB0 (SeComputeCreatorDeniedRights.c)
 *     SeIsSystemContext @ 0x1405B6D4C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140613F58 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140694E30 (EtwpFindOrCreateGuidEntry.c)
 *     ObpCheckObjectReference @ 0x1406992AC (ObpCheckObjectReference.c)
 *     CmpCheckCreateAccess @ 0x14069A410 (CmpCheckCreateAccess.c)
 *     ObCheckCreateObjectAccess @ 0x14069A900 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x14069DB90 (ObCheckObjectAccess.c)
 *     CmpCheckNotifyAccess @ 0x1406B39B4 (CmpCheckNotifyAccess.c)
 *     PiAuVerifyAccessToObject @ 0x1406CBD38 (PiAuVerifyAccessToObject.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfCheckCallerAccess @ 0x14071A9D4 (ExpWnfCheckCallerAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14073AC00 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ExIsRestrictedCaller @ 0x14078A078 (ExIsRestrictedCaller.c)
 *     PopBootStatAccessCheck @ 0x140798D98 (PopBootStatAccessCheck.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409AF0FC (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409B3464 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x140A0F190 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A0F4A0 (CmUpdateFeatureUsageSubscription.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 *     VfUtilIsLocalSystem @ 0x140ABF724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
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
