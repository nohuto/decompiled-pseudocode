/*
 * XREFs of SymCryptFdefSizeofIntFromDigits @ 0x14040D570
 * Callers:
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptFdefIntCreate @ 0x14040D260 (SymCryptFdefIntCreate.c)
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14040D558 (SymCryptFdefSizeofDivisorFromDigits.c)
 * Callees:
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptFdefSizeofIntFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    SymCryptFatal(1684629364LL);
  return (unsigned int)((a1 << 6) + 32);
}
