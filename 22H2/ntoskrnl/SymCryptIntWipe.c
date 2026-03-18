/*
 * XREFs of SymCryptIntWipe @ 0x1403F8F5C
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403F9AB4 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F5EA8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
