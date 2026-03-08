/*
 * XREFs of KiIsRfdsPresent @ 0x14040AD00
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14037EC84 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && (KeFeatureBits2 & 0x800000000LL) == 0;
}
