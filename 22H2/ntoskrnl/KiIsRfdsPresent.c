/*
 * XREFs of KiIsRfdsPresent @ 0x1403F2A28
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && (KeFeatureBits2 & 0x800000000LL) == 0;
}
