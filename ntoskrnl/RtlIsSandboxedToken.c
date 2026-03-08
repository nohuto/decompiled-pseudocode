/*
 * XREFs of RtlIsSandboxedToken @ 0x140741410
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x14035E260 (IopCheckInitiatorHint.c)
 *     CmpCheckCreateAccess @ 0x14069A410 (CmpCheckCreateAccess.c)
 *     ObpParseSymbolicLinkEx @ 0x14069CAB0 (ObpParseSymbolicLinkEx.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     ObpCreateDirectoryObject @ 0x14073DED0 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x140740FE8 (ObCreateSymbolicLink.c)
 *     ObpGetShadowDirectory @ 0x14075F49C (ObpGetShadowDirectory.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  bool v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LOBYTE(TokenInformation) = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !a2 )
    return 0;
  if ( !SubjectContext )
  {
    p_SubjectContexta = &SubjectContexta;
    SeCaptureSubjectContext(&SubjectContexta);
  }
  ClientToken = p_SubjectContexta->ClientToken;
  if ( !p_SubjectContexta->ClientToken )
    ClientToken = p_SubjectContexta->PrimaryToken;
  if ( SeQueryInformationToken(ClientToken, MaxTokenInfoClass, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
