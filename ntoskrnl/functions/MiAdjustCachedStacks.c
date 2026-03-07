__int64 __fastcall MiAdjustCachedStacks(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v4; // rbx
  unsigned int j; // edi
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  result = (__int64)&MiSystemPartition;
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      result = KeGetPrcb(i);
      v4 = result;
      if ( *(_QWORD *)(result + 33352) && _InterlockedExchange64((volatile __int64 *)(result + 33352), 0LL) )
        result = MiDeleteCachedKernelStack();
      if ( *(_QWORD *)(v4 + 37944) )
      {
        v13 = 0LL;
        v12 = 0LL;
        result = _InterlockedExchange64((volatile __int64 *)(v4 + 37944), 0LL);
        *(_QWORD *)&v13 = result;
        if ( result )
          result = MiDeleteCachedKernelShadowStack(a1, &v12, 0LL);
      }
    }
  }
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    v6 = 0;
    v7 = 25408LL * j;
    v8 = v7 + *(_QWORD *)(a1 + 16) + 23200LL;
    v9 = v8 + 96;
    while ( v8 < v9 )
    {
      MiAdjustCachedStackList(a1, v8, v6, 0LL);
      v8 += 32LL;
      ++v6;
    }
    v10 = v7 + *(_QWORD *)(a1 + 16) + 23296LL;
    v11 = v10 + 96;
    while ( v10 < v11 )
    {
      MiAdjustCachedStackList(a1, v10, 0LL, 1LL);
      v10 += 32LL;
    }
    result = (unsigned __int16)KeNumberNodes;
  }
  return result;
}
