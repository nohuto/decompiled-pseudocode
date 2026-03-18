/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x14040D558
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x140401338 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x14040CC20 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusCreate @ 0x14040CC4C (SymCryptFdefModulusCreate.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x14040CD30 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14040CE5C (SymCryptFdefSizeofModulusFromDigits.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x14040D570 (SymCryptFdefSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofDivisorFromDigits(__int64 a1)
{
  return (unsigned int)SymCryptFdefSizeofIntFromDigits(a1) + 32;
}
