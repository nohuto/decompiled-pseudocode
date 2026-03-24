/*
 * XREFs of SeUnlockSubjectContext @ 0x1406435B0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x140347320 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373854 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     ObpCheckObjectReference @ 0x1406D9CFC (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406DBC80 (ObCheckCreateObjectAccess.c)
 *     PspIsContextAdmin @ 0x14070CE38 (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140718990 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408DD180 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409357A8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
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
