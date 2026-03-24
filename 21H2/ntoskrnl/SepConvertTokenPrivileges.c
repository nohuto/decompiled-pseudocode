/*
 * XREFs of SepConvertTokenPrivileges @ 0x1402527D4
 * Callers:
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140252800 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
