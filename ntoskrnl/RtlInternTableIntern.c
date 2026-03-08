/*
 * XREFs of RtlInternTableIntern @ 0x1407015D8
 * Callers:
 *     PopEtAppIdIntern @ 0x14070146C (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x1407941D4 (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x1407033D0 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x14070351C (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x140703750 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsAllocate @ 0x14079C154 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x14079C1B4 (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdi
  _QWORD *v11; // r15
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rsi
  char *v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r10
  __int64 v20; // r12
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  void (__fastcall *v25)(__int64, _QWORD *, __int64); // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-10h]
  __int64 v31; // [rsp+60h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v31 = 0LL;
  v4 = RtlpInternEntryHash(a2, &v31);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v31;
  v7 = RtlpInternEntryFind(a1, a2, v4, v31);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_28;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v11 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v11 )
  {
    v7 = 0LL;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v10 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    v13 = 2 * (v12 >> 5);
    if ( *(_DWORD *)a1 >= v13 )
    {
      v14 = v13;
      if ( v13 < 4 )
        v14 = 4LL;
      v15 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v14, a1);
      if ( v15 )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          v16 = -1;
          do
          {
            ++v16;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v16);
        }
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v17 = (unsigned int)v14;
        if ( v15 > &v15[8 * v14] )
          v17 = 0LL;
        if ( v17 )
          memset64(v15, a1 | 1, v17);
        v18 = 0;
        v19 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v20 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v21 = *(_QWORD **)(v20 + 8LL * v18);
              if ( ((unsigned __int8)v21 & 1) != 0 )
                break;
              *(_QWORD *)(v20 + 8LL * v18) = *v21;
              v31 = v19 & v21[1];
              v22 = (37
                   * (BYTE6(v31)
                    + 37
                    * (BYTE5(v31)
                     + 37
                     * (BYTE4(v31)
                      + 37
                      * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                   + HIBYTE(v31)) & (unsigned int)(v14 - 1);
              *v21 = *(_QWORD *)&v15[8 * v22];
              *(_QWORD *)&v15[8 * v22] = v21;
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        v27 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v14);
        *(_QWORD *)(a1 + 8) = v15;
        *(_DWORD *)(a1 + 4) = v12;
        if ( v27 )
        {
          RtlpInternHashBucketsFree(v27, a1);
          v12 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 4);
        if ( v12 < 0x20 )
        {
          v7 = 0LL;
          goto LABEL_27;
        }
      }
    }
    v30 = v11[1] & (-1LL << (v12 & 0x1F));
    v23 = *(_QWORD *)(a1 + 8);
    v24 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & ((v12 >> 5) - 1);
    *v11 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v11;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v25 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v25 )
      v25(a1, v11, a2);
    v7 = (__int64)v11;
    v11 = 0LL;
LABEL_27:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
    if ( !v11 )
      goto LABEL_28;
    goto LABEL_36;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
LABEL_36:
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v11);
LABEL_28:
  if ( (*(_DWORD *)(a2 + 24) & 3) == 1 )
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
    }
    *(_DWORD *)(a2 + 24) &= ~1u;
  }
  return v7;
}
