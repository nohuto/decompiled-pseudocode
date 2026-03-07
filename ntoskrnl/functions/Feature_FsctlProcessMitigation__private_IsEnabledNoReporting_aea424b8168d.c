__int64 Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
{
  if ( (Feature_FsctlProcessMitigation__private_featureState & 2) != 0 )
    return Feature_FsctlProcessMitigation__private_featureState & 1;
  else
    return Feature_FsctlProcessMitigation__private_IsEnabledFallback(
             (unsigned int)Feature_FsctlProcessMitigation__private_featureState,
             0);
}
