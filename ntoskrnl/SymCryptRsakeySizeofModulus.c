/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x1403F2470
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x1403F476C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403F4830 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) + 7) >> 3;
}
