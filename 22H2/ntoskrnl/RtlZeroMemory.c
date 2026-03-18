/*
 * XREFs of RtlZeroMemory @ 0x140566680
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
