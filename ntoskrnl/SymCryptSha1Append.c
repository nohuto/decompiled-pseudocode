/*
 * XREFs of SymCryptSha1Append @ 0x1403F6300
 * Callers:
 *     HashpHashBytes @ 0x140A74954 (HashpHashBytes.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x1403FD348 (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptSha1Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptSha1Algorithm_default, a1, a2, a3);
}
