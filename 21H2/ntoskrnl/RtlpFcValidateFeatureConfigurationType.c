/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1403C7970
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140832F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B5E70 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
