/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x1407667FC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406A2EDC (PfpGetPageListCount.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfpFileSetupObjectAttributes @ 0x1407674E0 (PfpFileSetupObjectAttributes.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // r8d
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD *v13; // rbx
  int v14; // ebx
  __int64 result; // rax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // r10d
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned __int64 v23; // r12
  unsigned int *v24; // r11
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  __int64 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // r10d
  __int64 v33; // [rsp+60h] [rbp-59h]
  __int64 v34; // [rsp+68h] [rbp-51h]
  __int64 v35; // [rsp+70h] [rbp-49h]
  int v36; // [rsp+78h] [rbp-41h]
  ULONG_PTR v37[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v38; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v39[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v40; // [rsp+C0h] [rbp+7h]
  int v41; // [rsp+C8h] [rbp+Fh]
  unsigned int v42; // [rsp+120h] [rbp+67h]
  int v44; // [rsp+130h] [rbp+77h] BYREF
  __int64 v45; // [rsp+138h] [rbp+7Fh] BYREF

  v44 = 0;
  LODWORD(v45) = 0;
  v40 = 0LL;
  v41 = 0;
  v3 = 5LL * a2;
  *(_OWORD *)v37 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  memset(v39, 0, sizeof(v39));
  v5 = a1[3];
  v6 = *(_QWORD *)(*a1 + 32LL);
  v34 = a2;
  v36 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v7 = *(unsigned __int16 *)(*a1 + 30LL);
  *(_DWORD *)v5 = 3;
  v42 = v7;
  v35 = v3;
  *(_QWORD *)(v5 + 8) = (8 * (v7 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)a1 + 3, 0xB0u, a2, &v45);
  v8 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      *(_DWORD *)(v5 + 4) = 0;
      if ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 )
      {
        do
        {
          v9 = 3 * v8;
          v8 = (unsigned int)(v8 + 1);
          v10 = *(_QWORD *)(v6 + 8 * v3 + 16) + 16 * v9;
          v11 = *(_QWORD *)(v10 + 8);
          if ( (*(_BYTE *)v10 & 0x10) != 0 )
            v4 = v10;
          if ( v11 )
          {
            *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 4))++ + 16) = v11;
            if ( *(_DWORD *)(v5 + 4) >= *((_DWORD *)a1 + 8) )
              break;
          }
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
        v33 = v4;
      }
      if ( !*(_DWORD *)(v5 + 4) )
        break;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v18)) < 0x80 )
      {
LABEL_31:
        v14 = -1073741248;
        goto LABEL_16;
      }
      v14 = IopXxxControlFile(*(HANDLE *)((v20 << 6) + a1[2]), (__int64)v37, 590112, v5, 8 * v19 + 16, 0LL, 0, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(v5 + 4));
      if ( v14 < 0 )
        goto LABEL_16;
      if ( v14 == 259 )
        KeBugCheckEx(0x191u, 0x161CuLL, 0LL, 0LL, 0LL);
      v4 = v33;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
    if ( v4 )
    {
      v21 = *a1;
      v22 = 0;
      v45 = 0LL;
      ++*(_DWORD *)(v21 + 88);
      if ( *(_DWORD *)(v4 + 16) )
      {
        do
        {
          *(_DWORD *)(v5 + 4) = 0;
          if ( v22 >= *(_DWORD *)(v4 + 16) )
            break;
          v23 = v45;
          v24 = (unsigned int *)(a1 + 4);
          v25 = 0;
          v26 = 0;
          do
          {
            v27 = *(_QWORD *)(v4 + 24);
            v28 = v23;
            v29 = *(_QWORD *)(v27 + 16LL * v22);
            v30 = v29 + *(unsigned int *)(v27 + 16LL * v22 + 8);
            if ( v29 >= v23 )
              v28 = v29;
            if ( v28 < v30 )
            {
              while ( 1 )
              {
                v31 = v28 >> 10;
                v28 += 4096LL;
                *(_QWORD *)(v5 + 8LL * v25 + 16) = v31;
                v26 = *(_DWORD *)(v5 + 4) + 1;
                *(_DWORD *)(v5 + 4) = v26;
                v25 = v26;
                if ( v26 >= *((_DWORD *)a1 + 8) )
                  break;
                if ( v28 >= v30 )
                  goto LABEL_42;
              }
              v23 = v28;
LABEL_42:
              v24 = (unsigned int *)(a1 + 4);
            }
            v25 = v26;
            if ( v26 >= *v24 )
              break;
            ++v22;
          }
          while ( v22 < *(_DWORD *)(v4 + 16) );
          v45 = v23;
          v3 = v35;
          if ( !v26 )
            break;
          if ( (unsigned int)PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v42)) < 0x80 )
          {
            goto LABEL_31;
          }
          v14 = IopXxxControlFile(*(HANDLE *)((v34 << 6) + a1[2]), (__int64)v37, 590112, v5, 8 * v32 + 16, 0LL, 0, 0);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(v5 + 4));
          if ( v14 < 0 )
            goto LABEL_16;
          if ( v14 == 259 )
            KeBugCheckEx(0x191u, 0x1681uLL, 0LL, 0LL, 0LL);
          v4 = v33;
        }
        while ( v22 < *(_DWORD *)(v33 + 16) );
      }
    }
  }
  v12 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v13 = (_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 16) + 48 * v12);
      if ( (*v13 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v13, a2, (unsigned int)&v38, (__int64)v39, (__int64)&v44);
        v17 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v34 << 6),
                (_DWORD)v13,
                v16,
                (__int64)v39,
                v44);
        v14 = v17;
        if ( v17 < 0 )
        {
          if ( v17 == -1073741248 )
            goto LABEL_16;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
  }
  v14 = 0;
LABEL_16:
  result = (unsigned int)v14;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v36;
  return result;
}
