/*
 * XREFs of SymCryptFdefRawSub @ 0x1403FE1BC
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x1403FE410 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x1403FF0D0 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1403FF640 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140400200 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
