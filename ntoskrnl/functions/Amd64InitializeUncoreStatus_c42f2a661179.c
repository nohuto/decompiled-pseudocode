__int64 __fastcall Amd64InitializeUncoreStatus(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v8; // r15d
  _OWORD *v9; // rax
  __int64 v10; // rcx
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rbp
  __int64 *v15; // rax

  v4 = *a2;
  v8 = a1;
  if ( (__int64 *)*a2 == a2 )
    goto LABEL_6;
  while ( *(_DWORD *)(v4 + 20) != a3 )
  {
    v4 = *(_QWORD *)v4;
    if ( (__int64 *)v4 == a2 )
      goto LABEL_6;
  }
  if ( !v4 )
  {
LABEL_6:
    v9 = (_OWORD *)HalpMmAllocCtxAlloc(a1, 32LL);
    v4 = (__int64)v9;
    if ( v9 )
    {
      v10 = (unsigned int)(40 * a4);
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = v10;
      v12 = (void *)HalpMmAllocCtxAlloc(v10, (unsigned int)v10);
      v14 = v12;
      if ( v12 )
      {
        memset(v12, 0, v11);
        *(_DWORD *)(v4 + 20) = a3;
        *(_DWORD *)(v4 + 16) = v8;
        *(_QWORD *)(v4 + 24) = v14;
        v15 = (__int64 *)a2[1];
        if ( (__int64 *)*v15 != a2 )
          __fastfail(3u);
        *(_QWORD *)v4 = a2;
        *(_QWORD *)(v4 + 8) = v15;
        *v15 = v4;
        a2[1] = v4;
      }
      else
      {
        HalpMmAllocCtxFree(v13, v4);
        return 0LL;
      }
    }
  }
  return v4;
}
