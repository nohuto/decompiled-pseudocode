/*
 * XREFs of RtlpIsValidFeatureVariantPayloadKind @ 0x14058F3F8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919C78 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariantPayloadKind(unsigned int a1)
{
  return a1 < 4;
}
