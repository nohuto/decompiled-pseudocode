_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(_DWORD *a1, __int64 a2)
{
  unsigned __int8 *v4; // rsi
  int v5; // eax
  unsigned __int8 **v6; // rax
  PSID *v8; // rdx
  int v9; // eax
  int Src; // [rsp+20h] [rbp-E0h]
  unsigned int v11; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v13; // [rsp+88h] [rbp-78h]
  ACL v14[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  v11 = 0;
  memset(v14, 0, 0x54uLL);
  v4 = (unsigned __int8 *)(a1 + 2);
  v13 = 0LL;
  v5 = *a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( v5 != 2 )
  {
    if ( v5 != 3 )
    {
      if ( v5 != 1 )
      {
        *(_DWORD *)(a2 + 48) = -1073741595;
        return 0LL;
      }
      return 1LL;
    }
    RtlCreateAcl(v14, 0x54u, 2u);
    RtlAddMandatoryAce(v14, 2LL, 0LL, v4, 17, 7);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v14, 0);
    return SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             1,
             (struct _SECURITY_SUBJECT_CONTEXT *)a2,
             1,
             0xF000Fu,
             0,
             0LL,
             &ObpDirectoryObjectType->TypeInfo.GenericMapping.GenericRead,
             KeGetCurrentThread()->PreviousMode,
             &v11,
             (int *)(a2 + 48));
  }
  if ( !(unsigned __int8)RtlIsPackageSid(v4) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce((__int64)Acl, 2u, 0, 983055, v4, 0);
    v6 = *(unsigned __int8 ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce((__int64)Acl, 2u, 0, 983055, *v6, 0);
    RtlCreateAcl(v14, 0x54u, 2u);
    LOBYTE(Src) = 17;
    RtlAddMandatoryAce(v14, 2LL, 0LL, *(_QWORD *)(a2 + 40), Src, 7);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v14, 0);
    return SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             1,
             (struct _SECURITY_SUBJECT_CONTEXT *)a2,
             1,
             0xF000Fu,
             0,
             0LL,
             &ObpDirectoryObjectType->TypeInfo.GenericMapping.GenericRead,
             KeGetCurrentThread()->PreviousMode,
             &v11,
             (int *)(a2 + 48));
  }
  v8 = *(PSID **)(a2 + 32);
  if ( v8 && !RtlEqualSid(v4, *v8) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    return 0LL;
  }
  v9 = *(_DWORD *)(a2 + 52);
  if ( (v9 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) = -1073741811;
    return 0LL;
  }
  *(_DWORD *)(a2 + 52) = v9 | 1;
  return 1LL;
}
