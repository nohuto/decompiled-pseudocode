__int64 __fastcall HalpQueryDeviceRelations(_QWORD *Object, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rdi
  void *v13; // rcx
  __int64 Pool2; // rax
  __int64 v15; // rbx

  v3 = Object[8];
  if ( *(_DWORD *)v3 == 193 )
    v6 = *(_QWORD *)(v3 + 8);
  else
    v6 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 != 4 )
      return 3221225659LL;
    Pool2 = ExAllocatePool2(256LL, 16LL, 1886150984LL);
    v15 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = Object;
      ObfReferenceObject(Object);
      *a3 = v15;
      return 0LL;
    }
  }
  else
  {
    if ( !v6 )
      return 3221225659LL;
    v9 = v6;
    do
    {
      v9 = *(_QWORD *)(v9 + 8);
      ++v7;
    }
    while ( v9 );
    v10 = (unsigned int *)ExAllocatePool2(256LL, 16LL * v7, 1886150984LL);
    v11 = v10;
    if ( v10 )
    {
      *v10 = v7;
      v12 = 0LL;
      do
      {
        v13 = *(void **)(v6 + 16);
        *(_QWORD *)&v11[2 * v12 + 2] = v13;
        ObfReferenceObject(v13);
        v6 = *(_QWORD *)(v6 + 8);
        v12 = (unsigned int)(v12 + 1);
      }
      while ( v6 );
      *a3 = (__int64)v11;
      return 0LL;
    }
  }
  return 3221225626LL;
}
