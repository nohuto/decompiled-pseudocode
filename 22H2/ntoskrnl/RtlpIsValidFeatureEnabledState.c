/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x14058F308
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919CC8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
