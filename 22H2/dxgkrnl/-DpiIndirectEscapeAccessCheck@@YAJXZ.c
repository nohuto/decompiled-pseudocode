/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C02D4DFC
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  PVOID PoolWithQuotaTag; // r14
  ULONG v2; // eax
  PVOID v3; // rdi
  ULONG v4; // eax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rsi
  ULONG v11; // r15d
  ULONG v12; // r15d
  ULONG v13; // r15d
  struct _ACL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _ACL *v19; // rbx
  NTSTATUS Acl; // r15d
  BOOLEAN v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+Fh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v29 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v0, 0x74727044u);
  v2 = RtlLengthRequiredSid(1u);
  v3 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x74727044u);
  v4 = RtlLengthRequiredSid(2u);
  v5 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v4, 0x74727044u);
  v10 = v5;
  if ( PoolWithQuotaTag && v3 && v5 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(PoolWithQuotaTag, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(PoolWithQuotaTag, 0) = 32;
    *RtlSubAuthoritySid(PoolWithQuotaTag, 1u) = 544;
    RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v3, 0) = 18;
    RtlInitializeSid(v10, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v10, 0) = 19;
    v11 = RtlLengthSid(v10);
    v12 = RtlLengthSid(v3) + v11;
    v13 = RtlLengthSid(PoolWithQuotaTag) + 44 + v12;
    v14 = (struct _ACL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v13, 0x74727044u);
    v19 = v14;
    if ( v14 )
    {
      Acl = RtlCreateAcl(v14, v13, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v19, 2u, 0x1F0000u, v3);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v19, 2u, 0x1F0000u, PoolWithQuotaTag);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v19, 2u, 0x1F0000u, v10);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v19, 0);
              if ( Acl >= 0 )
              {
                GrantedAccess = 0;
                GenericMapping.GenericRead = 0x20000;
                GenericMapping.GenericWrite = 0x20000;
                GenericMapping.GenericExecute = 0x20000;
                GenericMapping.GenericAll = 2031616;
                AccessStatus = 0;
                v21 = SeAccessCheck(
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
                if ( v21 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741801;
      v22 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v22);
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  else
  {
    Acl = -1073741801;
    v23 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)Acl;
}
