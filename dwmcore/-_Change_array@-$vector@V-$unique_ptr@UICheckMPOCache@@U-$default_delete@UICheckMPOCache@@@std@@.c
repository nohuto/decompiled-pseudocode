__int64 __fastcall std::vector<std::unique_ptr<ICheckMPOCache>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void **v4; // rdi
  void **v9; // rbp
  __int64 result; // rax

  v4 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(void ***)(a1 + 8);
    while ( v4 != v9 )
    {
      if ( *v4 )
        operator delete(*v4);
      ++v4;
    }
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
