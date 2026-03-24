/*
 * XREFs of RaspRectangleDestroy @ 0x1403AD144
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x1409F4708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403AD328 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
