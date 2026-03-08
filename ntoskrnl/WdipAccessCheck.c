/*
 * XREFs of WdipAccessCheck @ 0x1405F93F8
 * Callers:
 *     WdiUpdateSem @ 0x1405F93D8 (WdiUpdateSem.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 WdipAccessCheck()
{
  ACL *v0; // rbx
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdi
  unsigned __int8 *v5; // rax
  unsigned int v6; // r14d
  ACL *v7; // rax
  ACL *v8; // rsi
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-9h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+5Ch] [rbp-5h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+64h] [rbp+3h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+7h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+88h] [rbp+27h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  GenericMapping.GenericRead = 131073;
  GrantedAccess = 0;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v1 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v1, 1934181463LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  AccessStatus = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  if ( AccessStatus >= 0 )
  {
    v5 = (unsigned __int8 *)SeLocalSystemSid;
    v3[2] = 80;
    v3[3] = -1324354722;
    v3[4] = 78537857;
    v3[5] = 698502321;
    v3[6] = 558674196;
    v3[7] = 1451644582;
    v6 = 4 * (*((unsigned __int8 *)v3 + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1) + v5[1]) + 108;
    v7 = (ACL *)ExAllocatePool2(256LL, v6, 1934181463LL);
    v0 = v7;
    if ( v7 )
    {
      v8 = v7 + 5;
      AccessStatus = RtlCreateSecurityDescriptor(v7, 1u);
      if ( AccessStatus >= 0 )
      {
        AccessStatus = RtlCreateAcl(v8, v6 - 40, 2u);
        if ( AccessStatus >= 0 )
        {
          AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, SeAliasAdminsSid);
          if ( AccessStatus >= 0 )
          {
            AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, SeLocalSystemSid);
            if ( AccessStatus >= 0 )
            {
              AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, v3);
              if ( AccessStatus >= 0 )
              {
                AccessStatus = RtlSetDaclSecurityDescriptor(v0, 1u, v8, 0);
                if ( AccessStatus >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  SeAccessCheck(v0, &SubjectContext, 0, 1u, 0, 0LL, &GenericMapping, 1, &GrantedAccess, &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      AccessStatus = -1073741670;
    }
  }
  ExFreePoolWithTag(v3, 0);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)AccessStatus;
}
