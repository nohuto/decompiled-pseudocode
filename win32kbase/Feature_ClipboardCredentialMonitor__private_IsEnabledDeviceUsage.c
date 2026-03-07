__int64 Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ClipboardCredentialMonitor__private_featureState & 0x10) != 0 )
    return Feature_ClipboardCredentialMonitor__private_featureState & 1;
  else
    return Feature_ClipboardCredentialMonitor__private_IsEnabledFallback(
             (unsigned int)Feature_ClipboardCredentialMonitor__private_featureState,
             3LL);
}
