/*
 * XREFs of RtlpIsValidFeatureVariantPayloadKind @ 0x14058F338
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919CC8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariantPayloadKind(unsigned int a1)
{
  return a1 < 4;
}
