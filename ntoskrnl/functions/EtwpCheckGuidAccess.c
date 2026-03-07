__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  unsigned int v3; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  v3 = EtwpAccessCheck(SecurityDescriptor, a2);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return v3;
}
