/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140696AE0
 * Callers:
 *     SeDefaultObjectMethod @ 0x1406961E0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x14076BC30 (WmipSecurityMethod.c)
 * Callees:
 *     ObpReferenceSecurityDescriptor @ 0x140698F3C (ObpReferenceSecurityDescriptor.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x14069941C (ObpDereferenceSecurityDescriptorForObject.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407AD8A0 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, ULONG *a2, void *a3, ULONG *a4)
{
  __int64 v4; // r14
  PSECURITY_DESCRIPTOR v8; // rbp
  unsigned int v9; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v8 = ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
    ObpDereferenceSecurityDescriptorForObject(v8, v4);
  return v9;
}
