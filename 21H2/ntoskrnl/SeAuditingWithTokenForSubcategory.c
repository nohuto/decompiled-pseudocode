/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x140608730
 * Callers:
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObInitProcess @ 0x140607644 (ObInitProcess.c)
 *     PspInsertProcess @ 0x140607710 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140608640 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14062D640 (ObCompleteObjectDuplication.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739754 (PipClearDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739C9C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074578C (PiPnpRtlSetObjectProperty.c)
 *     SeAssignPrimaryToken @ 0x1407BBBD0 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x1407BBC44 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x140920964 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140252C5C (SepAuditingForSubCategory.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140920A8C (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}
