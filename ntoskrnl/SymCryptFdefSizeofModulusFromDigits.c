/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x1403FF91C
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x1403F3F20 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x1403FF71C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x1403FFFE0 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (((_DWORD)a1 + 1) << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
