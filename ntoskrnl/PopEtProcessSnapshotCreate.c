/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x140701954
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140701D28 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopEtStringSet @ 0x14070254C (PopEtStringSet.c)
 *     PopEtAggregateKeyCleanup @ 0x140702A18 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14070336C (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtBucketsAllocate @ 0x14079B534 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x14079BFE8 (PopEtBucketsFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v4; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rbx
  char *v11; // rax
  _QWORD *v12; // r9
  char v13; // cl
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r10
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+60h] [rbp+8h]

  v2 = *(_DWORD **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 496LL, 1413836624LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x1F0uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, v2 + 8);
    PopEtStringSet(v6 + 3, 0LL);
    v7 = (unsigned __int64)(v2 + 16);
    v8 = v2[17];
    v9 = 2 * (v8 >> 5);
    if ( v2[16] < v9 )
      goto LABEL_21;
    v10 = v9;
    if ( v9 < 4 )
      v10 = 4LL;
    v11 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v10, 0LL);
    v12 = 0LL;
    if ( v11 )
    {
      if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
      {
        v13 = -1;
        do
        {
          ++v13;
          LODWORD(v10) = (unsigned int)v10 >> 1;
        }
        while ( (_DWORD)v10 );
        v10 = (unsigned int)(1 << v13);
      }
      if ( (unsigned int)v10 > 0x4000000 )
        v10 = 0x4000000LL;
      v14 = (unsigned int)v10;
      if ( v11 > &v11[8 * v10] )
        v14 = 0LL;
      if ( v14 )
        memset64(v11, v7 | 1, v14);
      v15 = 0;
      v16 = -1LL << (v2[17] & 0x1F);
      if ( (v2[17] & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v17 = *(_QWORD *)(v7 + 8);
          while ( 1 )
          {
            v12 = *(_QWORD **)(v17 + 8LL * v15);
            if ( ((unsigned __int8)v12 & 1) != 0 )
              break;
            *(_QWORD *)(v17 + 8LL * v15) = *v12;
            v25 = v16 & v12[1];
            v18 = (37
                 * (BYTE6(v25)
                  + 37
                  * (BYTE5(v25)
                   + 37
                   * (BYTE4(v25)
                    + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                 + HIBYTE(v25)) & (unsigned int)(v10 - 1);
            *v12 = *(_QWORD *)&v11[8 * v18];
            *(_QWORD *)&v11[8 * v18] = v12;
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v7 + 4) >> 5 );
      }
      v23 = *(_QWORD *)(v7 + 8);
      v8 = *(_DWORD *)(v7 + 4) & 0x1F | (32 * v10);
      *(_QWORD *)(v7 + 8) = v11;
      *(_DWORD *)(v7 + 4) = v8;
      if ( v23 )
      {
        PopEtBucketsFree(v23, 0LL, v11, v12);
        v8 = *(_DWORD *)(v7 + 4);
      }
      goto LABEL_21;
    }
    v8 = v2[17];
    if ( v8 >= 0x20 )
    {
LABEL_21:
      *a2 = v6;
      v24 = v6[1] & (-1LL << (v8 & 0x1F));
      v19 = *(_QWORD *)(v7 + 8);
      v20 = (37
           * (BYTE6(v24)
            + 37
            * (BYTE5(v24)
             + 37
             * (BYTE4(v24)
              + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
           + HIBYTE(v24)) & ((v8 >> 5) - 1);
      *v6 = *(_QWORD *)(v19 + 8 * v20);
      *(_QWORD *)(v19 + 8 * v20) = v6;
      ++*(_DWORD *)v7;
      return 0;
    }
  }
  ++v2[153];
  v21 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v21;
}
