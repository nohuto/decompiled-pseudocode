/*
 * XREFs of SymCryptSizeofRsakeyFromParams @ 0x1403F249C
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F1CE4 (SymCryptRsakeyCreate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x1403F3F20 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptSizeofRsakeyFromParams(unsigned int *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  int v4; // ebx
  int v5; // edi
  int v6; // ebx

  v2 = SymCryptDigitsFromBits(a1[1]);
  v4 = a1[3] * SymCryptSizeofIntFromDigits(v2, v3);
  v5 = a1[2] * (v4 + SymCryptSizeofModulusFromDigits(v2) + (((a1[1] >> 9) + (((a1[1] & 0x1FF) + 511) >> 9)) << 6));
  v6 = v5 + a1[3] * SymCryptSizeofIntFromDigits(v2, 511LL);
  return v6 + (unsigned int)SymCryptSizeofModulusFromDigits(v2) + 192;
}
