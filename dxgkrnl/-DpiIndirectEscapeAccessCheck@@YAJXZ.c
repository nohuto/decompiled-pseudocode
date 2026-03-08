/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C039F29C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  void *Pool2; // r14
  ULONG v2; // eax
  void *v3; // rdi
  ULONG v4; // eax
  __int64 v5; // rax
  void *v6; // rsi
  ULONG v7; // r15d
  ULONG v8; // r15d
  ULONG v9; // r15d
  struct _ACL *v10; // rax
  struct _ACL *v11; // rbx
  NTSTATUS Acl; // r15d
  BOOLEAN v13; // al
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(257LL, v0, 1953656900LL);
  v2 = RtlLengthRequiredSid(1u);
  v3 = (void *)ExAllocatePool2(257LL, v2, 1953656900LL);
  v4 = RtlLengthRequiredSid(2u);
  v5 = ExAllocatePool2(257LL, v4, 1953656900LL);
  v6 = (void *)v5;
  if ( !Pool2 )
    goto LABEL_13;
  if ( !v3 )
    goto LABEL_13;
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
  *RtlSubAuthoritySid(Pool2, 0) = 32;
  *RtlSubAuthoritySid(Pool2, 1u) = 544;
  RtlInitializeSid(v3, &IdentifierAuthority, 1u);
  *RtlSubAuthoritySid(v3, 0) = 18;
  RtlInitializeSid(v6, &IdentifierAuthority, 1u);
  *RtlSubAuthoritySid(v6, 0) = 19;
  v7 = RtlLengthSid(v6);
  v8 = RtlLengthSid(v3) + v7;
  v9 = RtlLengthSid(Pool2) + 44 + v8;
  v10 = (struct _ACL *)ExAllocatePool2(257LL, v9, 1953656900LL);
  v11 = v10;
  if ( v10 )
  {
    Acl = RtlCreateAcl(v10, v9, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, v3);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, Pool2);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, v6);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
            if ( Acl >= 0 )
            {
              GrantedAccess = 0;
              GenericMapping.GenericRead = 0x20000;
              GenericMapping.GenericWrite = 0x20000;
              GenericMapping.GenericExecute = 0x20000;
              GenericMapping.GenericAll = 2031616;
              AccessStatus = 0;
              v13 = SeAccessCheck(
                      SecurityDescriptor,
                      &SubjectContext,
                      0,
                      0x1F0000u,
                      0,
                      0LL,
                      &GenericMapping,
                      1,
                      &GrantedAccess,
                      &AccessStatus);
              Acl = AccessStatus;
              if ( v13 )
                Acl = 0;
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
LABEL_13:
    Acl = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Acl;
}
