/*
 * XREFs of DSA_Destroy @ 0x1804E7750
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180152C04 (--1CPinList@@QEAA@XZ.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x1804E7524 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DSA_Destroy(HDSA hdsa)
{
  BOOL v1; // ebx
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax

  v1 = 0;
  if ( !hdsa )
    return 1;
  if ( *((_QWORD *)hdsa + 1) )
  {
    ProcessHeap = GetProcessHeap();
    if ( (int)CCv6s_HeapFree(ProcessHeap, *((void **)hdsa + 1)) < 0 )
      return 0;
  }
  v5 = GetProcessHeap();
  LOBYTE(v1) = (int)CCv6s_HeapFree(v5, hdsa) >= 0;
  return v1;
}
