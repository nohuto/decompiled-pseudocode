/*
 * XREFs of CreateNewEventEntry @ 0x1402E2438
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x1402E266C (CBufferGetNextOffset.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int64 *a7)
{
  unsigned __int8 v7; // di
  __int64 v8; // rsi
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int8 v13; // r8
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  SIZE_T v17; // r14
  PVOID PoolWithTag; // rax
  PVOID v19; // rbp
  __int64 NextOffset; // r12
  unsigned int v21; // edx
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int128 v25; // xmm0
  unsigned __int8 v26; // bp
  const void **v27; // r14
  __int64 v28; // r12
  __int64 v29; // rsi
  unsigned int v30; // edx
  void *v31; // rbx
  char *v32; // rdx
  int v33; // eax
  _QWORD v35[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a3;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  if ( (_BYTE)v8 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v15 = *v14;
      v14 += 4;
      if ( v13 >= 2u )
        v12 += v15;
      v16 = v15 + v11;
      if ( v13 >= 2u )
        v16 = v11;
      ++v13;
      v11 = v16;
    }
    while ( v13 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v12 + v16) > 0xFFFF )
      return 3221225621LL;
  }
  v17 = v12 + 16 * v8 + 46;
  if ( !v17 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), v17, 0x47417254u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v17);
  v35[0] = v19;
  v35[1] = v17;
  NextOffset = CBufferGetNextOffset(v35, 16 * v8);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 < 2u )
      {
        *(_OWORD *)(NextOffset + 16LL * v7) = *(_OWORD *)(a4 + 16LL * v7);
      }
      else
      {
        v22 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v22, *(const void **)(a4 + 16LL * v7), v21);
        *(_QWORD *)(NextOffset + 16LL * v7) = v22;
        *(_DWORD *)(NextOffset + 16LL * v7 + 12) = *(_DWORD *)(a4 + 16LL * v7 + 12);
        *(_DWORD *)(NextOffset + 16LL * v7 + 8) = *(_DWORD *)(a4 + 16LL * v7 + 8);
      }
      ++v7;
    }
    while ( v7 < (unsigned int)a5 + 2 );
  }
  v24 = CBufferGetNextOffset(v35, 46LL);
  *(_QWORD *)(v24 + 16) = NextOffset;
  v25 = *a2;
  *(_BYTE *)(v24 + 45) = a5;
  v26 = a5 + 2;
  *(_BYTE *)(v24 + 44) = v8;
  *(_DWORD *)(v24 + 40) = a6;
  *(_OWORD *)v24 = v25;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v27 = (const void **)(16LL * v26 + a4 + 8);
    v28 = v23 - 54 - a4;
    v29 = (unsigned __int8)(v8 - v26);
    do
    {
      v31 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)v27);
      memmove(v31, *(v27 - 1), v30);
      v32 = (char *)v27 + v28;
      *(_QWORD *)&v32[*(_QWORD *)(v24 + 16)] = v31;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 12] = *((_DWORD *)v27 + 1);
      v33 = *(_DWORD *)v27;
      v27 += 2;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 8] = v33;
      --v29;
    }
    while ( v29 );
  }
  *a7 = v24;
  return 0LL;
}
