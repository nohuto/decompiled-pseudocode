__int64 Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Dxgk64BitOnlyDriver__private_featureState & 0x10) != 0 )
    return Feature_Dxgk64BitOnlyDriver__private_featureState & 1;
  else
    return Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback(
             (unsigned int)Feature_Dxgk64BitOnlyDriver__private_featureState,
             3LL);
}
