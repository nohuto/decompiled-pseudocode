_QWORD *__fastcall std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // r8
  char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( a1 != a2 )
  {
    v5 = a1 + 32;
    v6 = (char *)a3 - a1;
    do
    {
      v7 = *(_QWORD *)(v5 - 16);
      v8 = *(_QWORD *)(v5 - 24);
      v9 = *(_QWORD *)(v5 - 32);
      *(_QWORD *)(v5 - 16) = 0LL;
      *(_QWORD *)(v5 - 24) = 0LL;
      *(_QWORD *)(v5 - 32) = 0LL;
      *(_QWORD *)&v6[v5 - 24] = v8;
      *a3 = v9;
      a3 += 7;
      *(_QWORD *)&v6[v5 - 16] = v7;
      v10 = *(_QWORD *)v5;
      v11 = *(_QWORD *)(v5 + 8);
      v12 = *(_QWORD *)(v5 - 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v5 - 8) = 0LL;
      *(_QWORD *)&v6[v5] = v10;
      *(_DWORD *)&v6[v5 + 16] = *(_DWORD *)(v5 + 16);
      *(_QWORD *)&v6[v5 - 8] = v12;
      *(_QWORD *)&v6[v5 + 8] = v11;
      v5 += 56LL;
    }
    while ( v5 - 32 != a2 );
  }
  std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>((__int64)a3, (__int64)a3);
  return a3;
}
