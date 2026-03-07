__int64 __fastcall CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // eax
  ULONG v3; // esi
  int v4; // ebx
  NTSTATUS v5; // eax
  PACL v6; // rcx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  PACL Acl; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlLengthSid(&unk_1C0288388);
  Acl = 0LL;
  v3 = v2 + 20;
  v4 = CoreMessagingK::Runtime::Alloc(v2 + 20, 1146309955LL, &Acl);
  if ( v4 >= 0 )
  {
    v5 = RtlCreateAcl(Acl, v3, 2u);
    v6 = Acl;
    v4 = v5;
    if ( v5 < 0
      || (v7 = RtlAddAccessAllowedAce(Acl, 2u, 1u, &unk_1C0288388), v6 = Acl, v4 = v7, v7 < 0)
      || (v8 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0), v6 = Acl, v4 = v8, v8 < 0) )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0x44534D43u);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
