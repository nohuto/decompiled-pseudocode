/*
 * XREFs of EditionKillAccessibilityTimer @ 0x1C01F72B0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

__int64 __fastcall EditionKillAccessibilityTimer(void *a1, void *a2)
{
  return FindTimer(a1, a2, 4u, 1, 0LL);
}
