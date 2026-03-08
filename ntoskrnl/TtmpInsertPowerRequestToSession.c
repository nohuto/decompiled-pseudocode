/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x1409A2488
 * Callers:
 *     TtmNotifySessionPowerRequestCreated @ 0x1409A1540 (TtmNotifySessionPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1409A16F0 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmpPowerRequestHashAllocator @ 0x1409A27AC (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x1409A27D0 (TtmpPowerRequestHashDeallocator.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(unsigned int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  char v8; // di
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 Pool2; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbx
  char *v18; // r8
  char v19; // cl
  unsigned __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // r10
  __int64 v23; // r12
  _QWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-10h] BYREF

  v5 = a2;
  v30 = 0LL;
  v8 = 0;
  v9 = TtmpAcquireSessionById(&v30, a1);
  v10 = v30;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 3414LL;
LABEL_3:
    TtmiLogError("TtmpInsertPowerRequestToSession", v12, v11, -1LL);
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(64LL, 64LL, 1381004372LL);
  v14 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v12 = 3423LL;
    v11 = 3221225626LL;
    goto LABEL_3;
  }
  *(_QWORD *)(Pool2 + 8) = v5;
  *(_DWORD *)(Pool2 + 16) = v5;
  *(_DWORD *)(Pool2 + 20) = a3;
  *(_QWORD *)(Pool2 + 24) = a4;
  v15 = v10 + 272;
  *(_QWORD *)(Pool2 + 32) = a5;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  *(_DWORD *)(Pool2 + 40) = 0;
  v16 = *(_DWORD *)(v10 + 276);
  v17 = 2 * (v16 >> 5);
  if ( *(_DWORD *)(v10 + 272) < (unsigned int)v17 )
    goto LABEL_27;
  if ( (unsigned int)v17 < 4 )
    v17 = 4LL;
  v18 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v17, 0LL);
  if ( v18 )
  {
    if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
    {
      v19 = -1;
      do
      {
        ++v19;
        LODWORD(v17) = (unsigned int)v17 >> 1;
      }
      while ( (_DWORD)v17 );
      v17 = (unsigned int)(1 << v19);
    }
    if ( (unsigned int)v17 > 0x4000000 )
      v17 = 0x4000000LL;
    v20 = (unsigned int)v17;
    if ( v18 > &v18[8 * v17] )
      v20 = 0LL;
    if ( v20 )
      memset64(v18, v15 | 1, v20);
    v21 = 0;
    v22 = -1LL << (*(_BYTE *)(v10 + 276) & 0x1F);
    if ( (*(_DWORD *)(v10 + 276) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v23 = *(_QWORD *)(v10 + 280);
        while ( 1 )
        {
          v24 = *(_QWORD **)(v23 + 8LL * v21);
          if ( ((unsigned __int8)v24 & 1) != 0 )
            break;
          *(_QWORD *)(v23 + 8LL * v21) = *v24;
          v30 = v22 & v24[1];
          v25 = (37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37
                 * (BYTE4(v30)
                  + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
               + HIBYTE(v30)) & (unsigned int)(v17 - 1);
          *v24 = *(_QWORD *)&v18[8 * v25];
          *(_QWORD *)&v18[8 * v25] = v24;
        }
        ++v21;
      }
      while ( v21 < *(_DWORD *)(v10 + 276) >> 5 );
    }
    v26 = *(_QWORD *)(v10 + 280);
    v16 = (32 * v17) | *(_DWORD *)(v10 + 276) & 0x1F;
    *(_QWORD *)(v10 + 280) = v18;
    *(_DWORD *)(v10 + 276) = v16;
    if ( v26 )
    {
      TtmpPowerRequestHashDeallocator(v26, 0LL);
      v16 = *(_DWORD *)(v10 + 276);
    }
    goto LABEL_27;
  }
  v16 = *(_DWORD *)(v10 + 276);
  if ( v16 >= 0x20 )
  {
LABEL_27:
    v30 = v14[1] & (-1LL << (v16 & 0x1F));
    v8 = 1;
    v27 = *(_QWORD *)(v10 + 280);
    v28 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & ((v16 >> 5) - 1);
    *v14 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v14;
    ++*(_DWORD *)v15;
    goto LABEL_28;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession", 3446LL, 3221225626LL, -1LL);
  ExFreePoolWithTag(v14, 0x52507454u);
LABEL_28:
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v8;
}
