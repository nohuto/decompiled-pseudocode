__int64 Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage()
{
  if ( (Feature_CcImprovementsForReFS__private_featureState & 0x10) != 0 )
    return Feature_CcImprovementsForReFS__private_featureState & 1;
  else
    return Feature_CcImprovementsForReFS__private_IsEnabledFallback(
             (unsigned int)Feature_CcImprovementsForReFS__private_featureState,
             3LL);
}
