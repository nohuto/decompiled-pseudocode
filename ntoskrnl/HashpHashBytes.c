/*
 * XREFs of HashpHashBytes @ 0x140A74954
 * Callers:
 *     HashpHashMemory @ 0x140A7438C (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Append @ 0x1403ED980 (SymCryptSha256Append.c)
 *     SymCryptSha384Append @ 0x1403F4978 (SymCryptSha384Append.c)
 *     SymCryptSha512Append @ 0x1403F4A74 (SymCryptSha512Append.c)
 *     SymCryptSha1Append @ 0x1403F6300 (SymCryptSha1Append.c)
 *     SymCryptMd5Append @ 0x1403F7640 (SymCryptMd5Append.c)
 */

__int64 __fastcall HashpHashBytes(_DWORD *a1, char *a2, unsigned int a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return SymCryptMd5Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x8004:
      return SymCryptSha1Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x800C:
      return SymCryptSha256Append(a1 + 4, a2, a3);
    case 0x800D:
      return SymCryptSha384Append();
    case 0x800E:
      return SymCryptSha512Append(a1 + 4, a2, a3);
  }
  return result;
}
