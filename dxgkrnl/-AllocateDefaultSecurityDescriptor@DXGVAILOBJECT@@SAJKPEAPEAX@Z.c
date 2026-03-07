__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbx
  ULONG v6; // r15d
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS SecurityDescriptor; // eax
  NTSTATUS Acl; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+58h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v4 = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v6 = RtlLengthSid(Sid);
    v7 = (struct _ACL *)operator new[](v6 + 60, 0x4B677844u, 256LL);
    v8 = v7;
    if ( v7 )
    {
      SecurityDescriptor = RtlCreateSecurityDescriptor(v7, 1u);
      v5 = SecurityDescriptor;
      if ( SecurityDescriptor >= 0
        && (Acl = RtlCreateAcl(v8 + 5, v6 + 20, 4u), v5 = Acl, Acl >= 0)
        && (v11 = RtlAddAccessAllowedAce(v8 + 5, 4u, AccessMask, Sid), v5 = v11, v11 >= 0)
        && (v12 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, 0), v5 = v12, v12 >= 0) )
      {
        *a2 = v8;
      }
      else
      {
        WdLogSingleEntry1(3LL, v5);
        operator delete(v8);
      }
    }
    else
    {
      LODWORD(v5) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"new failed. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
  }
  return (unsigned int)v5;
}
