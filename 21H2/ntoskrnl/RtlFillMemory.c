/*
 * XREFs of RtlFillMemory @ 0x14058CEE0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
