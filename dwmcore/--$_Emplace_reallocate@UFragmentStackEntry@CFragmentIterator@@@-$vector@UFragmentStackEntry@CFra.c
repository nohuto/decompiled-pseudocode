char *__fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
        unsigned __int64 *a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rbp
  char *v6; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rsi
  HANDLE ProcessHeap; // rax
  unsigned __int64 v14; // rbx
  _OWORD *v15; // rcx
  char *v16; // r15
  char *v17; // rdx
  char *v18; // rax
  char *result; // rax
  __int128 v20; // xmm0
  void *v21; // rax
  __int128 v22; // xmm0
  char *v23; // rcx
  signed __int64 v24; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int64)&a2[-*a1];
  v5 = (__int64)(a1[1] - *a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v5 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
    goto LABEL_15;
  v11 = v8;
  if ( v10 + v9 >= v8 )
    v11 = v10 + v9;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_15;
  v12 = 16 * v11;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
    {
      ProcessHeap = GetProcessHeap();
      v14 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v12);
      if ( !v14 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    else
    {
      v14 = 0LL;
    }
    goto LABEL_9;
  }
  if ( v12 + 39 < v12 )
LABEL_15:
    std::_Throw_bad_array_new_length();
  v21 = operator new(v12 + 39);
  if ( !v21 )
    _invalid_parameter_noinfo_noreturn();
  v14 = ((unsigned __int64)v21 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v14 - 8) = v21;
LABEL_9:
  v15 = (_OWORD *)v14;
  v16 = (char *)(v14 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  *(_OWORD *)v16 = *a3;
  v17 = (char *)a1[1];
  v18 = (char *)*a1;
  if ( v6 == v17 )
  {
    while ( v18 != v17 )
    {
      v20 = *(_OWORD *)v18;
      v18 += 16;
      *v15++ = v20;
    }
  }
  else
  {
    while ( v18 != v6 )
    {
      v22 = *(_OWORD *)v18;
      v18 += 16;
      *v15++ = v22;
    }
    v23 = (char *)a1[1];
    if ( v6 != v23 )
    {
      v24 = v16 - v6;
      do
      {
        *(_OWORD *)&v6[v24 + 16] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v23 );
    }
  }
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  result = v16;
  *a1 = v14;
  a1[1] = v14 + 16 * v8;
  a1[2] = v12 + v14;
  return result;
}
