/*
 * XREFs of SymCryptRsakeyWipe @ 0x1403FF894
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(unsigned int *a1)
{
  return SymCryptWipe((__int64)a1, *a1);
}
