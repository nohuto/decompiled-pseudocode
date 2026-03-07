__int64 __fastcall HrMallocClear(__int64 a1, unsigned __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  void *v5; // rax

  v3 = 0;
  if ( a3 && a2 && 0xFFFFFFFFFFFFFFFFuLL / a2 > 8 )
  {
    v5 = DefaultHeap::AllocClear(8 * a2);
    *a3 = v5;
    if ( !v5 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
