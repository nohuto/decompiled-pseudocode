/*
 * XREFs of EtwpAccessCheckFromState @ 0x140695F0C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x140206940 (SeAccessCheckFromState.c)
 *     EtwpFreeSecurityDescriptor @ 0x140696014 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406972D0 (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpAccessCheckFromState(__int64 a1, __int64 a2, struct _TOKEN_ACCESS_INFORMATION *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-18h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  SecurityDescriptor[0] = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, SecurityDescriptor);
  SeAccessCheckFromState(
    SecurityDescriptor[0],
    a3,
    0LL,
    0x80u,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  EtwpFreeSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)AccessStatus;
}
