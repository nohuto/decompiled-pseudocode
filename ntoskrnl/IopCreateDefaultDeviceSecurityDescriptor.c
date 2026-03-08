/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x1407F092C
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1407F0A50 (IopCreateSecurityDescriptorPerType.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        __int64 a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  void *v8; // rbp
  ACL **v10; // r12
  USHORT AclSize; // r15
  unsigned __int8 *v13; // rax
  ACL *Pool2; // rax
  ACL *v15; // rsi
  bool v16; // zf
  int v17; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v17) = a3;
  v7 = a7;
  v8 = a4;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x11 || a1 != 2 && a1 != 7 || a1 != 2 && (a2 & 1) == 0 )
  {
    if ( (int)IopCreateSecurityDescriptorPerType(a4) < 0 )
      return 0LL;
    return v8;
  }
  v17 = 0;
  AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
  if ( RtlGetNtProductType(&v17, a2) )
  {
    if ( v17 == 1 )
    {
      v13 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_18;
      v13 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v13[1] + 4);
LABEL_18:
    Pool2 = (ACL *)ExAllocatePool2(256LL, AclSize, 1699966793LL);
    v15 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v16 = v17 == 1;
      v15->AclSize = AclSize;
      if ( v16 )
      {
        RtlpAddKnownAce((__int64)v15, 2u, 0, -1073676288, (unsigned __int8 *)SeInteractiveSid, 0);
      }
      else if ( a1 == 2 )
      {
        RtlpAddKnownAce((__int64)v15, 2u, 0, 0x80000000, (unsigned __int8 *)SeWorldSid, 0);
      }
      RtlCreateSecurityDescriptor(v8, 1u);
      RtlSetDaclSecurityDescriptor(v8, 1u, v15, 0);
      if ( v7 )
        *v7 |= 4u;
      *v10 = v15;
      return v8;
    }
  }
  return 0LL;
}
