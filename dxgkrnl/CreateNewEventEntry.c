/*
 * XREFs of CreateNewEventEntry @ 0x1C0074DB4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C007522C (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     CBufferGetNextOffset @ 0x1C0074C64 (CBufferGetNextOffset.c)
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
  SIZE_T v18; // r14
  PVOID PoolWithTag; // rax
  __int64 v20; // rbp
  __int64 NextOffset; // r12
  unsigned int v22; // edx
  void *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int128 v26; // xmm0
  unsigned __int8 v27; // bp
  const void **v28; // r14
  __int64 v29; // r12
  __int64 v30; // rsi
  unsigned int v31; // edx
  void *v32; // rbx
  char *v33; // rdx
  int v34; // eax
  __int64 v35[7]; // [rsp+20h] [rbp-38h] BYREF

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
  v18 = v12 + 16 * v8 + 46;
  if ( !v18 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v18, 0x47417254u);
  v20 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v18);
  v35[0] = v20;
  v35[1] = v18;
  NextOffset = CBufferGetNextOffset(v35, 16 * v8);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v23 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v23, *(const void **)(a4 + 16LL * v7), v22);
        *(_QWORD *)(NextOffset + 16LL * v7) = v23;
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
  v25 = CBufferGetNextOffset(v35, 0x2EuLL);
  *(_QWORD *)(v25 + 16) = NextOffset;
  v26 = *a2;
  *(_BYTE *)(v25 + 45) = a5;
  v27 = a5 + 2;
  *(_BYTE *)(v25 + 44) = v8;
  *(_DWORD *)(v25 + 40) = a6;
  *(_OWORD *)v25 = v26;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v28 = (const void **)(16LL * v27 + a4 + 8);
    v29 = v24 - 54 - a4;
    v30 = (unsigned __int8)(v8 - v27);
    do
    {
      v32 = (void *)CBufferGetNextOffset(v35, *(unsigned int *)v28);
      memmove(v32, *(v28 - 1), v31);
      v33 = (char *)v28 + v29;
      *(_QWORD *)&v33[*(_QWORD *)(v25 + 16)] = v32;
      *(_DWORD *)&v33[*(_QWORD *)(v25 + 16) + 12] = *((_DWORD *)v28 + 1);
      v34 = *(_DWORD *)v28;
      v28 += 2;
      *(_DWORD *)&v33[*(_QWORD *)(v25 + 16) + 8] = v34;
      --v30;
    }
    while ( v30 );
  }
  *a7 = v25;
  return 0LL;
}
