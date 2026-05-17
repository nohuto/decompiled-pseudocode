/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x18005E168
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18011B1A4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18011B364 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
