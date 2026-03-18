/*
 * XREFs of SepConvertTokenPrivileges @ 0x14022698C
 * Callers:
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402269B0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
