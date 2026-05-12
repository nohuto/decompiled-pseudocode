/*
 * XREFs of StorPortMoveMemory @ 0x1C00399E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00201C0 (memmove.c)
 */

void *__fastcall StorPortMoveMemory(void *a1, const void *a2, unsigned int a3)
{
  return memmove(a1, a2, a3);
}
