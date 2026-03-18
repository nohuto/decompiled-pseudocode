/*
 * XREFs of SepConvertTokenPrivileges @ 0x1402ECB64
 * Callers:
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402ED7E0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
