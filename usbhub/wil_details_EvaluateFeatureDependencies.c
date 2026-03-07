_QWORD *wil_details_EvaluateFeatureDependencies()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r8d
  int v3; // eax
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx

  v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = **v0;
      if ( (v2 & 0x200) != 0 )
      {
        if ( (v2 & 0x180) != 0 )
          v3 = (**v0 & 0x180) == 256;
        else
          v3 = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFBF | (v3 << 6) ^ **v0 & 0x40);
      }
      v0 = (int **)wil_details_FeatureDescriptors_SkipPadding(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = wil_details_featureDescriptors_a; ; i = v6 + 7 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
