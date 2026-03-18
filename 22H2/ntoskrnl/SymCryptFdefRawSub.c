/*
 * XREFs of SymCryptFdefRawSub @ 0x1404036DC
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140403930 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x1404045F0 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140404B60 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140405720 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
