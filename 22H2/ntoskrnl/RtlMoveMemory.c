/*
 * XREFs of RtlMoveMemory @ 0x1403648E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
