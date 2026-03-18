/*
 * XREFs of SymCryptMd5Append @ 0x140404A70
 * Callers:
 *     HashpHashBytes @ 0x140A378B4 (HashpHashBytes.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x14040A7D8 (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptMd5Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, a1, a2, a3);
}
