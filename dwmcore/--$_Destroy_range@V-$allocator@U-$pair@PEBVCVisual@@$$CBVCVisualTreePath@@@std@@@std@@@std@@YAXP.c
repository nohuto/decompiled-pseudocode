void __fastcall std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  HANDLE ProcessHeap; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = (_QWORD *)*(v3 - 1);
      v5 = (__int64)(*v3 - (_QWORD)v4) >> 4;
      if ( v5 )
        *v3 -= 16 * v5;
      *(v3 - 1) = 0LL;
      if ( v4 == v3 + 2 )
        v4 = 0LL;
      if ( v4 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      v3 += 8;
    }
    while ( v3 - 2 != a2 );
  }
}
