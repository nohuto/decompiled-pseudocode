__int64 Feature_1391280440__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1391280440__private_featureState & 0x10) != 0 )
    return Feature_1391280440__private_featureState & 1;
  else
    return Feature_1391280440__private_IsEnabledFallback((unsigned int)Feature_1391280440__private_featureState, 3LL);
}
