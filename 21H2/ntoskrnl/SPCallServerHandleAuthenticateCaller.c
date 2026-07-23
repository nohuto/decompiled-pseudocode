/*
 * XREFs of SPCallServerHandleAuthenticateCaller @ 0x140620CC4
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleAuthenticateCaller(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int64 i; // rdx
  unsigned int v14; // eax
  __int64 v15; // r9
  int v16; // ebp
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r10
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v14 = *(_DWORD *)(a2 + 16) + 52;
  if ( v14 < *(_DWORD *)(a2 + 16) + 48 || v14 + v5 < v14 )
    return (unsigned int)-1073741675;
  if ( a3 < v14 + v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = __rdtsc();
    qword_140D2D270 = v6;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v7 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v7 = -1073741801;
  }
  if ( (v7 & 0x80000000) == 0 )
  {
    v15 = *(_QWORD *)(a4 + 8);
    v16 = -1;
    if ( v15 )
    {
      v10 = 0;
      v11 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v23 = *v11 + 4;
          if ( *v11 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v11 + v23) < v11 )
            return (unsigned int)-1073741675;
          ++v10;
          v11 = (_DWORD *)((char *)v11 + v23);
          if ( v10 >= *(_DWORD *)a4 )
            goto LABEL_39;
        }
        v7 = -1073741675;
      }
      else
      {
LABEL_39:
        if ( v11 + 1 < v11 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( (unsigned __int64)(v11 + 2) > v15 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v11 = 4;
        v11[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v17 = *(_DWORD *)(a4 + 4);
      v18 = -1;
      v19 = v17 + 8;
      if ( v17 + 8 >= v17 )
        v18 = v17 + 8;
      v7 = v19 < v17 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v18;
      if ( v19 >= v17 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_31;
      }
    }
    if ( (v7 & 0x80000000) != 0 )
      return v7;
LABEL_31:
    v20 = *(_QWORD *)(a4 + 8);
    if ( !v20 )
    {
      v21 = *(_DWORD *)(a4 + 4);
      v22 = v21 + 12;
      if ( v21 + 12 >= v21 )
        v16 = v21 + 12;
      v7 = v22 < v21 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v16;
      if ( v22 >= v21 )
      {
        ++*(_DWORD *)a4;
        return 0;
      }
      return v7;
    }
    v12 = 0;
    for ( i = *(_QWORD *)(a4 + 8); v12 < *(_DWORD *)a4; i += v24 )
    {
      v24 = *(_DWORD *)i + 4;
      if ( *(_DWORD *)i >= 0xFFFFFFFC || i + v24 < i )
        return (unsigned int)-1073741675;
      ++v12;
    }
    if ( i + 4 >= i )
    {
      v7 = 0;
      if ( i + 12 <= v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)i = 8;
        *(_QWORD *)(i + 4) = v6;
        ++*(_DWORD *)a4;
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
