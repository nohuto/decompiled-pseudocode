/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140747298
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140747218 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     PnpConcatPWSTR @ 0x14069EE54 (PnpConcatPWSTR.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     _PnpValidateObjectName @ 0x140747528 (_PnpValidateObjectName.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140747694 (PiDqGetRelativeObjectRegPath.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6)
{
  char v6; // r13
  PVOID v9; // rsi
  __int64 v10; // rcx
  int RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int Tree; // eax
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp-98h] BYREF
  int v24[2]; // [rsp+70h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  *(_QWORD *)v24 = a1;
  TokenInformation = 0LL;
  v22 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  *a6 = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v10, a1, a2);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( !a5 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v6 = 1;
    }
    p_SubjectContext = &SubjectContext;
    if ( a5 )
      p_SubjectContext = a5;
    ClientToken = p_SubjectContext->ClientToken;
    if ( !p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->PrimaryToken;
    v14 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
    RelativeObjectRegPath = v14;
    if ( v14 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_23;
      }
      goto LABEL_10;
    }
    if ( v14 == -1073741821 )
    {
LABEL_10:
      SeQueryUserSidToken((__int64)ClientToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (PVOID *)&v22, 2uLL);
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = (PVOID)v22;
        }
        else
        {
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v15 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          else
            v15 = 0LL;
          v9 = (PVOID)v22;
          RelativeObjectRegPath = SysCtxRegOpenKey(v15, 0LL, v22, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v24[0]);
            if ( RelativeObjectRegPath >= 0 )
            {
              if ( a4 )
              {
                Tree = PnpCtxRegCreateTree(*(__int64 *)&PiPnpRtlCtx);
              }
              else
              {
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
                else
                  v16 = 0LL;
                Tree = SysCtxRegOpenKey(v16, (__int64)Handle, 0LL, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
