/*
 * XREFs of wil_details_StagingConfig_AreAnyFeaturesConfigured @ 0x14050894C
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x140621ED0 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x14050890C (wil_details_StagingConfigFeature_HasUniqueState.c)
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v4; // r9d
  int v5; // r9d
  _DWORD *v6; // r10
  unsigned int v7; // r11d
  unsigned int v8; // edx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( *(_WORD *)(v1 + 4) )
  {
    do
    {
      if ( wil_details_StagingConfigFeature_HasUniqueState((_DWORD *)(v3 + 12LL * v4)) )
      {
        if ( (v6[1] & 1) != 0 )
          return 1;
        v8 = v2;
        while ( v8 == v5 || *v6 != *(_DWORD *)(v3 + 12LL * v8) )
        {
          if ( ++v8 >= v7 )
            return 1;
        }
      }
      v4 = v5 + 1;
    }
    while ( v4 < v7 );
  }
  if ( *(_WORD *)(v1 + 6) > (unsigned __int16)v2 )
    return 1;
  return v2;
}
