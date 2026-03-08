/*
 * XREFs of KiMaskToLength @ 0x140A8C418
 * Callers:
 *     KiInitializeMTRR @ 0x140B5FED0 (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1402EFE60 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall KiMaskToLength(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = KiMtrrMaxRangeShift;
  return 1LL << LeastSignificantBit;
}
