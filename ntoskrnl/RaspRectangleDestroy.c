/*
 * XREFs of RaspRectangleDestroy @ 0x14038223C
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140AEAB20 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
