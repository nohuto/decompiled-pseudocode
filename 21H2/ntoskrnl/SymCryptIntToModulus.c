/*
 * XREFs of SymCryptIntToModulus @ 0x140400E04
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1404000FC (SymCryptFdefIntGetValueLsbits32.c)
 *     SymCryptFdefIntToModulus @ 0x14040B7F4 (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefIntIsEqualUint32 @ 0x14040D2C4 (SymCryptFdefIntIsEqualUint32.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptIntToModulus(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char ValueLsbits32; // bl

  if ( (a4 & 8) != 0 )
  {
    ValueLsbits32 = SymCryptFdefIntGetValueLsbits32(a1);
    if ( !(ValueLsbits32 & 1 | (unsigned int)SymCryptFdefIntIsEqualUint32(a1, 2LL)) )
      SymCryptFatal(1835296364LL);
  }
  return SymCryptFdefIntToModulus(a1, a2, a3, a4, a5, a6);
}
