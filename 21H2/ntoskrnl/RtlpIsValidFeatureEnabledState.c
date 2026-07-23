/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x14058F5F8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
