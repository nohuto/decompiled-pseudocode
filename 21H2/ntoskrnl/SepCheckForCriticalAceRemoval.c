/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x14027EFAC
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x14066E470 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInToken @ 0x14027EA84 (SepSidInToken.c)
 *     SeSinglePrivilegeCheckEx @ 0x140627698 (SeSinglePrivilegeCheckEx.c)
 *     SepHasCriticalAcesRemoved @ 0x140679660 (SepHasCriticalAcesRemoved.c)
 */

char __fastcall SepCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  _UNKNOWN **v5; // rax
  __int64 *v7; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v5 = &retaddr;
  v7 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v10 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    LOBYTE(v5) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(SeTcbPrivilege, v10, a3);
    if ( !(_BYTE)v5 )
    {
      v11 = *v7;
      if ( !*v7 )
        v11 = v7[2];
      LOBYTE(v5) = SepSidInToken(v11, 0LL, SeTrustedInstallerSid, 0, 0, 0, 0);
      if ( !(_BYTE)v5 )
        LOBYTE(v5) = SepHasCriticalAcesRemoved(a1, a2, a4, a5);
    }
  }
  return (char)v5;
}
