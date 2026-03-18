/*
 * XREFs of Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage @ 0x1C00D4F40
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D49B8 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback @ 0x1C00D4F78 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_DisableTouchpadAAPAPI__private_featureState & 0x10) != 0 )
    return Feature_Backport_DisableTouchpadAAPAPI__private_featureState & 1;
  else
    return Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_DisableTouchpadAAPAPI__private_featureState,
             3LL);
}
