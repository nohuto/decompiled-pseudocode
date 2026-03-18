/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x1406C3580
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140226BA0 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140228D00 (SepCommonAccessCheckEx.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140229690 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405B8E10 (SeAuditingFileEventsWithContextEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeObjectReferenceAuditAlarm @ 0x1406C3280 (SeObjectReferenceAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406C3338 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406C34DC (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140862CC0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140875E10 (SeAuditingHardLinkEventsWithContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB888 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC218 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CD5C0 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140229700 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3600 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CD708 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1409D1CF0 (SepAuditFailed.c)
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
