/*
 * XREFs of PopEtAggregateGet @ 0x1407025B8
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140702020 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopEtAggregateFind @ 0x140702888 (PopEtAggregateFind.c)
 *     PopEtAggregateKeyCleanup @ 0x140702A18 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x140702A90 (PopEtAggregateKeyCopy.c)
 *     PopEtBucketsAllocate @ 0x14079B534 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x14079BFE8 (PopEtBucketsFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtAggregateGet(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  __int64 *Pool2; // rax
  __int64 *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rbx
  char *v12; // r8
  _QWORD *v13; // r9
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r8
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp+48h] BYREF

  v29 = 0LL;
  result = PopEtAggregateFind(a1, a2, &v29);
  if ( result )
  {
    *a3 = result;
    return result;
  }
  v7 = (unsigned __int64)(a1 + 12);
  if ( a1[12] >= a1[8] )
  {
    ++a1[154];
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(256LL, 512LL, 1413836624LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x200uLL);
      PopEtAggregateKeyCopy(v9 + 2, a2);
      v9[1] = v29;
      v10 = a1[13];
      v11 = 2 * (v10 >> 5);
      if ( *(_DWORD *)v7 < (unsigned int)v11 )
        goto LABEL_23;
      if ( (unsigned int)v11 < 4 )
        v11 = 4LL;
      v12 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v11, 0LL);
      if ( v12 )
      {
        if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
        {
          v14 = -1;
          do
          {
            ++v14;
            LODWORD(v11) = (unsigned int)v11 >> 1;
          }
          while ( (_DWORD)v11 );
          v11 = (unsigned int)(1 << v14);
        }
        if ( (unsigned int)v11 > 0x4000000 )
          v11 = 0x4000000LL;
        v15 = (unsigned int)v11;
        if ( v12 > &v12[8 * v11] )
          v15 = 0LL;
        if ( v15 )
          memset64(v12, v7 | 1, v15);
        v16 = 0;
        v17 = -1LL << (*(_BYTE *)(v7 + 4) & 0x1F);
        if ( (*(_DWORD *)(v7 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v18 = *(_QWORD *)(v7 + 8);
            while ( 1 )
            {
              v13 = *(_QWORD **)(v18 + 8LL * v16);
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              *(_QWORD *)(v18 + 8LL * v16) = *v13;
              v29 = v17 & v13[1];
              v19 = (37
                   * (BYTE6(v29)
                    + 37
                    * (BYTE5(v29)
                     + 37
                     * (BYTE4(v29)
                      + 37
                      * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
                   + HIBYTE(v29)) & (unsigned int)(v11 - 1);
              *v13 = *(_QWORD *)&v12[8 * v19];
              *(_QWORD *)&v12[8 * v19] = v13;
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v7 + 4) >> 5 );
        }
        v22 = *(_QWORD *)(v7 + 8);
        v10 = (32 * v11) | *(_DWORD *)(v7 + 4) & 0x1F;
        *(_QWORD *)(v7 + 8) = v12;
        *(_DWORD *)(v7 + 4) = v10;
        if ( v22 )
        {
          PopEtBucketsFree(v22, 0LL, v12, v13);
          v10 = *(_DWORD *)(v7 + 4);
        }
        goto LABEL_23;
      }
      v10 = a1[13];
      if ( v10 >= 0x20 )
      {
LABEL_23:
        *a3 = (__int64)v9;
        v27 = v9[1] & (-1LL << (v10 & 0x1F));
        v20 = *(_QWORD *)(v7 + 8);
        v21 = (37
             * (BYTE6(v27)
              + 37
              * (BYTE5(v27)
               + 37
               * (BYTE4(v27)
                + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
             + HIBYTE(v27)) & ((v10 >> 5) - 1);
        result = *(_QWORD *)(v20 + 8 * v21);
        *v9 = result;
        *(_QWORD *)(v20 + 8 * v21) = v9;
LABEL_24:
        ++*(_DWORD *)v7;
        return result;
      }
      PopEtAggregateKeyCleanup(v9 + 2);
      ExFreePoolWithTag(v9, 0x54456F50u);
    }
  }
  ++a1[151];
  v23 = (__int64 *)(a1 + 20);
  result = (unsigned int)a1[159];
  *a3 = (__int64)(a1 + 20);
  if ( (result & 4) == 0 )
  {
    a1[159] = result | 4;
    v24 = a1[13];
    v28 = v23[1] & (-1LL << (v24 & 0x1F));
    v25 = *(_QWORD *)(v7 + 8);
    v26 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & ((v24 >> 5) - 1);
    result = *(_QWORD *)(v25 + 8 * v26);
    *v23 = result;
    *(_QWORD *)(v25 + 8 * v26) = v23;
    goto LABEL_24;
  }
  return result;
}
