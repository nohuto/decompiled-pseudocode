/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140724320
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1402A4690 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405F4D90 (SeAuditingFileEventsWithContextEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406B5B9C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1406EAAB0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x1407225F4 (SeObjectReferenceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140723F80 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14072427C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8548 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C8EE8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CA280 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1402A4700 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1407243A0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CA3C4 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1409CF1A0 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditThisEventWithContext(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v7; // ebx
  char result; // al
  __int64 v9; // rbx
  char v10; // di
  BOOL v11; // eax
  __int64 v12; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (unsigned int)a1 <= 8 )
  {
    v11 = a2 != 0;
    v12 = v11 | 0x10u;
    if ( !a3 )
      v12 = v11;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v12, a4);
  }
  else
  {
    result = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v9 = (unsigned int)(v7 - 100);
    v16 = result;
    v10 = result;
    if ( SepTokenPolicyCounter[v9] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        SepAdtIncorporatePerUserPolicy(v9, a2, a3, (_DWORD)ClientToken, (__int64)&v16);
        v10 = v16;
      }
      else
      {
        SepAuditFailed(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
      return v10;
    }
  }
  return result;
}
