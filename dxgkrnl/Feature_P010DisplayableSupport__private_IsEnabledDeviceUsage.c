/*
 * XREFs of Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage @ 0x1C0026F20
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     Feature_P010DisplayableSupport__private_IsEnabledFallback @ 0x1C0026F58 (Feature_P010DisplayableSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage()
{
  if ( (Feature_P010DisplayableSupport__private_featureState & 0x10) != 0 )
    return Feature_P010DisplayableSupport__private_featureState & 1;
  else
    return Feature_P010DisplayableSupport__private_IsEnabledFallback(
             (unsigned int)Feature_P010DisplayableSupport__private_featureState,
             3LL);
}
