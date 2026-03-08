/*
 * XREFs of PpmInfoAdjustSetting @ 0x140825E18
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmPerfComputePerfReductionTolerance @ 0x14038E174 (PpmPerfComputePerfReductionTolerance.c)
 *     PpmInfoWriteData @ 0x140825EDC (PpmInfoWriteData.c)
 */

char __fastcall PpmInfoAdjustSetting(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v7; // r14d
  int v9; // esi
  char v10; // di
  __int64 v11; // rbx

  v7 = a3;
  v9 = a1;
  if ( a6 < *(_DWORD *)(a1 + 32) && (*(_BYTE *)(a1 + 37) & 8) == 0 )
    return 0;
  v10 = 0;
  v11 = 1LL << *(_BYTE *)(a1 + 36);
  if ( a3 <= a4 )
  {
    do
    {
      if ( (unsigned __int8)PpmInfoWriteData(a5, a6, v7, v9, a2) )
        v10 = 1;
      ++v7;
    }
    while ( v7 <= a4 );
    if ( v10 )
    {
      if ( (v11 & 0x200) != 0 )
        *(_DWORD *)(a2 + 60) = PpmPerfComputePerfReductionTolerance(*(_DWORD *)(a2 + 52));
    }
  }
  return v10;
}
