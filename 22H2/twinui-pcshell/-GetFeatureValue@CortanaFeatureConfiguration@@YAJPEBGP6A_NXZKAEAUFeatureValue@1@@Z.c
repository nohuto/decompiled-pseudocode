/*
 * XREFs of ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180018C18
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x1800102C0 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180018CA4 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180018D6C (-GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFeatureValue(
        WCHAR *this,
        const unsigned __int16 *a2,
        bool (*a3)(void),
        __int64 a4)
{
  int v4; // esi
  int OverrideValue; // ebx
  unsigned __int8 *v8; // r9
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v4 = (int)a3;
  LOBYTE(v13) = 0;
  OverrideValue = CortanaFeatureConfiguration::GetOverrideValue(
                    this,
                    (const unsigned __int16 *)a4,
                    (struct CortanaFeatureConfiguration::FeatureValue *)&v13,
                    (unsigned __int8 *)a4);
  if ( OverrideValue < 0 )
  {
    v10 = 373LL;
  }
  else
  {
    if ( (_BYTE)v13 )
      return 0LL;
    LOBYTE(v13) = 0;
    OverrideValue = CortanaFeatureConfiguration::GetFlightedValue(
                      (CortanaFeatureConfiguration *)this,
                      (const unsigned __int16 *)a4,
                      (struct CortanaFeatureConfiguration::FeatureValue *)&v13,
                      v8);
    if ( OverrideValue >= 0 )
    {
      if ( !(_BYTE)v13 )
        *(_DWORD *)(a4 + 4) = v4;
      return 0LL;
    }
    v10 = 381LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
    (const char *)(unsigned int)OverrideValue,
    v11);
  return (unsigned int)OverrideValue;
}
