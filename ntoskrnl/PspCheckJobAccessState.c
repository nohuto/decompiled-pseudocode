/*
 * XREFs of PspCheckJobAccessState @ 0x1409AF0FC
 * Callers:
 *     PspValidateJobAssignmentProcessLimits @ 0x1406FFF28 (PspValidateJobAssignmentProcessLimits.c)
 *     PspValidateJobAffinityState @ 0x140880118 (PspValidateJobAffinityState.c)
 *     PspSetAffinityLimitCallback @ 0x1409AFA00 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v4; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-10h] BYREF
  char v8; // [rsp+88h] [rbp+28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF

  GrantedAccess = 0;
  v2 = 0;
  SecurityDescriptor = 0LL;
  v4 = *(_DWORD *)(a2 + 1120);
  v8 = 0;
  AccessStatus = 0;
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      return 0LL;
    AccessStatus = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v8, 0);
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
      ObReleaseObjectSecurityEx(SecurityDescriptor, v8, a2);
      return (unsigned int)AccessStatus;
    }
  }
  return v2;
}
