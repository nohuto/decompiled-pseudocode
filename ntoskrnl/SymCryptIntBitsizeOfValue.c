/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1403F3750
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x1403FDBFC (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x1403FE210 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x1403FFB50 (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
