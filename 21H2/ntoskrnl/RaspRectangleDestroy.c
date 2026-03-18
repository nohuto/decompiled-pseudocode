/*
 * XREFs of RaspRectangleDestroy @ 0x1403CA3B4
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140AAE514 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403A8C98 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
