/*
 * XREFs of Feature_191799614__private_IsEnabledDeviceUsage @ 0x1C00E1544
 * Callers:
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0060D60 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Feature_191799614__private_IsEnabledFallback @ 0x1C00E157C (Feature_191799614__private_IsEnabledFallback.c)
 */

__int64 Feature_191799614__private_IsEnabledDeviceUsage()
{
  if ( (Feature_191799614__private_featureState & 0x10) != 0 )
    return Feature_191799614__private_featureState & 1;
  else
    return Feature_191799614__private_IsEnabledFallback((unsigned int)Feature_191799614__private_featureState, 3LL);
}
