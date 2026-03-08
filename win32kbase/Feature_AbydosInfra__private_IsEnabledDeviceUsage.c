/*
 * XREFs of Feature_AbydosInfra__private_IsEnabledDeviceUsage @ 0x1C00DFE24
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01EFBF0 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1C01EFDC8 (-DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFr.c)
 * Callees:
 *     Feature_AbydosInfra__private_IsEnabledFallback @ 0x1C00DFE5C (Feature_AbydosInfra__private_IsEnabledFallback.c)
 */

__int64 Feature_AbydosInfra__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AbydosInfra__private_featureState & 0x10) != 0 )
    return Feature_AbydosInfra__private_featureState & 1;
  else
    return Feature_AbydosInfra__private_IsEnabledFallback((unsigned int)Feature_AbydosInfra__private_featureState, 3LL);
}
