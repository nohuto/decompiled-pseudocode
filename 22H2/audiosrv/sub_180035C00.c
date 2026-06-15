/*
 * XREFs of sub_180035C00 @ 0x180035C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035C00(volatile signed __int32 *lpMem)
{
  unsigned __int32 v2; // esi
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax

  v2 = _InterlockedDecrement(lpMem + 2);
  if ( !v2 && lpMem )
  {
    v3 = (void *)*((_QWORD *)lpMem + 2);
    *(_QWORD *)lpMem = &off_1801480F0;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *((_QWORD *)lpMem + 2) = 0LL;
    v5 = GetProcessHeap();
    HeapFree(v5, 0, (LPVOID)lpMem);
  }
  return v2;
}
