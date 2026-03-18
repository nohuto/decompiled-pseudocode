/*
 * XREFs of SymCryptRsakeyWipe @ 0x1403F79A4
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F5EA8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(unsigned int *a1)
{
  return SymCryptWipe((__int64)a1, *a1);
}
