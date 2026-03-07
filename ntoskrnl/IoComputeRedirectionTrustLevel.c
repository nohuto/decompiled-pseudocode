__int64 __fastcall IoComputeRedirectionTrustLevel(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        _DWORD *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( !p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->PrimaryToken;
    *a4 = (SeTokenIsAdmin(ClientToken) != 0) + 1;
    if ( !a3 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    *a4 = 2;
  }
  return 0LL;
}
