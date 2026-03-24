/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x14070B688
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14070AFA4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14026E9CC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x14026EA10 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140633FAC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406340C8 (PfpGetPageListCount.c)
 *     PfpFileSetupObjectAttributes @ 0x140634140 (PfpFileSetupObjectAttributes.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     PfpPrefetchDirectoryStream @ 0x14070BA34 (PfpPrefetchDirectoryStream.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 Src; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  _DWORD *v16; // rbx
  int v17; // ebx
  __int64 result; // rax
  int v19; // r9d
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned int v22; // r15d
  unsigned int v23; // r8d
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  int v30; // r10d
  unsigned int v31; // r8d
  int v32; // r10d
  __int64 v33; // r11
  size_t Size; // [rsp+38h] [rbp-81h]
  __int64 v35; // [rsp+48h] [rbp-71h]
  __int64 v36; // [rsp+50h] [rbp-69h]
  __int64 v37; // [rsp+60h] [rbp-59h]
  __int64 v38; // [rsp+68h] [rbp-51h]
  int v39; // [rsp+70h] [rbp-49h]
  ULONG_PTR v40[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v41; // [rsp+88h] [rbp-31h] BYREF
  _OWORD v42[7]; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v43; // [rsp+120h] [rbp+67h]
  int v45; // [rsp+130h] [rbp+77h] BYREF
  __int64 v46; // [rsp+138h] [rbp+7Fh] BYREF

  v45 = 0;
  LODWORD(v46) = 0;
  *(_OWORD *)v40 = 0LL;
  v38 = a2;
  v41 = 0LL;
  v3 = 0LL;
  v4 = 5LL * a2;
  Src = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)a1;
  memset(v42, 0, 32);
  v7 = *(_QWORD *)(v6 + 32);
  v37 = 0LL;
  v39 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v8 = *(unsigned __int16 *)(v6 + 30);
  *(_DWORD *)Src = 3;
  v9 = *(_QWORD *)a1;
  v42[2] = 0LL;
  v43 = v8;
  *(_QWORD *)(Src + 8) = (8 * (v8 & 7)) | (unsigned __int64)(*(_DWORD *)(v9 + 28) & 7);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)(a1 + 48), 0xB0u, a2, &v46);
  v10 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      *(_DWORD *)(Src + 4) = 0;
      if ( (unsigned int)v10 >= *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 )
        break;
      do
      {
        v11 = *(unsigned int *)(Src + 4);
        v12 = 48 * v10;
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_QWORD *)(v7 + 8 * v4 + 16) + v12;
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)v13 & 0x10) != 0 )
          v3 = v13;
        if ( v14 )
        {
          *(_QWORD *)(Src + 8 * v11 + 16) = v14;
          LODWORD(v11) = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v11;
          if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 32) )
            break;
        }
      }
      while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
      v37 = v3;
      if ( !(_DWORD)v11 )
        break;
      if ( PfpCheckPrefetchAbort((_QWORD *)a1)
        || (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 4) != 0
        && (unsigned __int64)(*(_QWORD *)(a1 + 48) + *(_QWORD *)(a1 + 56) + PfpGetPageListCount(a1 + 88, 0, v31)) < 0x80 )
      {
LABEL_52:
        v17 = -1073741248;
        goto LABEL_15;
      }
      LOBYTE(v36) = 0;
      LODWORD(v35) = 0;
      LODWORD(Size) = 8 * v32 + 16;
      v17 = IopXxxControlFile(
              *(void **)((v33 << 6) + *(_QWORD *)(a1 + 16)),
              0LL,
              0LL,
              0LL,
              (unsigned __int64)v40,
              0x90120u,
              (char *)Src,
              Size,
              0LL,
              v35,
              v36);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)(a1 + 48), *(unsigned int *)(Src + 4));
      if ( v17 < 0 )
        goto LABEL_15;
      if ( v17 == 259 )
        KeBugCheckEx(0x191u, 0x15FBuLL, 0LL, 0LL, 0LL);
      v3 = v37;
    }
    while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
    if ( v3 )
    {
      v21 = 0LL;
      v22 = 0;
      ++*(_DWORD *)(*(_QWORD *)a1 + 88LL);
      if ( *(_DWORD *)(v3 + 16) )
      {
        do
        {
          *(_DWORD *)(Src + 4) = 0;
          if ( v22 >= *(_DWORD *)(v3 + 16) )
            break;
          v23 = *(_DWORD *)(a1 + 32);
          v24 = 0;
          do
          {
            v25 = *(_QWORD *)(v3 + 24);
            v26 = v21;
            v27 = *(_QWORD *)(v25 + 16LL * v22);
            v28 = v27 + *(unsigned int *)(v25 + 16LL * v22 + 8);
            if ( v27 >= v21 )
              v26 = *(_QWORD *)(v25 + 16LL * v22);
            while ( v26 < v28 )
            {
              v29 = v26 >> 10;
              v26 += 4096LL;
              *(_QWORD *)(Src + 8LL * *(unsigned int *)(Src + 4) + 16) = v29;
              v24 = *(_DWORD *)(Src + 4) + 1;
              *(_DWORD *)(Src + 4) = v24;
              v23 = *(_DWORD *)(a1 + 32);
              if ( v24 >= v23 )
              {
                v21 = v26;
                break;
              }
            }
            if ( v24 >= v23 )
              break;
            ++v22;
          }
          while ( v22 < *(_DWORD *)(v3 + 16) );
          if ( !v24 )
            break;
          if ( PfpCheckPrefetchAbort((_QWORD *)a1)
            || (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 4) != 0
            && (unsigned __int64)(*(_QWORD *)(a1 + 48) + *(_QWORD *)(a1 + 56) + PfpGetPageListCount(a1 + 88, 0, v43)) < 0x80 )
          {
            goto LABEL_52;
          }
          LOBYTE(v36) = 0;
          LODWORD(v35) = 0;
          LODWORD(Size) = 8 * v30 + 16;
          v17 = IopXxxControlFile(
                  *(void **)((v38 << 6) + *(_QWORD *)(a1 + 16)),
                  0LL,
                  0LL,
                  0LL,
                  (unsigned __int64)v40,
                  0x90120u,
                  (char *)Src,
                  Size,
                  0LL,
                  v35,
                  v36);
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch((_OWORD *)(a1 + 48), *(unsigned int *)(Src + 4));
          if ( v17 < 0 )
            goto LABEL_15;
          if ( v17 == 259 )
            KeBugCheckEx(0x191u, 0x1660uLL, 0LL, 0LL, 0LL);
          v3 = v37;
        }
        while ( v22 < *(_DWORD *)(v37 + 16) );
      }
    }
  }
  v15 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v16 = (_DWORD *)(*(_QWORD *)(v7 + 8 * v4 + 16) + 48 * v15);
      if ( (*v16 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes(a1, (__int64)v16, a2, (__int64)&v41, (__int64)v42, &v45);
        v20 = PfpPrefetchDirectoryStream(
                a1,
                *(_DWORD *)(a1 + 16) + ((_DWORD)v38 << 6),
                (_DWORD)v16,
                v19,
                (__int64)v42,
                v45);
        v17 = v20;
        if ( v20 < 0 )
        {
          if ( v20 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*(_QWORD *)a1 + 88LL);
        }
      }
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
  }
  v17 = 0;
LABEL_15:
  result = (unsigned int)v17;
  *(_DWORD *)(*(_QWORD *)a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                                      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                      - v39;
  return result;
}
