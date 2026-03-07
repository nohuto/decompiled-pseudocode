_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // r9d
  int v7; // r10d
  int v8; // edx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xA45513, 0, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = 64;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v6 = 64;
    v7 = v6;
  }
  *(_DWORD *)a2 = v7 | v8 | ((v7 | (unsigned int)v8) >> 6) & 1;
  return a2;
}
