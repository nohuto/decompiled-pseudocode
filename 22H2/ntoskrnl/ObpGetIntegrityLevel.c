/*
 * XREFs of ObpGetIntegrityLevel @ 0x1407F3C74
 * Callers:
 *     ObpParseSymbolicLinkEx @ 0x1406C7170 (ObpParseSymbolicLinkEx.c)
 *     ObCreateSymbolicLink @ 0x1407F38E8 (ObCreateSymbolicLink.c)
 * Callees:
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObpGetIntegrityLevel(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2, PVOID *a3)
{
  NTSTATUS InformationToken; // esi
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF

  InformationToken = 0;
  *(_DWORD *)a3 = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( a2 )
  {
    if ( !SubjectContext )
    {
      p_SubjectContexta = &SubjectContexta;
      SeCaptureSubjectContext(&SubjectContexta);
    }
    ClientToken = p_SubjectContexta->ClientToken;
    if ( !p_SubjectContexta->ClientToken )
      ClientToken = p_SubjectContexta->PrimaryToken;
    InformationToken = SeQueryInformationToken(ClientToken, TokenIntegrityLevel, a3);
    if ( InformationToken < 0 )
      *(_DWORD *)a3 = 0;
    if ( p_SubjectContexta == &SubjectContexta )
      SeReleaseSubjectContext(p_SubjectContexta);
  }
  else
  {
    *(_DWORD *)a3 = 20480;
  }
  return (unsigned int)InformationToken;
}
