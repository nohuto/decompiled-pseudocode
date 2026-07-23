/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14038CA50
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407790F4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140919110 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
