/*
 * XREFs of SymCryptFdefRawAdd @ 0x1403FDCDC
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x1403FE410 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1403FF640 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x1404001A0 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}
