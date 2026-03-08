/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x1402F8BCC
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1402F8B5C (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpTiAllocVadQueryEventWriteWorkItemContext(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // r11d
  void *v11; // r12
  _DWORD *v13; // r10
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v20; // rbx
  char *v21; // r14
  const void **v22; // rdi
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx

  v8 = 0;
  v9 = a3;
  v10 = 0;
  v11 = a4;
  if ( a3 )
  {
    v13 = (_DWORD *)(a1 + 8);
    do
    {
      v14 = v8 + *v13;
      if ( v14 < v8 )
        return 3221225621LL;
      ++v10;
      v13 += 4;
      v8 = v14;
    }
    while ( v10 < a3 );
  }
  v15 = 16LL * a2;
  if ( v15 > 0xFFFFFFFF )
    return 3221225621LL;
  v16 = v15 + 80;
  if ( (unsigned int)v15 >= 0xFFFFFFB0 )
    return 3221225621LL;
  v17 = v16 + v8;
  if ( v16 + v8 < v16 )
    return 3221225621LL;
  v18 = 8LL * a6;
  if ( v18 > 0xFFFFFFFF || v17 + (unsigned int)v18 < v17 )
    return 3221225621LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v17 + (unsigned int)v18, 1853049172LL);
  v20 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[4] = Pool2 + 10;
  v21 = (char *)Pool2 + (unsigned int)v15 + 80;
  Pool2[5] = v21;
  Pool2[9] = &v21[v8];
  if ( (_DWORD)v9 )
  {
    v22 = (const void **)(a1 + 8);
    v23 = v9;
    do
    {
      memmove(v21, *(v22 - 1), *(unsigned int *)v22);
      v24 = *(_DWORD *)v22;
      v25 = (__int64)v22 + v20[4] - a1 - 8;
      *(_DWORD *)(v25 + 12) = 0;
      *(_QWORD *)v25 = v21;
      *(_DWORD *)(v25 + 8) = v24;
      v26 = *(unsigned int *)v22;
      v22 += 2;
      v21 += v26;
      --v23;
    }
    while ( v23 );
    v11 = a4;
  }
  *((_DWORD *)v20 + 12) = v9;
  ObfReferenceObjectWithTag(v11, 0x69547445u);
  v27 = (void *)v20[9];
  v20[8] = v11;
  memmove(v27, Src, (unsigned int)v18);
  *((_DWORD *)v20 + 13) = a6;
  v20[7] = a7;
  *a8 = v20;
  return 0LL;
}
