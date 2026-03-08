/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x1402438A8
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406BA400 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406BA46C (SeSinglePrivilegeCheckEx.c)
 *     SepHasCriticalAcesRemoved @ 0x14074E8C0 (SepHasCriticalAcesRemoved.c)
 */

_UNKNOWN **__fastcall SepCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  _UNKNOWN **result; // rax
  __int64 *v7; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v10 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
                            SeTcbPrivilege,
                            v10,
                            a3);
    if ( !(_BYTE)result )
    {
      v11 = *v7;
      if ( !*v7 )
        v11 = v7[2];
      result = (_UNKNOWN **)SepSidInTokenSidHash(v11 + 232, 0LL, SeTrustedInstallerSid, 0LL, 0, 0);
      if ( !(_BYTE)result )
        return (_UNKNOWN **)SepHasCriticalAcesRemoved(a1, a2, a4, a5);
    }
  }
  return result;
}
