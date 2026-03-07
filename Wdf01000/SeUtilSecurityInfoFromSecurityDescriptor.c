NTSTATUS __fastcall SeUtilSecurityInfoFromSecurityDescriptor(
        void *SecurityDescriptor,
        unsigned __int8 *DaclFromDefaultSource,
        unsigned int *SecurityInformation)
{
  NTSTATUS result; // eax
  unsigned int v7; // ebx
  void *sid; // [rsp+20h] [rbp-10h] BYREF
  _ACL *acl; // [rsp+28h] [rbp-8h] BYREF
  unsigned __int8 fromDefaultSource; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int8 aclPresent; // [rsp+68h] [rbp+38h] BYREF

  sid = 0LL;
  acl = 0LL;
  *SecurityInformation = 0;
  *DaclFromDefaultSource = 0;
  fromDefaultSource = 0;
  aclPresent = 0;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &sid, &fromDefaultSource);
  if ( result >= 0 )
  {
    v7 = sid != 0LL;
    result = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &sid, &fromDefaultSource);
    if ( result >= 0 )
    {
      if ( sid )
        v7 |= 2u;
      result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &aclPresent, &acl, &fromDefaultSource);
      if ( result >= 0 )
      {
        if ( aclPresent )
          v7 |= 8u;
        result = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &aclPresent, &acl, &fromDefaultSource);
        if ( result >= 0 )
        {
          if ( aclPresent )
            v7 |= 4u;
          *DaclFromDefaultSource = fromDefaultSource;
          result = 0;
          *SecurityInformation = v7;
        }
      }
    }
  }
  return result;
}
