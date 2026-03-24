/*
 * XREFs of ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C0073788
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C0073DAC (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0073864 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // eax
  ULONG v3; // esi
  struct _ACL *v4; // rdi
  NTSTATUS v5; // ebx
  PACL Acl; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlLengthSid(&unk_1C020EE28);
  Acl = 0LL;
  v3 = v2 + 20;
  v4 = 0LL;
  v5 = CoreMessagingK::Runtime::Alloc(v2 + 20, 1146309955LL, &Acl);
  if ( v5 >= 0 )
  {
    v4 = Acl;
    v5 = RtlCreateAcl(Acl, v3, 2u);
    if ( v5 >= 0 )
    {
      v5 = RtlAddAccessAllowedAce(v4, 2u, 1u, &unk_1C020EE28);
      if ( v5 >= 0 )
      {
        v5 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
        if ( v5 >= 0 )
        {
          v5 = 0;
          v4 = 0LL;
        }
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44534D43u);
  return (unsigned int)v5;
}
