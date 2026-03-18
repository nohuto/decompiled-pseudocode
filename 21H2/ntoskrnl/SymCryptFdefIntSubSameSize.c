/*
 * XREFs of SymCryptFdefIntSubSameSize @ 0x14040B03C
 * Callers:
 *     SymCryptIntSubSameSize @ 0x140400D88 (SymCryptIntSubSameSize.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x14040D780 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefIntSubSameSize(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawSubAsm(a1 + 32, a2 + 32, a3 + 32, *(unsigned int *)(a3 + 4));
}
