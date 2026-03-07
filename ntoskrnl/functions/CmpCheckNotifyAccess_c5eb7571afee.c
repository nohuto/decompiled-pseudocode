BOOLEAN __fastcall CmpCheckNotifyAccess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+78h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a3, 0LL);
  return SeAccessCheck(
           (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
           (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
           0,
           0x10u,
           0,
           0LL,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus);
}
