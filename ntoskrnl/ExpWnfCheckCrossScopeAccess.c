/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1407947E0
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140719DF0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExpWnfCheckCallerAccess @ 0x14071A9D4 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
  {
LABEL_9:
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
    return 0LL;
  }
  result = ExpWnfLookupPermanentName(a1, (PSECURITY_DESCRIPTOR **)&P);
  if ( (int)result < 0 )
    return result;
  v3 = P;
  v4 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10u);
  ExFreePoolWithTag(v3, 0x20666E57u);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741790 )
      return (unsigned int)v4;
    goto LABEL_9;
  }
  return 0LL;
}
