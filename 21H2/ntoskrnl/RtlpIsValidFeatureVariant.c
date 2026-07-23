/*
 * XREFs of RtlpIsValidFeatureVariant @ 0x14058F618
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariant(unsigned int a1)
{
  return a1 < 0x40;
}
