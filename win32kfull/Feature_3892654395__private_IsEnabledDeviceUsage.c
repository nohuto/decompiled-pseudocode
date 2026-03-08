/*
 * XREFs of Feature_3892654395__private_IsEnabledDeviceUsage @ 0x1C012F658
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     Feature_3892654395__private_IsEnabledFallback @ 0x1C012F690 (Feature_3892654395__private_IsEnabledFallback.c)
 */

__int64 Feature_3892654395__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3892654395__private_featureState & 0x10) != 0 )
    return Feature_3892654395__private_featureState & 1;
  else
    return Feature_3892654395__private_IsEnabledFallback((unsigned int)Feature_3892654395__private_featureState, 3LL);
}
