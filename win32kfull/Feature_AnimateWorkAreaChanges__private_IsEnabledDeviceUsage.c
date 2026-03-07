__int64 Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AnimateWorkAreaChanges__private_featureState & 0x10) != 0 )
    return Feature_AnimateWorkAreaChanges__private_featureState & 1;
  else
    return Feature_AnimateWorkAreaChanges__private_IsEnabledFallback(
             (unsigned int)Feature_AnimateWorkAreaChanges__private_featureState,
             3LL);
}
