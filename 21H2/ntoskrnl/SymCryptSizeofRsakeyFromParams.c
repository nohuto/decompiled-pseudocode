/*
 * XREFs of SymCryptSizeofRsakeyFromParams @ 0x1403FF8AC
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403FF10C (SymCryptRsakeyCreate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x140401380 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptSizeofRsakeyFromParams(unsigned int *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // edi
  int v7; // ebx

  v2 = SymCryptDigitsFromBits(a1[1]);
  v4 = a1[3] * SymCryptSizeofIntFromDigits(v2, v3);
  v5 = (unsigned int)SymCryptSizeofModulusFromDigits(v2) + v4;
  v6 = a1[2] * (v5 + (((a1[1] >> 9) + (((a1[1] & 0x1FF) + 511) >> 9)) << 6));
  v7 = v6 + a1[3] * SymCryptSizeofIntFromDigits(v2, v5);
  return v7 + (unsigned int)SymCryptSizeofModulusFromDigits(v2) + 192;
}
