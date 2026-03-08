/*
 * XREFs of RtlZeroMemory @ 0x1405641E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
