/*
 * XREFs of SymCryptFdefRawAdd @ 0x1404031FC
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140403930 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140404B60 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x1404056C0 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}
