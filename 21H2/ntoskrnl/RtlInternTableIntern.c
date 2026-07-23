/*
 * XREFs of RtlInternTableIntern @ 0x1405F6FB8
 * Callers:
 *     PopEtStringIntern @ 0x1405F6BB0 (PopEtStringIntern.c)
 *     PopEtAppIdIntern @ 0x1405F6E94 (PopEtAppIdIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x1405F7308 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1405F7458 (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x1405F7790 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsAllocate @ 0x1407D3E54 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x1407D44D4 (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  int v10; // ecx
  __int64 v12; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rsi
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD *, __int64); // rax
  char v20; // cl
  unsigned __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r10
  __int64 v24; // r12
  _QWORD *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v30 = 0LL;
  v4 = RtlpInternEntryHash(a2, &v30);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v30;
  v7 = RtlpInternEntryFind(a1, a2, v4, v30);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v13 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v13 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v12 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    v14 = *(_DWORD *)(a1 + 4);
    v15 = 2 * (v14 >> 5);
    if ( *(_DWORD *)a1 >= (unsigned int)v15 )
    {
      if ( (unsigned int)v15 < 4 )
        v15 = 4LL;
      v16 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v15, a1);
      if ( v16 )
      {
        if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
        {
          v20 = -1;
          do
          {
            ++v20;
            LODWORD(v15) = (unsigned int)v15 >> 1;
          }
          while ( (_DWORD)v15 );
          v15 = (unsigned int)(1 << v20);
        }
        if ( (unsigned int)v15 > 0x4000000 )
          v15 = 0x4000000LL;
        v21 = (unsigned int)v15;
        if ( v16 > &v16[8 * v15] )
          v21 = 0LL;
        if ( v21 )
          memset64(v16, a1 | 1, v21);
        v22 = 0;
        v23 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v24 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v25 = *(_QWORD **)(v24 + 8LL * v22);
              if ( ((unsigned __int8)v25 & 1) != 0 )
                break;
              *(_QWORD *)(v24 + 8LL * v22) = *v25;
              v30 = v23 & v25[1];
              v26 = (37
                   * (BYTE6(v30)
                    + 37
                    * (BYTE5(v30)
                     + 37
                     * (BYTE4(v30)
                      + 37
                      * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                   + HIBYTE(v30)) & (unsigned int)(v15 - 1);
              *v25 = *(_QWORD *)&v16[8 * v26];
              *(_QWORD *)&v16[8 * v26] = v25;
            }
            ++v22;
          }
          while ( v22 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        v27 = *(_QWORD *)(a1 + 8);
        v14 = (32 * v15) | *(_DWORD *)(a1 + 4) & 0x1F;
        *(_QWORD *)(a1 + 8) = v16;
        *(_DWORD *)(a1 + 4) = v14;
        if ( v27 )
        {
          RtlpInternHashBucketsFree(v27, a1);
          v14 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 4);
        if ( v14 < 0x20 )
        {
          v7 = 0LL;
          goto LABEL_15;
        }
      }
    }
    v30 = v13[1] & (-1LL << (v14 & 0x1F));
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & ((v14 >> 5) - 1);
    *v13 = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = v13;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v19 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v19 )
      v19(a1, v13, a2);
    v7 = (__int64)v13;
    v13 = 0LL;
  }
LABEL_15:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
  if ( v13 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v13);
LABEL_3:
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 3) == 1 )
  {
    v28 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v29 = 0LL;
      do
      {
        v29 += 32LL;
        ++v28;
        *(_QWORD *)(v29 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v28 < *(_QWORD *)(a2 + 16) );
      v10 = *(_DWORD *)(a2 + 24);
    }
    *(_DWORD *)(a2 + 24) = v10 & 0xFFFFFFFE;
  }
  return v7;
}
