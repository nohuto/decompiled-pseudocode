__int64 __fastcall EngFntCacheAllocInternal(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = 0LL;
  *a3 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v8 = *(_QWORD *)(v7 + 19392);
  if ( !v8 || !v6 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 19384) & 2) != 0 )
  {
    v9 = (a2 + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v9 + *(_QWORD *)(v8 + 32)) < *(_QWORD *)(v8 + 40) || (unsigned int)bReAllocCacheFile(a2) )
    {
      v10 = SearchFntCacheNewLink(v6);
      if ( v10 )
      {
        if ( v10[4] || v10[5] )
        {
          v10[6] |= 1u;
        }
        else
        {
          v11 = *(_QWORD *)(v7 + 19392);
          v3 = *(_QWORD *)(v11 + 32);
          *(_QWORD *)(v11 + 32) = v3 + v9;
          v10[4] = a2;
          v10[5] = v3 - *(_DWORD *)(*(_QWORD *)(v7 + 19392) + 24LL);
        }
        *(_DWORD *)(*(_QWORD *)(v7 + 19392) + 20LL) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(v8 + 16) |= 2u;
  }
  v12 = *(unsigned int *)(*(_QWORD *)(v7 + 19392) + 16LL);
  if ( (v12 & 1) != 0 )
  {
    EngCloseFNTCache(v12);
    v3 = 0LL;
    *a3 = 1;
  }
  return v3;
}
