/*
 * XREFs of SymCryptIntWipe @ 0x1403F3A3C
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
