/*
 * XREFs of CreateNewEventEntry @ 0x1C00BBBF4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C00BB8F4 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x1C00BBE2C (CBufferGetNextOffset.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
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
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int128 v23; // xmm0
  unsigned __int8 v24; // bp
  const void **v25; // r14
  __int64 v26; // r12
  __int64 v27; // rsi
  unsigned int v28; // edx
  void *v29; // rbx
  char *v30; // rdx
  int v31; // eax
  unsigned int v33; // edx
  void *v34; // rbx
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
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v17, 0x47417254u);
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
      if ( v7 >= 2u )
      {
        v34 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v34, *(const void **)(a4 + 16LL * v7), v33);
        *(_QWORD *)(NextOffset + 16LL * v7) = v34;
        *(_DWORD *)(NextOffset + 16LL * v7 + 12) = *(_DWORD *)(a4 + 16LL * v7 + 12);
        *(_DWORD *)(NextOffset + 16LL * v7 + 8) = *(_DWORD *)(a4 + 16LL * v7 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v7) = *(_OWORD *)(a4 + 16LL * v7);
      }
      ++v7;
    }
    while ( v7 < (unsigned int)a5 + 2 );
  }
  v22 = CBufferGetNextOffset(v35, 46LL);
  *(_QWORD *)(v22 + 16) = NextOffset;
  v23 = *a2;
  *(_BYTE *)(v22 + 45) = a5;
  v24 = a5 + 2;
  *(_BYTE *)(v22 + 44) = v8;
  *(_DWORD *)(v22 + 40) = a6;
  *(_OWORD *)v22 = v23;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v25 = (const void **)(16LL * v24 + a4 + 8);
    v26 = v21 - 54 - a4;
    v27 = (unsigned __int8)(v8 - v24);
    do
    {
      v29 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)v25);
      memmove(v29, *(v25 - 1), v28);
      v30 = (char *)v25 + v26;
      *(_QWORD *)&v30[*(_QWORD *)(v22 + 16)] = v29;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 12] = *((_DWORD *)v25 + 1);
      v31 = *(_DWORD *)v25;
      v25 += 2;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a7 = v22;
  return 0LL;
}
