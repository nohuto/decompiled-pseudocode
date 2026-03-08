/*
 * XREFs of BmlCompareMonitorRegions @ 0x1C03B85E8
 * Callers:
 *     BmlCompareTargetModes @ 0x1C016E704 (BmlCompareTargetModes.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0002AA0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0171118 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareModeRegions @ 0x1C0171130 (BmlCompareModeRegions.c)
 */

__int64 __fastcall BmlCompareMonitorRegions(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // r10d

  if ( a1 == a2 )
    WdLogSingleEntry0(1LL);
  result = BmlCompareModeRegions(a1 + 21, a2 + 21);
  if ( !(_DWORD)result )
  {
    DMMVIDEOSIGNALMODE::DivideAndRound(a2[23], a2[24]);
    v5 = DMMVIDEOSIGNALMODE::DivideAndRound(a1[23], a1[24]);
    return BmlCompareValues<unsigned int>(v5, v6);
  }
  return result;
}
