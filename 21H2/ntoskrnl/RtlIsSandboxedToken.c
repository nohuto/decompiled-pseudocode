/*
 * XREFs of RtlIsSandboxedToken @ 0x14071C8A0
 * Callers:
 *     RtlIsSandboxedTokenHandle @ 0x140251410 (RtlIsSandboxedTokenHandle.c)
 *     IopCheckInitiatorHint @ 0x1402722F0 (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     CmpCheckCreateAccess @ 0x1405FC81C (CmpCheckCreateAccess.c)
 *     ObpCreateDirectoryObject @ 0x140601A90 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14060A95C (ObCreateSymbolicLink.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C6000 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403589C0 (SeAccessCheckWithHint.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140361380 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  char v3; // si
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // r14
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+60h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+B8h] [rbp+10h] BYREF
  int v11; // [rsp+C0h] [rbp+18h] BYREF
  int v12; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = 0LL;
  v12 = 0;
  v11 = 0;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( a2 )
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
      p_SubjectContexta = SubjectContext;
    v5 = p_SubjectContexta;
    if ( (unsigned __int8)SeAccessCheckWithHint(
                            (__int64)SeMediumDaclSd,
                            8LL,
                            (__int64)p_SubjectContexta,
                            0LL,
                            0x20000,
                            0,
                            0LL,
                            (__int64)RtlpRestrictedMapping,
                            a2,
                            (__int64)&v12,
                            (__int64)&v11) == 1 )
    {
      if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        goto LABEL_8;
      ClientToken = p_SubjectContexta->ClientToken;
      if ( !p_SubjectContexta->ClientToken )
        ClientToken = p_SubjectContexta->PrimaryToken;
      if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0
        && !(_DWORD)TokenInformation )
      {
LABEL_8:
        v3 = 1;
      }
    }
  }
  else
  {
    v3 = 1;
  }
  if ( v5 == &SubjectContexta )
    SeReleaseSubjectContext(v5);
  return v3 != 1;
}
