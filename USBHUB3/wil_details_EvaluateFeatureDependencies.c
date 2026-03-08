/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C0076138
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C0076010 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C0093008 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0076220 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

void wil_details_EvaluateFeatureDependencies()
{
  _QWORD *i; // r8
  volatile signed __int32 **v1; // rcx
  unsigned int v2; // r10d
  volatile signed __int32 v3; // edx
  int v4; // eax
  __int64 v5; // r11
  __int64 v6; // r8

  i = &wil_details_featureDescriptors_a;
  v1 = (volatile signed __int32 **)&wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (_UNKNOWN **)&wil_details_featureDescriptors_z )
  {
    while ( !*v1 )
    {
      if ( ++v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
        goto LABEL_20;
    }
    if ( !v1 )
      goto LABEL_20;
    v2 = 0;
    do
    {
      v3 = **v1;
      if ( (v3 & 0x200) != 0 )
      {
        v4 = 0;
        if ( (v3 & 0x180) != 0 )
          LOBYTE(v4) = (**v1 & 0x180) == 256;
        else
          LOBYTE(v4) = *((_BYTE *)v1 + 31) != 0;
        v2 = v2 & 0xFFFFFFBF | (v4 << 6) ^ **v1 & 0x40;
        _InterlockedXor(*v1, v2);
      }
      for ( v1 += 7; ; ++v1 )
      {
        if ( v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
          goto LABEL_20;
        if ( *v1 )
          break;
      }
    }
    while ( v1 );
LABEL_20:
    while ( i < (_QWORD *)&wil_details_featureDescriptors_z )
    {
      if ( *i )
      {
LABEL_26:
        if ( i )
        {
          wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*i, i);
          for ( i = (_QWORD *)(v6 + 56); i < (_QWORD *)&wil_details_featureDescriptors_z; ++i )
          {
            if ( *i != v5 )
              goto LABEL_26;
          }
        }
        return;
      }
      ++i;
    }
  }
}
