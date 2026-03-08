/*
 * XREFs of SymCryptFdefDecideModulusType @ 0x1403FE210
 * Callers:
 *     SymCryptFdefIntToModulus @ 0x1403FE36C (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x1403F3750 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptFdefDecideModulusType(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8; // edi
  unsigned int v9; // r14d
  __int64 *i; // rbx
  int v11; // esi

  v8 = 0;
  v9 = SymCryptIntBitsizeOfValue();
  if ( (a4 & 3) != 0 && (SymCryptIntGetValueLsbits32(a1) & 1) != 0 )
    v8 = a3 >= 0xA;
  for ( i = SymCryptModulusTypeSelections; ; i += 2 )
  {
    v11 = *((_DWORD *)i + 1);
    if ( ((unsigned int)SymCryptCpuFeaturesNeverPresent() & v11) == 0
      && (v11 & g_SymCryptCpuFeaturesNotPresent) == 0
      && (!*((_DWORD *)i + 2) || a2 <= (unsigned int)SymCryptDigitsFromBits() && v9 <= *((_DWORD *)i + 2))
      && (~v8 & *((_DWORD *)i + 3)) == 0 )
    {
      break;
    }
  }
  return *(unsigned int *)i;
}
