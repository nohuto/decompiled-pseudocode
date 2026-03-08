/*
 * XREFs of RtlMoveMemory @ 0x14036D720
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
