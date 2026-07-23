/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x1408FFCA8
 * Callers:
 *     PopNotifySessionUserPowerRequestCreated @ 0x140670F5C (PopNotifySessionUserPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408FEEB0 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmpPowerRequestHashAllocator @ 0x1408FFFD8 (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x1408FFFFC (TtmpPowerRequestHashDeallocator.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  char v9; // r12
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // rsi
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rbx
  char *v20; // rax
  _QWORD *v21; // r9
  char v22; // cl
  unsigned __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // [rsp+20h] [rbp-10h] BYREF

  v6 = a2;
  v32 = 0LL;
  v9 = 0;
  v10 = TtmpAcquireSessionById(&v32, a1);
  v11 = v32;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 3418LL;
LABEL_3:
    TtmiLogError("TtmpInsertPowerRequestToSession", v13, v12, -1LL);
    goto LABEL_28;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x52507454u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = 3427LL;
    v12 = 3221225626LL;
    goto LABEL_3;
  }
  *((_DWORD *)PoolWithTag + 5) = a3;
  PoolWithTag[1] = v6;
  v16 = v11 + 272;
  *((_DWORD *)PoolWithTag + 4) = v6;
  PoolWithTag[3] = a4;
  PoolWithTag[4] = a5;
  *((_DWORD *)PoolWithTag + 10) = a6;
  PoolWithTag[7] = PoolWithTag + 6;
  PoolWithTag[6] = PoolWithTag + 6;
  v17 = *(_DWORD *)(v11 + 276);
  v18 = 2 * (v17 >> 5);
  if ( *(_DWORD *)(v11 + 272) < v18 )
    goto LABEL_27;
  v19 = v18;
  if ( v18 < 4 )
    v19 = 4LL;
  v20 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v19);
  v21 = 0LL;
  if ( v20 )
  {
    if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
    {
      v22 = -1;
      do
      {
        ++v22;
        LODWORD(v19) = (unsigned int)v19 >> 1;
      }
      while ( (_DWORD)v19 );
      v19 = (unsigned int)(1 << v22);
    }
    if ( (unsigned int)v19 > 0x4000000 )
      v19 = 0x4000000LL;
    v23 = (unsigned int)v19;
    if ( v20 > &v20[8 * v19] )
      v23 = 0LL;
    if ( v23 )
      memset64(v20, v16 | 1, v23);
    v24 = 0;
    v25 = -1LL << (*(_BYTE *)(v11 + 276) & 0x1F);
    if ( (*(_DWORD *)(v11 + 276) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v26 = *(_QWORD *)(v11 + 280);
        while ( 1 )
        {
          v21 = *(_QWORD **)(v26 + 8LL * v24);
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          *(_QWORD *)(v26 + 8LL * v24) = *v21;
          v32 = v25 & v21[1];
          v27 = (37
               * (BYTE6(v32)
                + 37
                * (BYTE5(v32)
                 + 37
                 * (BYTE4(v32)
                  + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
               + HIBYTE(v32)) & (unsigned int)(v19 - 1);
          *v21 = *(_QWORD *)&v20[8 * v27];
          *(_QWORD *)&v20[8 * v27] = v21;
        }
        ++v24;
      }
      while ( v24 < *(_DWORD *)(v11 + 276) >> 5 );
    }
    v28 = *(_QWORD *)(v11 + 280);
    v17 = *(_DWORD *)(v11 + 276) & 0x1F | (32 * v19);
    *(_QWORD *)(v11 + 280) = v20;
    *(_DWORD *)(v11 + 276) = v17;
    if ( v28 )
    {
      TtmpPowerRequestHashDeallocator(v28, 0LL, v20, v21);
      v17 = *(_DWORD *)(v11 + 276);
    }
    goto LABEL_27;
  }
  v17 = *(_DWORD *)(v11 + 276);
  if ( v17 >= 0x20 )
  {
LABEL_27:
    v9 = 1;
    v32 = v15[1] & (-1LL << (v17 & 0x1F));
    v29 = *(_QWORD *)(v11 + 280);
    v30 = (37
         * (BYTE6(v32)
          + 37
          * (BYTE5(v32)
           + 37
           * (BYTE4(v32)
            + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
         + HIBYTE(v32)) & ((v17 >> 5) - 1);
    *v15 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v15;
    ++*(_DWORD *)v16;
    goto LABEL_28;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession", 3450LL, 3221225626LL, -1LL);
  ExFreePoolWithTag(v15, 0x52507454u);
LABEL_28:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
