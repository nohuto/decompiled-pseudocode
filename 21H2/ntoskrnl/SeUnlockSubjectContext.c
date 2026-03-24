/*
 * XREFs of SeUnlockSubjectContext @ 0x1406F5E90
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SepTrustLevelCheck @ 0x14027E310 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373074 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpCheckObjectReference @ 0x140660F3C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140662E90 (ObCheckCreateObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x140715EE0 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x1408DD130 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935758 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
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
