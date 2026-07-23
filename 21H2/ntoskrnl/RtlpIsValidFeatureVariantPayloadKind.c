/*
 * XREFs of RtlpIsValidFeatureVariantPayloadKind @ 0x14058F628
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariantPayloadKind(unsigned int a1)
{
  return a1 < 4;
}
