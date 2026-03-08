/*
 * XREFs of SymCryptModDivPow2 @ 0x1403F3A90
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefModDivPow2 @ 0x1403FE4B8 (SymCryptFdefModDivPow2.c)
 */

__int64 __fastcall SymCryptModDivPow2(__int64 a1, __int64 a2)
{
  return SymCryptFdefModDivPow2(a1, a2);
}
