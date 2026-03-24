/*
 * XREFs of CmpIsSystemEntity @ 0x1406CF8B0
 * Callers:
 *     KCBNeedsVirtualImage @ 0x140314E3C (KCBNeedsVirtualImage.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     SkipVirtualAccessCheck @ 0x140347F98 (SkipVirtualAccessCheck.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404EC8B0 (KCBNeedsVirtualImage_0.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405D94F8 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteOpenLogic @ 0x1406CDD50 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140316F60 (PsGetCurrentThreadProcess.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v3; // si
  PACCESS_TOKEN ClientToken; // rax
  PACCESS_TOKEN PrimaryToken; // rcx
  bool v7; // bl
  int v8; // eax
  int v9; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !p_SubjectContext )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
    p_SubjectContext = &SubjectContext;
    v3 = 1;
  }
  ClientToken = p_SubjectContext->ClientToken;
  LODWORD(TokenInformation) = 0;
  if ( ClientToken )
    PrimaryToken = ClientToken;
  else
    PrimaryToken = p_SubjectContext->PrimaryToken;
  v7 = 1;
  if ( !ClientToken )
  {
    SeQueryInformationToken(PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
    if ( (_DWORD)TokenInformation )
      v7 = 0;
  }
  if ( a3 )
  {
    v8 = *a3;
    if ( v7 )
    {
      v9 = v8 | 3;
    }
    else
    {
      v9 = v8 | 5;
      v7 = 0;
    }
    *a3 = v9;
  }
  if ( v3 )
    SeReleaseSubjectContext(&SubjectContext);
  return v7;
}
