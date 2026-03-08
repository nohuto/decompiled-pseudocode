/*
 * XREFs of SymCryptInverseMod2e64 @ 0x140400018
 * Callers:
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x1403FF7F0 (SymCryptFdefModulusInitMontgomeryInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptInverseMod2e64(__int64 a1)
{
  int v1; // r8d
  int v2; // r8d

  v1 = a1 ^ (6 * (a1 & 6)) & 8;
  v2 = (2 - (2 - v1 * a1) * v1 * a1) * (2 - v1 * a1) * v1;
  return (2 - a1 * (unsigned int)(v2 * (2 - v2 * a1))) * (unsigned int)(v2 * (2 - v2 * a1));
}
