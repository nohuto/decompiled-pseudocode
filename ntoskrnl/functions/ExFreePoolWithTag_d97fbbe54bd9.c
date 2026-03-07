void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  ULONG_PTR HeapFromVA; // rax
  __int64 v4; // r13
  char *v5; // rbx
  PVOID v6; // r12
  int v7; // esi
  ULONG v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r10d
  char v12; // si
  __int64 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // r11d
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  ULONG_PTR v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  PVOID Object[2]; // [rsp+40h] [rbp-48h] BYREF
  ULONG v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR Amount; // [rsp+A8h] [rbp+20h] BYREF

  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  Amount = 0LL;
  v29 = 0;
  LODWORD(v30) = 0;
  Object[0] = 0LL;
  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)P);
  v4 = HeapFromVA;
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
  {
    _InterlockedDecrement(&ExpSpecialAllocations);
    ExpFreeHeapSpecialPool(v26, (unsigned __int64)P);
  }
  else
  {
    if ( ((unsigned __int16)P & 0xFFF) != 0 )
    {
      v5 = (char *)P - 16;
      if ( (*((char *)P - 13) & 8) != 0 )
        ExReturnPoolQuota((ULONG_PTR)P);
      if ( (v5[3] & 4) != 0 )
      {
        v5 -= 16 * (unsigned __int8)*(_WORD *)v5;
        v5[3] |= 4u;
      }
      v6 = v5 + 16;
      v7 = (unsigned __int8)v5[3];
      v8 = *((_DWORD *)v5 + 1);
      v9 = 16LL * (unsigned __int8)*((_WORD *)v5 + 1);
      Amount = v9;
      v29 = v8;
      LODWORD(v30) = v7;
    }
    else
    {
      v23 = MiDeterminePoolType((unsigned __int64)P);
      if ( v23 == 32 )
        v23 = 0;
      ExpRemoveTagForBigPages((ULONG_PTR)P, v23, 1, &v29, (int *)&v30, &Amount, (ULONG_PTR *)Object);
      v9 = Amount;
      v8 = v29;
      v7 = v30;
      if ( (unsigned __int64)Object[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        ExpReturnPoolQuota((struct _KPROCESS *)Object[0], Amount, v30, v29);
      v5 = (char *)P;
      v6 = P;
    }
    ExpFreePoolChecks((ULONG_PTR)v5, v8, v9, v7, (__int64)P);
    if ( v29 == PoolHitTag )
      __debugbreak();
    v10 = DWORD1(PerfGlobalGroupMask[0]);
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
      EtwTracePool(0xE22u, v7, v8, (__int64)v6, v9);
    LODWORD(v10) = KeGetPcr()->Prcb.Number;
    v11 = PoolTrackTableMask;
    v12 = v7 & 0xDF;
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
          goto LABEL_17;
        }
        if ( v16 )
          break;
        v24 = *(_DWORD *)(PoolTrackTable + 80LL * v14);
        if ( !v24 )
          break;
        *(_DWORD *)v17 = v24;
        v25 = *(_QWORD *)(PoolTrackTable + 80LL * v14 + 72);
        if ( v25 )
          *(_QWORD *)(v17 + 72) = v25;
      }
      v14 = v11 & (v14 + 1);
    }
    while ( v14 != v15 );
    ExpRemovePoolTrackerExpansion(v8, v9, v12);
LABEL_17:
    v19 = Amount;
    if ( (v30 & 0x40) != 0 )
      VerifierFreeTrackedPool((ULONG_PTR)P, Amount);
    v20 = *(_QWORD *)(v4 + 40);
    if ( v19 - 513 > 0xD7F
      || !v20
      || ((v21 = v20
               + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                 + ((unsigned __int64)(unsigned int)(v19 + 15) >> 4))
                 - 33
                 + 1LL) << 6),
           ++*(_DWORD *)(v21 + 28),
           *(_WORD *)v21 >= *(_WORD *)(v21 + 16))
        ? (++*(_DWORD *)(v21 + 32), v22 = 0)
        : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v21, (PSLIST_ENTRY)v5), v22 = 1),
          !v22) )
    {
      RtlpHpFreeHeap(v4, (unsigned __int64)v5, 0, v18, BugCheckParameter4);
    }
  }
}
