/*
 * XREFs of SeAccessCheck @ 0x140206720
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x1402D0420 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC7E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14059710C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405A5550 (WdipAccessCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     CmpCheckNotifyAccess @ 0x1405EC75C (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF00 (ExpWnfCheckCallerAccess.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     CmpCheckCreateAccess @ 0x14068200C (CmpCheckCreateAccess.c)
 *     PiAuVerifyAccessToObject @ 0x140684DD8 (PiAuVerifyAccessToObject.c)
 *     ExIsRestrictedCaller @ 0x140686630 (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140688794 (CmpCheckKeySecurityDescriptorAccess.c)
 *     EtwpAccessCheck @ 0x1406BC938 (EtwpAccessCheck.c)
 *     ObpCheckObjectReference @ 0x1406D9CFC (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406DBC80 (ObCheckCreateObjectAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1406F5028 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopBootStatAccessCheck @ 0x1407C1BDC (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C7220 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B380 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B518 (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x1408A3BB8 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1408DD180 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140908C3C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14090CD04 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C67F4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
