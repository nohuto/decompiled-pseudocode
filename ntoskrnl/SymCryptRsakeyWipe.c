/*
 * XREFs of SymCryptRsakeyWipe @ 0x1403F2484
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(unsigned int *a1)
{
  return SymCryptWipe((__int64)a1, *a1);
}
