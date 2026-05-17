/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x180108968
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180108840 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1801086E0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180108710 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // r15
  unsigned int v10; // r14d
  volatile signed __int64 *v11; // r13
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edi
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // r13
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h]

  v28 = RtlpHpEnvHandle;
  v6 = RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, &v28);
  v9 = (_QWORD *)v6;
  if ( !v6 )
    return 0;
  v11 = (volatile signed __int64 *)(a1 + 8);
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = a3;
  RtlAcquireSRWLockExclusive(a1 + 8, 0LL, v7, v8);
  v12 = a1 + 16;
  v10 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v13 = *(_DWORD *)(a1 + 20);
  v14 = 2 * (v13 >> 5);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v14 )
    goto LABEL_25;
  if ( (unsigned int)v14 < 4 )
    v14 = 4LL;
  v15 = 0;
  v16 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v14);
  if ( v16 )
  {
    if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
    {
      v17 = -1;
      do
      {
        ++v17;
        LODWORD(v14) = (unsigned int)v14 >> 1;
      }
      while ( (_DWORD)v14 );
      v14 = (unsigned int)(1 << v17);
    }
    if ( (unsigned int)v14 > 0x4000000 )
      v14 = 0x4000000LL;
    v18 = (unsigned int)v14;
    if ( v16 > &v16[8 * v14] )
      v18 = 0LL;
    if ( v18 )
    {
      memset64(v16, v12 | 1, v18);
      v15 = 0;
    }
    v19 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v20 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v21 = *(_QWORD **)(v20 + 8LL * v15);
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          *(_QWORD *)(v20 + 8LL * v15) = *v21;
          v30 = v19 & v21[1];
          v22 = (37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37
                 * (BYTE4(v30)
                  + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
               + HIBYTE(v30)) & (unsigned int)(v14 - 1);
          *v21 = *(_QWORD *)&v16[8 * v22];
          *(_QWORD *)&v16[8 * v22] = v21;
        }
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 20) >> 5 );
      v11 = (volatile signed __int64 *)(a1 + 8);
    }
    v23 = *(_QWORD *)(a1 + 24);
    v13 = (32 * v14) | *(_DWORD *)(a1 + 20) & 0x1F;
    *(_QWORD *)(a1 + 24) = v16;
    *(_DWORD *)(a1 + 20) = v13;
    if ( v23 )
    {
      RtlpHpStackDbFreeRoutine(v23);
      v13 = *(_DWORD *)(a1 + 20);
    }
    goto LABEL_25;
  }
  v13 = *(_DWORD *)(a1 + 20);
  if ( v13 >= 0x20 )
  {
LABEL_25:
    v27 = v9[1] & (-1LL << (v13 & 0x1F));
    v24 = *(_QWORD *)(a1 + 24);
    v25 = (37
         * (BYTE6(v27)
          + 37
          * (BYTE5(v27)
           + 37
           * (BYTE4(v27)
            + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
         + HIBYTE(v27)) & ((v13 >> 5) - 1);
    *v9 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v9;
    ++*(_DWORD *)v12;
    v9 = 0LL;
    goto LABEL_26;
  }
  v10 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( v9 )
  {
    v29 = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v9, &v29);
  }
  return v10;
}
