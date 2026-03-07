__int64 __fastcall HrAlloc(SIZE_T a1, void **a2)
{
  unsigned int v2; // ebx
  void *v4; // rax

  v2 = 0;
  if ( a2 && a1 )
  {
    v4 = DefaultHeap::Alloc(a1);
    *a2 = v4;
    if ( !v4 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
