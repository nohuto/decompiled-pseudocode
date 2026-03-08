/*
 * XREFs of SeUnlockSubjectContext @ 0x140699470
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     IopCreateSecurityCheck @ 0x1402ED19C (IopCreateSecurityCheck.c)
 *     SepTrustLevelCheck @ 0x14033DC28 (SepTrustLevelCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1406992AC (ObpCheckObjectReference.c)
 *     CmpCheckCreateAccess @ 0x14069A410 (CmpCheckCreateAccess.c)
 *     ObCheckCreateObjectAccess @ 0x14069A900 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x14069DB90 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x140781848 (PspIsContextAdmin.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E5B48 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
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
