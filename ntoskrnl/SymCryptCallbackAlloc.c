/*
 * XREFs of SymCryptCallbackAlloc @ 0x14067B400
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x1403F2CF4 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403F4830 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptAlloc @ 0x140A6F07C (MincryptAlloc.c)
 */

unsigned __int64 __fastcall SymCryptCallbackAlloc(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = MincryptAlloc(a1 + 36);
  if ( v2 )
  {
    v1 = (v2 + 35) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_DWORD *)(v1 - 4) = ((v2 + 35) & 0xFFFFFFE0) - v2;
  }
  return v1;
}
