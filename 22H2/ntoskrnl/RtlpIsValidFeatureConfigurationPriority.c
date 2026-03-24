/*
 * XREFs of RtlpIsValidFeatureConfigurationPriority @ 0x14058F2F8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919CC8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureConfigurationPriority(unsigned int a1)
{
  return a1 <= 0xF;
}
