/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x14026CF4C
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x140663290 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInToken @ 0x14026CA24 (SepSidInToken.c)
 *     SepHasCriticalAcesRemoved @ 0x14066CDA0 (SepHasCriticalAcesRemoved.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406937A8 (SeSinglePrivilegeCheckEx.c)
 */

char __fastcall SepCheckForCriticalAceRemoval(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        __int64 *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  _UNKNOWN **v5; // rax
  __int64 *v6; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v9 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    LOBYTE(v5) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(SeTcbPrivilege, v9, a3);
    if ( !(_BYTE)v5 )
    {
      v10 = *v6;
      if ( !*v6 )
        v10 = v6[2];
      LOBYTE(v5) = SepSidInToken(v10, 0LL, SeTrustedInstallerSid, 0, 0, 0, 0);
      if ( !(_BYTE)v5 )
        LOBYTE(v5) = SepHasCriticalAcesRemoved(SecurityDescriptor, a2);
    }
  }
  return (char)v5;
}
