/*
 * XREFs of RtlpIsValidFeatureEnabledStateOptions @ 0x14058F318
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919CC8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledStateOptions(unsigned int a1)
{
  return a1 < 2;
}
