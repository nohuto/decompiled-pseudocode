/*
 * XREFs of ViInitializeLocalSystemDescriptor @ 0x1409C7BB8
 * Callers:
 *     VfUtilIsLocalSystem @ 0x1409C77E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PSECURITY_DESCRIPTOR ViInitializeLocalSystemDescriptor()
{
  PVOID PoolWithTag; // rax
  void *v1; // rdi
  ULONG v2; // ebx
  ACL *v3; // rax
  ACL *v4; // rsi
  NTSTATUS Acl; // ebx

  if ( !ViLocalSystemDescriptor )
  {
    if ( SeLocalSystemSid )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x55667256u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( RtlCreateSecurityDescriptor(PoolWithTag, 1u) < 0 )
          goto LABEL_13;
        v2 = RtlLengthSid(SeLocalSystemSid) + 20;
        v3 = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x55667256u);
        v4 = v3;
        if ( !v3 )
          goto LABEL_13;
        Acl = RtlCreateAcl(v3, v2, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        Acl = RtlAddAccessAllowedAce(v4, 2u, 1u, SeLocalSystemSid);
        if ( Acl < 0 )
          goto LABEL_17;
        Acl = RtlSetDaclSecurityDescriptor(v1, 1u, v4, 0);
        if ( Acl < 0 )
          goto LABEL_17;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViLocalSystemDescriptor, (signed __int64)v1, 0LL) )
          Acl = -1073741595;
        if ( Acl < 0 )
        {
LABEL_17:
          ExFreePoolWithTag(v4, 0x55667256u);
          if ( Acl < 0 )
LABEL_13:
            ExFreePoolWithTag(v1, 0x55667256u);
        }
      }
    }
  }
  return ViLocalSystemDescriptor;
}
