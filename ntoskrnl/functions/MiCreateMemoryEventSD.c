__int64 __fastcall MiCreateMemoryEventSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  ACL *Pool; // rax
  ACL *v9; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeAllRestrictedAppPackagesSid);
    v4 = RtlLengthSid(SeAllAppPackagesSid) + v3;
    v5 = RtlLengthSid(SeWorldSid) + v4;
    v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
    v7 = v6 + RtlLengthSid(SeLocalSystemSid) + 68;
    Pool = (ACL *)MiAllocatePool(256, v7, 0x6C636144u);
    v9 = Pool;
    if ( Pool )
    {
      Acl = RtlCreateAcl(Pool, v7, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((__int64)v9, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v9, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v9, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllRestrictedAppPackagesSid, 0),
            Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        return 0;
      }
    }
  }
  return (unsigned int)Acl;
}
