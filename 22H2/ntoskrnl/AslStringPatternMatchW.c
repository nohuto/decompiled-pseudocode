/*
 * XREFs of AslStringPatternMatchW @ 0x1408AC6C6
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x1407C6DFC (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int16 *a1, _WORD *a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
