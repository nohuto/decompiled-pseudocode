/*
 * XREFs of RtlZeroMemory @ 0x1403772F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
