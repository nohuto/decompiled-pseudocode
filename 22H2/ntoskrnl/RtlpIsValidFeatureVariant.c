/*
 * XREFs of RtlpIsValidFeatureVariant @ 0x14058F328
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919CC8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariant(unsigned int a1)
{
  return a1 < 0x40;
}
