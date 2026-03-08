/*
 * XREFs of DrvDbGetRegistrarSecurityDescriptor @ 0x1408592D8
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1408658F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14074E600 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetControlSecurityDescriptor @ 0x1408593C0 (RtlSetControlSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void *DrvDbGetRegistrarSecurityDescriptor()
{
  __int64 v0; // rbx
  ULONG v1; // eax
  void *Pool2; // rax
  void *v3; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-10h]
  ULONG BufferLength; // [rsp+60h] [rbp+10h] BYREF
  ACL Acl; // [rsp+68h] [rbp+18h] BYREF

  v0 = 0LL;
  Acl = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v6 = 0LL;
  if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
    && RtlCreateAcl(&Acl, 8u, 2u) >= 0
    && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0
    && (int)RtlSetControlSecurityDescriptor(SecurityDescriptor, 4096LL, 4096LL) >= 0 )
  {
    v1 = RtlLengthSecurityDescriptor(SecurityDescriptor);
    BufferLength = v1;
    if ( v1 >= 0x28 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v1, 1111770192LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength) < 0 )
          ExFreePoolWithTag(v3, 0);
        else
          return v3;
      }
    }
  }
  return (void *)v0;
}
