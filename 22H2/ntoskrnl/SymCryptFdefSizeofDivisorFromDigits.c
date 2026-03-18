/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x140405500
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x1403F93F8 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x140404C10 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x140404D10 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140404E3C (SymCryptFdefSizeofModulusFromDigits.c)
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
