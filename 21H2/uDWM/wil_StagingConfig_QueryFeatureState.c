/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x180055120
 * Callers:
 *     wil_QueryFeatureState @ 0x180054F10 (wil_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     wil_details_StagingConfig_AreAnyFeaturesConfigured @ 0x180055690 (wil_details_StagingConfig_AreAnyFeaturesConfigured.c)
 *     wil_details_StagingConfig_Free @ 0x1800558C8 (wil_details_StagingConfig_Free.c)
 *     wil_details_StagingConfig_Load @ 0x180055910 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x180055C24 (wil_details_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v7; // ebp
  unsigned int FeatureState; // edi
  _BYTE v10[96]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v11[208]; // [rsp+90h] [rbp-F8h] BYREF

  v7 = a3;
  FeatureState = 0;
  if ( !(unsigned int)wil_details_StagingConfig_Load(v10, a1, a3, v11) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v10, a2, v7, a4);
    if ( a5 )
      *a5 |= wil_details_StagingConfig_AreAnyFeaturesConfigured(v10);
    wil_details_StagingConfig_Free(v10);
  }
  return FeatureState;
}
