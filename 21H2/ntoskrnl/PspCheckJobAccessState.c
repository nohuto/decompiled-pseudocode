/*
 * XREFs of PspCheckJobAccessState @ 0x140908D4C
 * Callers:
 *     PspValidateJobAffinityState @ 0x140615DFC (PspValidateJobAffinityState.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1406F5EB8 (PspValidateJobAssignmentProcessLimits.c)
 *     PspSetAffinityLimitCallback @ 0x140909520 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140654230 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+78h] [rbp+18h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+28h] BYREF

  GrantedAccess = 0;
  v2 = 0;
  SecurityDescriptor = 0LL;
  v3 = *(_DWORD *)(a2 + 1120);
  MemoryAllocated = 0;
  AccessStatus = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      return 0LL;
    AccessStatus = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
    v2 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeAccessCheck(
        SecurityDescriptor,
        (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
        0,
        0x200u,
        0,
        0LL,
        (PGENERIC_MAPPING)((char *)PsProcessType + 76),
        1,
        &GrantedAccess,
        &AccessStatus);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      return (unsigned int)AccessStatus;
    }
  }
  return v2;
}
