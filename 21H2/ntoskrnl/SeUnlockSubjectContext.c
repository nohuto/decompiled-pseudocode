/*
 * XREFs of SeUnlockSubjectContext @ 0x140723F40
 * Callers:
 *     IopCreateSecurityCheck @ 0x14024B8BC (IopCreateSecurityCheck.c)
 *     SepTrustLevelCheck @ 0x1402F9614 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     CmpCheckCreateAccess @ 0x140668AEC (CmpCheckCreateAccess.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406C0B60 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1406CDC5C (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E57B8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
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
