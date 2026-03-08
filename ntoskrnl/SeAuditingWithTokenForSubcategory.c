/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x14070F610
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObInitProcess @ 0x140707D3C (ObInitProcess.c)
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14070F51C (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x14083FBD8 (SeAssignPrimaryToken.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140876040 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1402992A4 (SepAuditingForSubCategory.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409CA868 (SepAdtIncorporatePerUserPolicy.c)
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
