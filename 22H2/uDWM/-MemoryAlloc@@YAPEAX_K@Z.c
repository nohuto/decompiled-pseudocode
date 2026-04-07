/*
 * XREFs of ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800531C0
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18004EE54 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall MemoryAlloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
