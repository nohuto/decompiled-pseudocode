/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x180055070
 * Callers:
 *     wil_QueryFeatureState @ 0x180054E60 (wil_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     wil_details_StagingConfig_AreAnyFeaturesConfigured @ 0x1800555E0 (wil_details_StagingConfig_AreAnyFeaturesConfigured.c)
 *     wil_details_StagingConfig_Free @ 0x180055818 (wil_details_StagingConfig_Free.c)
 *     wil_details_StagingConfig_Load @ 0x180055860 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x180055B74 (wil_details_StagingConfig_QueryFeatureState.c)
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
