/*
 * XREFs of SeUnlockSubjectContext @ 0x14070D270
 * Callers:
 *     IopCreateSecurityCheck @ 0x140225208 (IopCreateSecurityCheck.c)
 *     SepTrustLevelCheck @ 0x14026C2B0 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     CmpCheckKeyBodyAccess @ 0x1405EA3A4 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405EA5E0 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x140655D5C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140657CB0 (ObCheckCreateObjectAccess.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406BC3D0 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x1406C4530 (PspIsContextAdmin.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x1408DD290 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935928 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140958444 (CMFCheckAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
