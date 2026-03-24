/*
 * XREFs of SeAccessCheck @ 0x140206760
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x14034FC90 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC8A8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x1405971CC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405A5610 (WdipAccessCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     CmpCheckNotifyAccess @ 0x1405EC75C (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FAA0 (ExpWnfCheckCallerAccess.c)
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     ObpCheckObjectReference @ 0x140660F3C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140662E90 (ObCheckCreateObjectAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067C238 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpCheckCreateAccess @ 0x14069D74C (CmpCheckCreateAccess.c)
 *     PiAuVerifyAccessToObject @ 0x1406A0518 (PiAuVerifyAccessToObject.c)
 *     ExIsRestrictedCaller @ 0x1406A18B0 (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406A5CB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PopBootStatAccessCheck @ 0x1407C141C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B330 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B4C8 (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x1408A3B68 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1408DD130 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140908BEC (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14090CCB4 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C67E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
  char v12; // [rsp+58h] [rbp-10h]

  v12 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus,
           v12);
}
