__int64 __fastcall MiEmptyKernelStackCache(union _SLIST_HEADER *a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int j; // edi
  __int64 v9; // r14
  unsigned __int64 Alignment; // rax
  union _SLIST_HEADER *v11; // rbx
  union _SLIST_HEADER *v12; // rbp
  union _SLIST_HEADER *v13; // rbx
  union _SLIST_HEADER *v14; // rbp
  struct _SLIST_ENTRY v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2 || (byte_140C6570F & 1) == 0 )
  {
    result = (__int64)MiSystemPartition;
    if ( a1 == (union _SLIST_HEADER *)MiSystemPartition )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        result = KeGetPrcb(i);
        v6 = result;
        if ( *(_QWORD *)(result + 33352) )
        {
          v7 = _InterlockedExchange64((volatile __int64 *)(result + 33352), 0LL);
          if ( v7 )
            result = MiDeleteCachedKernelStack(v7);
        }
        if ( *(_QWORD *)(v6 + 37944) )
        {
          v16 = 0LL;
          v15 = 0LL;
          result = _InterlockedExchange64((volatile __int64 *)(v6 + 37944), 0LL);
          *(_QWORD *)&v16 = result;
          if ( result )
            result = (__int64)MiDeleteCachedKernelShadowStack(a1, &v15, 0);
        }
      }
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v9 = 25408LL * j;
      Alignment = a1[1].Alignment;
      v11 = (union _SLIST_HEADER *)(v9 + Alignment + 23200);
      v12 = v11 + 6;
      if ( v11 < &v11[6] )
      {
        do
        {
          MiPruneCachedStackList((__int64)a1, v11, 0, 0);
          v11 += 2;
        }
        while ( v11 < v12 );
        Alignment = a1[1].Alignment;
      }
      if ( a2 )
      {
        v13 = (union _SLIST_HEADER *)(v9 + Alignment + 23296);
        v14 = v13 + 6;
        while ( v13 < v14 )
        {
          MiPruneCachedStackList((__int64)a1, v13, 0, 1);
          v13 += 2;
        }
      }
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
