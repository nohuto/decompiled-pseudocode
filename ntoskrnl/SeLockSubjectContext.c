/*
 * XREFs of SeLockSubjectContext @ 0x1406994B0
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
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E5B48 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
