/*
 * XREFs of PfpPrefetchFiles @ 0x14097AEE4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1402F7FE8 (PfpReadSupportInitialize.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140785204 (PfpReadSupportCleanup.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchFiles(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  signed int v3; // r15d
  unsigned int v4; // r14d
  char v5; // r13
  __int64 *v6; // r12
  unsigned int v7; // eax
  int v8; // ebp
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // ecx
  _DWORD *v15; // rdx
  void *Pool2; // rbp
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r12
  _DWORD *v22; // rsi
  __int64 v23; // r13
  int v24; // r9d
  __int64 v25; // r8
  _QWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r9
  int v31; // r8d
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+B0h] [rbp+18h]

  v2 = *a1;
  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = a1;
  v7 = *(_DWORD *)(*a1 + 8);
  v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v35 = v8;
  v38 = *(_DWORD *)(*a1 + 28) & 7 | (8 * (*(_WORD *)(*a1 + 30) & 7));
  if ( !v7 )
    goto LABEL_49;
  v9 = *(_QWORD *)(v2 + 32);
  v10 = 0LL;
  v11 = v7;
  do
  {
    if ( (*(_QWORD *)(v10 + v6[2] + 24) & 0x400000000LL) != 0 )
    {
      v12 = *(_DWORD *)(v9 + 12);
      v13 = 0LL;
      if ( (v12 & 0xFFFFFFFE) != 0 )
      {
        while ( 1 )
        {
          v14 = v12;
          v15 = (_DWORD *)(*(_QWORD *)(v9 + 16) + 48 * v13);
          if ( (*v15 & 0xA) != 0 || !v15[4] )
            goto LABEL_11;
          if ( !v5 )
            break;
          if ( (*v15 & 1) != 0 )
            goto LABEL_10;
LABEL_11:
          v12 = v14;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v14 >> 1 )
            goto LABEL_12;
        }
        ++*(_DWORD *)(v2 + 84);
        v14 = *(_DWORD *)(v9 + 12);
LABEL_10:
        ++v4;
        goto LABEL_11;
      }
    }
LABEL_12:
    v9 += 40LL;
    v10 += 64LL;
    --v11;
  }
  while ( v11 );
  if ( v4 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v4 << 6, 1095984720LL);
    if ( Pool2 )
    {
      v34 = (__int64)Pool2 + 56 * v4;
      memset(Pool2, 0, v4 << 6);
      v18 = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        goto LABEL_47;
      do
      {
        v19 = 5 * v18;
        v20 = *(_QWORD *)(v2 + 32);
        v33 = v20;
        if ( _bittest64((const signed __int64 *)(((unsigned __int64)(unsigned int)v18 << 6) + v6[2] + 24), 0x22u) )
        {
          v21 = 0LL;
          if ( (*(_DWORD *)(v20 + 40 * v18 + 12) & 0xFFFFFFFE) != 0 )
          {
            do
            {
              v22 = (_DWORD *)(*(_QWORD *)(v20 + 8 * v19 + 16) + 48 * v21);
              if ( (*v22 & 0xA) == 0 && v22[4] && (!v5 || (*v22 & 1) != 0) )
              {
                v23 = (__int64)Pool2 + 56 * v3;
                PfpReadSupportInitialize(v23);
                if ( (int)PfpFileBuildReadSupport(a1, v22, v18, a2, v23) < 0 )
                {
                  PfpReadSupportCleanup(a1[5], v23);
                  PfpReadSupportInitialize(v23);
                }
                else
                {
                  ++v3;
                }
                v5 = a2;
                v20 = v33;
                v19 = 5 * v18;
              }
              v21 = (unsigned int)(v21 + 1);
            }
            while ( (unsigned int)v21 < *(_DWORD *)(v20 + 8 * v19 + 12) >> 1 );
          }
          v6 = a1;
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < *(_DWORD *)(v2 + 8) );
      if ( v3 )
      {
        if ( (unsigned int)PfpCheckPrefetchAbort(v6) )
        {
          v17 = -1073741248;
        }
        else
        {
          v24 = 0;
          if ( v3 > 0 )
          {
            v25 = 0LL;
            v26 = Pool2;
            do
            {
              *(_QWORD *)*v26 = v26[2];
              *(_QWORD *)(v34 + 8 * v25) = *v26;
              v27 = *(_DWORD *)(*v26 + 8LL);
              v24 += v27;
              if ( v27 )
                *(_QWORD *)(*v26 + 16LL) |= v38;
              ++v25;
              v26 += 7;
            }
            while ( v25 < v3 );
          }
          if ( v5 )
            *(_DWORD *)(v2 + 100) += v24;
          else
            *(_DWORD *)(v2 + 96) += v24;
          v17 = MmPrefetchPagesEx(v3, v34, 0);
        }
        if ( v3 > 0 )
        {
          v28 = (__int64)Pool2;
          v29 = (unsigned int)v3;
          do
          {
            PfpReadSupportCleanup(v6[5], v28);
            v28 += 56LL;
            --v29;
          }
          while ( v29 );
        }
      }
      else
      {
LABEL_47:
        v17 = -1073741275;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      v17 = -1073741670;
    }
    v8 = v35;
  }
  else
  {
LABEL_49:
    v17 = -1073741275;
  }
  v30 = *v6;
  v31 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v8;
  if ( v5 )
    *(_DWORD *)(v30 + 116) += v31;
  else
    *(_DWORD *)(v30 + 112) += v31;
  return v17;
}
