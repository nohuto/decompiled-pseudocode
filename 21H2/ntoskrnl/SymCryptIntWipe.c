/*
 * XREFs of SymCryptIntWipe @ 0x140400E9C
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
