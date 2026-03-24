/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14038C900
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140778F34 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140918FB0 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
