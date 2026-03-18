/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x140404E3C
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x1403F9440 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x140404C3C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405500 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (((_DWORD)a1 + 1) << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
