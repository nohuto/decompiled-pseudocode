/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x1403F7990
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403F9D50 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) + 7) >> 3;
}
