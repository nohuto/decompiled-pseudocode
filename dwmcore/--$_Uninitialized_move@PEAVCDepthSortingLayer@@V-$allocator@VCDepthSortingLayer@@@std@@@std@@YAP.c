_QWORD *__fastcall std::_Uninitialized_move<CDepthSortingLayer *>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( a1 != a2 )
  {
    v5 = a1 + 8;
    v6 = (char *)a3 - a1;
    do
    {
      v7 = *(_QWORD *)v5;
      v8 = *(_QWORD *)(v5 - 8);
      v9 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v5 - 8) = 0LL;
      *(_QWORD *)&v6[v5] = v7;
      *a3 = v8;
      a3 += 5;
      *(_QWORD *)&v6[v5 + 8] = v9;
      *(_DWORD *)&v6[v5 + 16] = *(_DWORD *)(v5 + 16);
      *(_DWORD *)&v6[v5 + 20] = *(_DWORD *)(v5 + 20);
      *(_DWORD *)&v6[v5 + 24] = *(_DWORD *)(v5 + 24);
      v5 += 40LL;
    }
    while ( v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CDepthSortingLayer>>((__int64)a3, (__int64)a3);
  return a3;
}
