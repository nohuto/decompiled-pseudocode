/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14038C200
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140778E34 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140919000 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
