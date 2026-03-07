__int64 __fastcall HrMalloc(unsigned __int64 a1, unsigned __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  SIZE_T v5; // rdi
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v3 = 0;
  if ( a3 && a2 && a1 && a1 < 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    v5 = a2 * a1;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *a3 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
