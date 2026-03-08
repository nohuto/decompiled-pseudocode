/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x1403FFFE0
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x1403F3ED8 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x1403FF6F0 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x1403FF7F0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x1403FF91C (SymCryptFdefSizeofModulusFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofDivisorFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 + 1) << 6);
}
