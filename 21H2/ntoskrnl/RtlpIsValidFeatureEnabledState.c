/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x14058F3C8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919C78 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
