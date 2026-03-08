/*
 * XREFs of Win32HeapFree @ 0x1C00BA560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall Win32HeapFree(void *a1, void *a2)
{
  return RtlFreeHeap(a1, 0, a2);
}
