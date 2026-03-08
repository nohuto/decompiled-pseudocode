/*
 * XREFs of ExFreeHeapPool @ 0x1402B61C0
 * Callers:
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1403B4DF4 (ExAllocateContiguousHeapPool.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020DEF0 (MiDeterminePoolType.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024DB00 (RtlpHpSegPageRangeShrink.c)
 *     ExpReturnPoolQuota @ 0x140294F44 (ExpReturnPoolQuota.c)
 *     RtlpHpVsContextFree @ 0x1402B6740 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B689C (RtlCSparseBitmapBitmaskRead.c)
 *     ExpRemoveTagForBigPages @ 0x1402B6920 (ExpRemoveTagForBigPages.c)
 *     RtlpHpLargeFree @ 0x1402B6B40 (RtlpHpLargeFree.c)
 *     RtlpHpQueryVA @ 0x140309578 (RtlpHpQueryVA.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140309BA0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x14030BFE0 (RtlpHpLfhBucketUpdateStats.c)
 *     ExpPoolTrackerReturnLimit @ 0x140313B50 (ExpPoolTrackerReturnLimit.c)
 *     ExReturnPoolQuota @ 0x1403144E0 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140462C3A (ExpRemovePoolTrackerExpansion.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046327A (ExpHpIsSpecialPoolHeap.c)
 *     KeCheckForTimer @ 0x14056E51C (KeCheckForTimer.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405B4100 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405B4398 (RtlpHpSizeHeap.c)
 *     VerifierFreeTrackedPool @ 0x1405CD740 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x140608878 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140608FB8 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14060A838 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 *     VfPtFreePoolNotification @ 0x140ADB73C (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  __int64 v3; // rbx
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  int v6; // r13d
  int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r9d
  unsigned int v12; // esi
  __int64 v13; // r11
  unsigned int v14; // edx
  unsigned int v15; // r10d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rbx
  ULONG_PTR v25; // r8
  char v26; // cl
  __int64 v27; // rdx
  char v28; // al
  char v29; // cl
  char v30; // al
  __int64 v31; // rdx
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // cl
  int v43; // ecx
  ULONG_PTR *v44; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+50h] [rbp-30h]
  unsigned int v47; // [rsp+B0h] [rbp+30h]
  __int64 v48; // [rsp+B8h] [rbp+38h] BYREF
  unsigned int v49; // [rsp+C0h] [rbp+40h] BYREF
  int v50; // [rsp+C4h] [rbp+44h]
  ULONG_PTR Amount; // [rsp+C8h] [rbp+48h] BYREF

  Amount = 0LL;
  v47 = 0;
  LODWORD(v48) = 0;
  Object = 0LL;
  v46 = 0LL;
  *(_WORD *)((char *)&v46 + 1) = 1;
  LOBYTE(v46) = 3;
  if ( (_WORD)BugCheckParameter3 )
  {
    v2 = 0;
LABEL_3:
    v49 = 0x100000;
    v50 = 0x1000000;
    v3 = *(&v49 + v2);
    v4 = (RtlpHpHeapGlobals ^ *(_QWORD *)((BugCheckParameter3 & -v3) + 0x10) ^ BugCheckParameter3 & -v3 ^ 0xA2E64EADA2E64EADuLL)
       - 192LL * v2
       - 320;
    goto LABEL_4;
  }
  v39 = RtlCSparseBitmapBitmaskRead(&unk_140C70D90, 2 * ((BugCheckParameter3 - qword_140C70D88) >> 20));
  if ( v39 )
  {
    v2 = v39 - 1;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  v44 = 0LL;
  v49 = 0;
  RtlpHpQueryVA(BugCheckParameter3, v40, &v44, &v49);
  v4 = *v44;
LABEL_4:
  if ( !v4 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v4) )
  {
    _InterlockedDecrement(&ExpSpecialAllocations);
    return ExpFreeHeapSpecialPool(v41, BugCheckParameter3);
  }
  if ( (BugCheckParameter3 & 0xFFF) != 0 )
  {
    v5 = BugCheckParameter3 - 16;
    if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 8) != 0 )
      ExReturnPoolQuota(BugCheckParameter3);
    if ( (*(_BYTE *)(v5 + 3) & 4) != 0 )
    {
      v5 -= 16LL * (unsigned __int8)*(_WORD *)v5;
      *(_BYTE *)(v5 + 3) |= 4u;
    }
    v6 = v5 + 16;
    v7 = *(unsigned __int8 *)(v5 + 3);
    v8 = *(_DWORD *)(v5 + 4);
    v9 = 16LL * (unsigned __int8)*(_WORD *)(v5 + 2);
    Amount = v9;
    v47 = v8;
    LODWORD(v48) = v7;
  }
  else
  {
    MiDeterminePoolType(BugCheckParameter3);
    ExpRemoveTagForBigPages(BugCheckParameter3, (__int64)&v48, (__int64)&Amount, (__int64)&Object);
    v9 = Amount;
    v8 = 0;
    v7 = v48;
    if ( (char *)Object - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      ExpReturnPoolQuota((struct _KPROCESS *)Object, Amount, v48, 0);
    v5 = BugCheckParameter3;
    v6 = BugCheckParameter3;
  }
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v7 )
      ExpCheckForLookaside(v5, v9);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v5);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v5, v9);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v5);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfPtFreePoolNotification(v5, v8, v9, BugCheckParameter3);
  if ( v47 == PoolHitTag )
    __debugbreak();
  v10 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v10 = EtwTracePool(3618, v7, v8, v6, v9);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v11 = PoolTrackTableMask;
  v12 = v7 & 0xFFFFFFDF;
  v13 = (__int64)*(&ExPoolTagTables + v10);
  v14 = PoolTrackTableMask & ((40543 * v8) ^ ((40543 * (unsigned __int64)v8) >> 32));
  v15 = v14;
  do
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v13 + 80LL * v14);
      v17 = v13 + 80LL * v14;
      if ( v16 == v8 )
      {
        ExpPoolTrackerReturnLimit((v12 & 1) == 0, v9, v17);
        goto LABEL_22;
      }
      if ( v16 )
        break;
      v37 = *(_DWORD *)(PoolTrackTable + 80LL * v14);
      if ( !v37 )
        break;
      *(_DWORD *)v17 = v37;
      v38 = *(_QWORD *)(PoolTrackTable + 80LL * v14 + 72);
      if ( v38 )
        *(_QWORD *)(v17 + 72) = v38;
    }
    v14 = v11 & (v14 + 1);
  }
  while ( v14 != v15 );
  ExpRemovePoolTrackerExpansion(v8, v9, v12);
LABEL_22:
  v19 = Amount;
  if ( (v48 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter3, Amount);
  v20 = *(_QWORD *)(v4 + 40);
  if ( v19 - 513 > 0xD7F
    || !v20
    || ((v34 = v20
             + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                               + ((unsigned __int64)(unsigned int)(v19 + 15) >> 4))
               - 33
               + 1LL) << 6),
         ++*(_DWORD *)(v34 + 28),
         *(_WORD *)v34 < *(_WORD *)(v34 + 16))
      ? (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v34, (PSLIST_ENTRY)v5), result = 1LL)
      : (++*(_DWORD *)(v34 + 32), result = 0LL),
        !(_DWORD)result) )
  {
    v21 = *(_DWORD *)(v4 + 220);
    v22 = *(_DWORD *)(v4 + 20) & 0x11000001;
    if ( v21 && v21 == KeGetCurrentThread()[1].CurrentRunTime )
      v22 = *(_DWORD *)(v4 + 20) & 0x11000000 | 1;
    if ( (v22 & 0x1000000) != 0
      || !*(_DWORD *)(v4 + 24)
      || (result = RtlpHpExtrasGet(v4, v5, v22, 0LL),
          v18 = result,
          (unsigned __int64)(result - 1) > 0xFFFFFFFFFFFFFFFDuLL)
      || (v42 = *(_BYTE *)(result + 2), (v42 & 0xF) == 0)
      || (v43 = v42 & 0xF) != 0
      && (_WORD)v43 == 1
      && (result = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CLFS_LSN_NULL_EXT)(
                     v4,
                     v5,
                     3LL,
                     result + 16),
          (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v4 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v4, v5, v22, v18) == -1 )
      {
        LODWORD(v33) = v4;
        return RtlpLogHeapFailure(9, v33, v5, 0, 0LL, 0LL);
      }
      if ( (_WORD)v5 )
      {
        v23 = 0;
      }
      else
      {
        v36 = RtlCSparseBitmapBitmaskRead(&unk_140C70D90, 2 * ((v5 - qword_140C70D88) >> 20));
        if ( !v36 )
          return RtlpHpLargeFree(v4, v5, v22);
        v23 = v36 - 1;
        if ( v23 == 2 )
          return RtlpHpLargeFree(v4, v5, v22);
      }
      v49 = 0;
      v24 = 192LL * v23 + 320 + v4;
      v25 = v5 & *(_QWORD *)v24;
      if ( (RtlpHpHeapGlobals ^ v24 ^ *(_QWORD *)(v25 + 0x10) ^ v25) == 0xA2E64EADA2E64EADuLL )
      {
        v26 = *(_BYTE *)(v24 + 8);
        v27 = v25 + 32 * ((unsigned __int64)(unsigned int)(v5 - v25) >> v26);
        if ( v27 )
        {
          v28 = *(_BYTE *)(v27 + 24);
          if ( (v28 & 1) != 0 )
          {
            if ( (v28 & 2) != 0 )
            {
              if ( (v28 & 0xCu) >= 8 || (((1 << v26) - 1) & v5) == 0 )
              {
LABEL_40:
                if ( v5 <= ((unsigned __int64)v27 & *(_QWORD *)v24)
                         + ((v27 - (v27 & *(_QWORD *)v24)) >> 5 << *(_BYTE *)(v24 + 8)) )
                  return RtlpHpSegPageRangeShrink(v24, v27, v25, v22);
                v30 = *(_BYTE *)(v27 + 24) & 0xC;
                v31 = (v27 & *(_QWORD *)v24) + ((v27 - (v27 & *(_QWORD *)v24)) >> 5 << *(_BYTE *)(v24 + 8));
                if ( v30 == 8 )
                  return RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v24 + 24), v31, v5, v22);
                result = RtlpHpVsContextFree(*(_QWORD *)(v24 + 32), v31, v5, v22, (__int64)&v49);
                if ( (_DWORD)result )
                {
                  v35 = *(_QWORD *)(v24 + 24);
                  result = (unsigned int)*(unsigned __int16 *)(v35 + 60) - 16;
                  if ( v49 <= (unsigned int)result )
                    return RtlpHpLfhBucketUpdateStats(v35, v49, 0LL);
                }
                return result;
              }
            }
            else
            {
              v27 -= 32LL * *(unsigned __int8 *)(v27 + 31);
              v29 = *(_BYTE *)(v27 + 24);
              if ( (v29 & 3) == 3 && (v29 & 0xCu) >= 8 && v27 )
                goto LABEL_40;
            }
          }
        }
      }
      v33 = *(_QWORD *)(v24 + 56);
      return RtlpLogHeapFailure(9, v33, v5, 0, 0LL, 0LL);
    }
  }
  return result;
}
