/*
 * XREFs of Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage @ 0x1C00DFE78
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01F1CA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback @ 0x1C00DFEB0 (Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback.c)
 */

__int64 Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MitInputInteropMessageAllocationFailed__private_featureState & 0x10) != 0 )
    return Feature_MitInputInteropMessageAllocationFailed__private_featureState & 1;
  else
    return Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback(
             (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_featureState,
             3LL);
}
