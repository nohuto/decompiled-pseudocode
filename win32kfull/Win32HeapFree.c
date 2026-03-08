/*
 * XREFs of Win32HeapFree @ 0x1C012D834
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall Win32HeapFree(void *a1, void *a2)
{
  return RtlFreeHeap(a1, 0, a2);
}
