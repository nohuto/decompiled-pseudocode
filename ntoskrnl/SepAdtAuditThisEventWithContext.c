/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140699810
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140207950 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140299040 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405B6960 (SeAuditingFileEventsWithContextEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SeObjectReferenceAuditAlarm @ 0x140699510 (SeObjectReferenceAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406995C8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14069976C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14085ED00 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140872F50 (SeAuditingHardLinkEventsWithContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CA720 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1402079C0 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140699890 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CA868 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
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
