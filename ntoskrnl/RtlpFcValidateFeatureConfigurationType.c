/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1402F03A8
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407822BC (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B6010 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
