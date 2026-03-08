/*
 * XREFs of Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage @ 0x1C00DCA34
 * Callers:
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1C0155770 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     Feature_ClipboardCredentialMonitor__private_IsEnabledFallback @ 0x1C00DCA6C (Feature_ClipboardCredentialMonitor__private_IsEnabledFallback.c)
 */

__int64 Feature_ClipboardCredentialMonitor__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ClipboardCredentialMonitor__private_featureState & 0x10) != 0 )
    return Feature_ClipboardCredentialMonitor__private_featureState & 1;
  else
    return Feature_ClipboardCredentialMonitor__private_IsEnabledFallback(
             (unsigned int)Feature_ClipboardCredentialMonitor__private_featureState,
             3LL);
}
