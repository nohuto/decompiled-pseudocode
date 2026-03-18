/*
 * XREFs of SymCryptFdefRawSub @ 0x14040B644
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x14040B8A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x14040C590 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x14040CB70 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x14040D780 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
