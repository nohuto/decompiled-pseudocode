/*
 * XREFs of AslStringPatternMatchW @ 0x1408A7856
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int16 *a1, _WORD *a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
