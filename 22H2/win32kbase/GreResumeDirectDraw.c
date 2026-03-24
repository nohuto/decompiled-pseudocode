/*
 * XREFs of GreResumeDirectDraw @ 0x1C00B32D0
 * Callers:
 *     <none>
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B32F0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall GreResumeDirectDraw(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return GreIncrementDisplaySettingsUniqueness(a1, a2, a3, a4);
}
