/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x1406A2A70
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x1402F7FE8 (PfpReadSupportInitialize.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406A2EDC (PfpGetPageListCount.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140785204 (PfpReadSupportCleanup.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int *v7; // r15
  int v8; // eax
  unsigned __int8 v9; // r12
  int v10; // r9d
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // r13d
  unsigned int v14; // r10d
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // ecx
  int v19; // eax
  char v20; // cl
  bool v21; // zf
  __int64 result; // rax
  unsigned int v23; // [rsp+30h] [rbp-59h]
  unsigned int v24; // [rsp+34h] [rbp-55h]
  __int64 v25; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int128 v31; // [rsp+68h] [rbp-21h] BYREF
  __int128 v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  char v35; // [rsp+F0h] [rbp+67h]
  int v36; // [rsp+F8h] [rbp+6Fh]
  int v37; // [rsp+100h] [rbp+77h]
  unsigned int v38; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v34 = 0LL;
  v3 = 0;
  v31 = 0LL;
  v4 = 0;
  v32 = 0LL;
  LODWORD(v25) = 0;
  v33 = 0LL;
  v35 = 0;
  v37 = 0;
  v38 = *(unsigned __int16 *)(*a1 + 30LL);
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( v4 < *(_DWORD *)(v1 + 8) )
  {
    if ( !_bittest64((const signed __int64 *)(((unsigned __int64)v4 << 6) + a1[2] + 24), 0x22u) )
      goto LABEL_27;
    v5 = *(_QWORD *)(v1 + 32);
    v6 = 0;
    v24 = 0;
    v28 = 5LL * v4;
    v27 = v5;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_27;
    do
    {
      v7 = (int *)(*(_QWORD *)(v5 + 8 * v28 + 16) + 48LL * v6);
      v8 = *v7;
      if ( (*v7 & 2) != 0 || !v7[4] )
        goto LABEL_26;
      v9 = 0;
      while ( v9 )
      {
        if ( (v8 & 1) != 0 )
          goto LABEL_9;
LABEL_23:
        ++v9;
        v20 = v8;
        if ( v9 > 1u )
          goto LABEL_24;
      }
      if ( (v8 & 1) != 0 )
        goto LABEL_23;
LABEL_9:
      PfpReadSupportInitialize((__int64)&v31);
      LOBYTE(v10) = v9;
      if ( (int)PfpFileBuildReadSupport((_DWORD)a1, (_DWORD)v7, v4, v10, (__int64)&v31) >= 0 )
      {
        v12 = v31;
        v26 = v31;
        v13 = 0;
        v29 = v31;
        *(_QWORD *)v31 = v32;
        v23 = *(_DWORD *)(v12 + 8);
        v36 = 0;
        MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)a1 + 3, 0xB0u, v11, &v25);
        if ( v23 )
        {
          while ( !(unsigned int)PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v38)) >= 0x80 )
          {
            if ( v13 + 16 > v14 )
              v15 = v14 - v13;
            else
              v15 = 16;
            v16 = v26;
            *(_DWORD *)(v26 + 8) = v15;
            v17 = (_QWORD *)(v16 + 16);
            memmove((void *)(v16 + 16), (const void *)(v16 + 16 + 8LL * v13), 8LL * v15);
            *v17 |= (8 * (v38 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            LODWORD(v17) = MmPrefetchPagesEx(1LL, &v29);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v26 + 8));
            v18 = v36;
            if ( (int)v17 >= 0 )
            {
              v19 = *(_DWORD *)(v26 + 8);
              v18 = v19 + v36;
              v13 += v19;
              v36 += v19;
              if ( v13 < v23 )
                continue;
            }
            v4 = v37;
            goto LABEL_18;
          }
          v4 = v37;
          v18 = v36;
          v35 = 1;
        }
        else
        {
          v18 = 0;
        }
LABEL_18:
        if ( v9 )
          *(_DWORD *)(v1 + 100) += v18;
        else
          *(_DWORD *)(v1 + 96) += v18;
      }
      PfpReadSupportCleanup(a1[5], &v31);
      if ( v35 || (unsigned int)PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_28;
      }
      v8 = *v7;
      v20 = *v7;
      if ( (v20 & 8) == 0 )
        goto LABEL_23;
LABEL_24:
      v21 = (v20 & 8) == 0;
      v5 = v27;
      if ( v21 )
        ++*(_DWORD *)(v1 + 84);
LABEL_26:
      v6 = v24 + 1;
      v24 = v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 8 * v28 + 12) >> 1 );
LABEL_27:
    v37 = ++v4;
  }
LABEL_28:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v30;
  return result;
}
