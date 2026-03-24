/*
 * XREFs of wil_details_StagingConfig_EnumerateFeatures @ 0x1800E9930
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x1800E93C0 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x1800E98E4 (wil_details_StagingConfigFeature_HasUniqueState.c)
 *     wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback @ 0x1800E9920 (wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback.c)
 */

__int64 __fastcall wil_details_StagingConfig_EnumerateFeatures(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  unsigned int v11; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  if ( *(_WORD *)(v4 + 4) )
  {
    do
    {
      if ( wil_details_StagingConfigFeature_HasUniqueState((_DWORD *)(v5 + 12LL * v7)) )
      {
        if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
          goto LABEL_9;
        v11 = 0;
        if ( !v10 )
        {
LABEL_8:
          v8 = v9;
LABEL_9:
          result = wil_details_StagingConfig_AreAnyFeaturesConfigured_Callback(v8, a3);
          if ( !(_DWORD)result )
            return result;
          goto LABEL_10;
        }
        while ( v11 == v7 || *(_DWORD *)v9 != *(_DWORD *)(v5 + 12LL * v11) )
        {
          if ( ++v11 >= v10 )
            goto LABEL_8;
        }
      }
LABEL_10:
      result = *(unsigned __int16 *)(v4 + 4);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  return result;
}
