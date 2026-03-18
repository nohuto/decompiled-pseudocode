/*
 * XREFs of SymCryptModDivPow2 @ 0x1403F8FB0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefModDivPow2 @ 0x1404039D8 (SymCryptFdefModDivPow2.c)
 */

__int64 __fastcall SymCryptModDivPow2(__int64 a1, __int64 a2)
{
  return SymCryptFdefModDivPow2(a1, a2);
}
