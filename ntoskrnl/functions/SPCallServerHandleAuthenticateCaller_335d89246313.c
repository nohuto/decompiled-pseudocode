__int64 __fastcall SPCallServerHandleAuthenticateCaller(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned __int64 v6; // rbp
  unsigned int *v7; // rsi
  int v8; // ebx
  __int64 Pool2; // rax
  unsigned int v11; // ecx
  _DWORD *v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 i; // rdx
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v15 = *(_DWORD *)(a2 + 16) + 52;
  if ( v15 < *(_DWORD *)(a2 + 16) + 48 || v15 + v5 < v15 )
    return (unsigned int)-1073741675;
  if ( a3 < v15 + v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = __rdtsc();
    qword_140D53228 = v6;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = (unsigned int *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = 20;
  v8 = 0;
  Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
  if ( Pool2 )
  {
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v8 >= 0 )
  {
    v16 = *(_QWORD *)(a4 + 8);
    if ( v16 )
    {
      v11 = 0;
      v12 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( *v12 < 0xFFFFFFFC && (_DWORD *)((char *)v12 + (unsigned int)(*v12 + 4)) >= v12 )
        {
          ++v11;
          v12 = (_DWORD *)((char *)v12 + (unsigned int)(*v12 + 4));
          if ( v11 >= *(_DWORD *)a4 )
            goto LABEL_34;
        }
        return (unsigned int)-1073741675;
      }
LABEL_34:
      if ( v12 + 1 < v12 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v12 + 2) > v16 + (unsigned __int64)*v7 )
        return (unsigned int)-1073741789;
      *v12 = 4;
      v12[1] = 0;
    }
    else
    {
      v17 = *v7 + 8;
      if ( v17 < *v7 )
      {
LABEL_30:
        *v7 = -1;
        return (unsigned int)-1073741675;
      }
      *v7 = v17;
    }
    ++*(_DWORD *)a4;
    v18 = *(_QWORD *)(a4 + 8);
    if ( !v18 )
    {
      v19 = *v7 + 12;
      if ( v19 >= *v7 )
      {
        *v7 = v19;
        ++*(_DWORD *)a4;
        return 0;
      }
      goto LABEL_30;
    }
    v13 = 0;
    for ( i = *(_QWORD *)(a4 + 8); v13 < *(_DWORD *)a4; i += v20 )
    {
      v20 = *(_DWORD *)i + 4;
      if ( *(_DWORD *)i >= 0xFFFFFFFC || i + v20 < i )
        return (unsigned int)-1073741675;
      ++v13;
    }
    if ( i + 4 >= i )
    {
      v8 = 0;
      if ( i + 12 <= v18 + (unsigned __int64)*v7 )
      {
        *(_DWORD *)i = 8;
        *(_QWORD *)(i + 4) = v6;
        ++*(_DWORD *)a4;
        return (unsigned int)v8;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v8;
}
