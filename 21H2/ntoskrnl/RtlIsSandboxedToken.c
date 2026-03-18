/*
 * XREFs of RtlIsSandboxedToken @ 0x14079F1E0
 * Callers:
 *     IopCheckInitiatorHint @ 0x140280170 (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     CmpCheckCreateAccess @ 0x140668AEC (CmpCheckCreateAccess.c)
 *     ObpGetShadowDirectory @ 0x1406A79A0 (ObpGetShadowDirectory.c)
 *     ObpCreateDirectoryObject @ 0x1406C2A70 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406C505C (ObCreateSymbolicLink.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     ObpParseSymbolicLinkEx @ 0x140784700 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
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
