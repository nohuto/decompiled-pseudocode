/*
 * XREFs of AlpcpCheckConnectionSecurity @ 0x1407125C8
 * Callers:
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall AlpcpCheckConnectionSecurity(PEPROCESS Process, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  void *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  ACCESS_MASK v12; // eax
  bool v13; // zf
  NTSTATUS v14; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-69h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-59h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-39h] BYREF

  AccessStatus = 0;
  if ( a3 )
  {
    TokenInformation = 0LL;
    memset(Sid2, 0, 0x44uLL);
    v8 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    v9 = SeQueryInformationToken(v8, TokenIsAppContainer, &TokenInformation);
    AccessStatus = v9;
    if ( v9 >= 0 )
    {
      if ( TokenInformation )
        v9 = -1073741152;
      AccessStatus = v9;
      if ( v9 >= 0 )
        SeQueryUserSidToken(v8, Sid2, 68LL, 0LL);
    }
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], (unsigned __int64)v8, 0x746C6644u);
    v10 = AccessStatus;
    if ( AccessStatus < 0 )
      return v10;
    if ( !RtlEqualSid(a3, Sid2) )
      v10 = -1073741152;
    AccessStatus = v10;
    if ( (v10 & 0x80000000) != 0 )
      return v10;
  }
  if ( !a4 )
    return 0LL;
  LODWORD(TokenInformation) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
  SeAccessCheck(
    a4,
    &SubjectContext,
    0,
    0x2000000u,
    0,
    0LL,
    &AlpcPortObjectType->TypeInfo.GenericMapping,
    a2,
    (PACCESS_MASK)&TokenInformation,
    &AccessStatus);
  v12 = (unsigned int)TokenInformation;
  if ( (int)TokenInformation < 0 )
    v12 = AlpcPortObjectType->TypeInfo.GenericMapping.GenericRead | (unsigned int)TokenInformation;
  if ( (v12 & 0x40000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericWrite;
  if ( (v12 & 0x20000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericExecute;
  if ( (v12 & 0x10000000) != 0 )
    v12 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericAll;
  LODWORD(TokenInformation) = v12 & 0xFFFFFFF;
  v13 = (v12 & 1) == 0;
  v14 = AccessStatus;
  if ( v13 )
    v14 = -1073741152;
  AccessStatus = v14;
  SeReleaseSubjectContext(&SubjectContext);
  v10 = AccessStatus;
  if ( AccessStatus < 0 )
    return v10;
  else
    return 0LL;
}
