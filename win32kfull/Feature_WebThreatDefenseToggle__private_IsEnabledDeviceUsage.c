__int64 Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) != 0 )
    return Feature_WebThreatDefenseToggle__private_featureState & 1;
  else
    return Feature_WebThreatDefenseToggle__private_IsEnabledFallback(
             (unsigned int)Feature_WebThreatDefenseToggle__private_featureState,
             3LL);
}
