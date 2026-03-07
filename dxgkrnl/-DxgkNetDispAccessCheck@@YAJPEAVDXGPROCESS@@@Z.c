__int64 __fastcall DxgkNetDispAccessCheck(struct DXGPROCESS *this)
{
  NTSTATUS Acl; // ebx
  struct _ACL *v3; // rdi
  ULONG v4; // eax
  void *v5; // rax
  void *v6; // rsi
  ULONG v7; // ebx
  struct _ACL *v8; // rax
  BOOLEAN v9; // al
  int AccessStatus; // [rsp+58h] [rbp-19h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-15h] BYREF
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-11h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+A0h] [rbp+2Fh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+37h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+3Fh] BYREF

  Acl = 0;
  if ( !this
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId()) && DXGPROCESS::IsRemoteConnection(this) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v3 = 0LL;
    SeCaptureSubjectContext(&SubjectContext);
    v15 = 0LL;
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v4 = RtlLengthRequiredSid(6u);
    v5 = (void *)operator new[](v4, 0x4B677844u, 256LL);
    v6 = v5;
    if ( !v5 )
      goto LABEL_13;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(v5, &IdentifierAuthority, 6u);
    *RtlSubAuthoritySid(v6, 0) = 80;
    *RtlSubAuthoritySid(v6, 1u) = 1495648203;
    *RtlSubAuthoritySid(v6, 2u) = -1791465185;
    *RtlSubAuthoritySid(v6, 3u) = 1597754693;
    *RtlSubAuthoritySid(v6, 4u) = -849792585;
    *RtlSubAuthoritySid(v6, 5u) = 1316708627;
    v7 = RtlLengthSid(v6) + 20;
    v8 = (struct _ACL *)operator new[](v7, 0x4B677844u, 256LL);
    v3 = v8;
    if ( v8 )
    {
      Acl = RtlCreateAcl(v8, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0000u, v6);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            GenericMapping.GenericAll = 2031616;
            GenericMapping.GenericRead = 0x20000;
            GenericMapping.GenericWrite = 0x20000;
            GenericMapping.GenericExecute = 0x20000;
            GrantedAccess = 0;
            AccessStatus = 0;
            v9 = SeAccessCheck(
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
            if ( v9 )
              Acl = 0;
          }
        }
      }
    }
    else
    {
LABEL_13:
      Acl = -1073741801;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)Acl;
}
