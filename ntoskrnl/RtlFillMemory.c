/*
 * XREFs of RtlFillMemory @ 0x1405AD3A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
