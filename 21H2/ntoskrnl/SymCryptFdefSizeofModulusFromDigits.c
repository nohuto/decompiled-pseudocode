/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x14040CE5C
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x140401380 (SymCryptSizeofModulusFromDigits.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14040D558 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  return (((_DWORD)a1 + 1) << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
