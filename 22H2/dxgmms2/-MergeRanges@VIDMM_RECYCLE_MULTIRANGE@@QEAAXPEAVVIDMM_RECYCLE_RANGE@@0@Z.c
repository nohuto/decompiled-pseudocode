/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0074C90
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0074B40 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E8C (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0015614 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023F2C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0027E78 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C0075450 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007596C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_BLOCK **this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  int v4; // r13d
  struct VIDMM_RECYCLE_RANGE *v5; // rbx
  VIDMM_RECYCLE_MULTIRANGE *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // di
  char v12; // bp
  __int64 v13; // r8
  struct VIDMM_RECYCLE_BLOCK *v14; // rdx
  struct VIDMM_RECYCLE_RANGE *v15; // r14
  struct VIDMM_RECYCLE_BLOCK *v16; // rax
  struct VIDMM_RECYCLE_BLOCK **v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  VIDMM_RECYCLE_BLOCK *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rdi
  VIDMM_RECYCLE_BLOCK *v32; // rbp
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rax
  PSLIST_ENTRY v37; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  VIDMM_RECYCLE_BLOCK *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  struct _SLIST_ENTRY *v47; // r8
  __int64 v48; // rax
  struct _SLIST_ENTRY *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct _SLIST_ENTRY *v52; // rdx
  struct _SLIST_ENTRY *v53; // rax
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  bool v58; // [rsp+60h] [rbp-A8h]
  char v59; // [rsp+61h] [rbp-A7h]
  char v60; // [rsp+62h] [rbp-A6h]
  char v61; // [rsp+63h] [rbp-A5h]
  char v62; // [rsp+64h] [rbp-A4h]
  char v63; // [rsp+65h] [rbp-A3h]
  int v64; // [rsp+68h] [rbp-A0h] BYREF
  int v65; // [rsp+6Ch] [rbp-9Ch]
  struct _SLIST_ENTRY *v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+78h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-88h]
  __int64 v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+90h] [rbp-78h]
  struct _SLIST_ENTRY *v71; // [rsp+98h] [rbp-70h]
  struct _SLIST_ENTRY *v72; // [rsp+A0h] [rbp-68h]
  __int64 v73; // [rsp+A8h] [rbp-60h]
  bool v75; // [rsp+118h] [rbp+10h]
  bool v76; // [rsp+120h] [rbp+18h]
  bool v77; // [rsp+128h] [rbp+20h]

  v4 = *((_DWORD *)a2 + 16);
  v5 = a2;
  v66 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 4);
  v6 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v67 = *((_QWORD *)a3 + 5);
  v65 = *((_DWORD *)a2 + 23);
  v7 = *((_QWORD *)a2 + 17);
  v68 = v7;
  v75 = 0;
  v60 = 0;
  if ( v7 )
  {
    v75 = *(_QWORD *)(v7 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v7 + 72) == a3 )
    {
      v60 = 1;
      v75 = *(_QWORD *)(v7 + 64) == (_QWORD)a2;
    }
  }
  v8 = *((_QWORD *)a2 + 18);
  v69 = v8;
  v76 = 0;
  v61 = 0;
  if ( v8 )
  {
    v76 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v61 = 1;
      v76 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 19);
  v70 = v9;
  v77 = 0;
  v62 = 0;
  if ( v9 )
  {
    v77 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v62 = 1;
      v77 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 20);
  v71 = (struct _SLIST_ENTRY *)v10;
  v58 = 0;
  v63 = 0;
  if ( v10 )
  {
    v58 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v63 = 1;
      v58 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v11 = 0;
  v72 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 16);
  v12 = 0;
  v73 = *((_QWORD *)a3 + 15);
  v59 = 0;
  ++*(_QWORD *)this[10];
  v13 = 0LL;
  v64 = *((_DWORD *)a2 + 20);
  do
  {
    v14 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 15);
    v15 = 0LL;
    if ( v14 != (struct VIDMM_RECYCLE_BLOCK *)(*((_QWORD *)v5 + 9) + 72LL) )
      v15 = (struct VIDMM_RECYCLE_BLOCK *)((char *)v14 - 120);
    if ( v4 == 5 || (unsigned int)(v4 - 3) <= 1 )
    {
      v14 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 13);
      v16 = (struct VIDMM_RECYCLE_RANGE *)((char *)v5 + 104);
      if ( *((struct VIDMM_RECYCLE_RANGE **)v14 + 1) != (struct VIDMM_RECYCLE_RANGE *)((char *)v5 + 104)
        || (v17 = (struct VIDMM_RECYCLE_BLOCK **)*((_QWORD *)v5 + 14), *v17 != v16) )
      {
        __fastfail(3u);
      }
      *v17 = v14;
      *((_QWORD *)v14 + 1) = v17;
      *(_QWORD *)v16 = 0LL;
      v18 = *((_DWORD *)v5 + 16);
      *((_QWORD *)v5 + 14) = 0LL;
      *((_QWORD *)v5 + 12) = 0LL;
      if ( v18 == 5 )
      {
        v19 = *((_QWORD *)v5 + 4) - *((_QWORD *)v5 + 5);
        if ( (__int64)(v19 + _InterlockedExchangeAdd64(
                               &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                               v19)) < 0
          && g_IsInternalRelease )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v14);
          v20[5] = 0LL;
          v20[6] = 0LL;
          v20[7] = 0LL;
          v20[3] = 270LL;
          v20[4] = 9LL;
          WdLogEvent5_WdCriticalError(v20);
        }
      }
      else if ( (unsigned int)(v18 - 3) <= 1 )
      {
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v5 + 4) - *((_QWORD *)v5 + 5), v14);
      }
    }
    if ( v5 == a3 )
      v12 = 1;
    if ( v11 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v5, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v64);
    else
      v59 = 1;
    v21 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 32LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v21, &EventRecycleRangeDestroy, v13, v5);
    v23 = WdLogNewEntry5_WdEvent(v21, v14);
    *(_QWORD *)(v23 + 24) = v5;
    WdLogEvent5_WdEvent(v23);
    v24 = *((_QWORD *)v5 + 9);
    v25 = *(_QWORD **)(v24 + 136);
    if ( v25 )
    {
      v26 = *v25 + 144LL * v25[1];
      *(_DWORD *)v26 = 1;
      *(_QWORD *)(v26 + 8) = v5;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v26 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v24 + 136) + 8LL);
      v27 = *(_QWORD *)(v24 + 136);
      if ( *(_QWORD *)(v27 + 8) == *(_QWORD *)(v27 + 48) )
      {
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v24 + 136) + 16LL) = 1;
      }
    }
    v28 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 9);
    v29 = (*(_QWORD *)v28)-- == 1LL;
    if ( v29 && !*((_QWORD *)v28 + 1) )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v28);
    *((_BYTE *)v5 + 168) = 1;
    v30 = *(unsigned int *)(v22 + 1608);
    v31 = *(_QWORD *)(v22 + 1312);
    if ( (unsigned int)v30 >= 4 )
    {
      ++*(_DWORD *)(v31 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v31) < *(_WORD *)(v31 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, (PSLIST_ENTRY)v5);
      }
      else
      {
        ++*(_DWORD *)(v31 + 32);
        (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v31 + 56))(v5, v31);
      }
    }
    else
    {
      *(_QWORD *)(v22 + 8 * v30 + 1616) = v5;
      ++*(_DWORD *)(v22 + 1608);
    }
    --*(_DWORD *)(v22 + 1680);
    v13 = 0LL;
    v11 = v59;
    v6 = (VIDMM_RECYCLE_MULTIRANGE *)this;
    if ( v12 )
      v15 = v5;
    v5 = v15;
  }
  while ( !v12 );
  v32 = this[10];
  v33 = *(_QWORD *)(*((_QWORD *)v32 + 4) + 8LL);
  v34 = *(_DWORD *)(v33 + 1608);
  v35 = *(_QWORD *)(v33 + 1312);
  if ( v34 )
  {
    v36 = (unsigned int)(v34 - 1);
    v37 = *(PSLIST_ENTRY *)(v33 + 8 * v36 + 1616);
    *(_QWORD *)(v33 + 8 * v36 + 1616) = 0LL;
    --*(_DWORD *)(v33 + 1608);
  }
  else
  {
    ++*(_DWORD *)(v35 + 20);
    v37 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v35);
    if ( !v37 )
    {
      ++*(_DWORD *)(v35 + 24);
      v37 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v35 + 48))(
                            *(unsigned int *)(v35 + 36),
                            *(unsigned int *)(v35 + 44),
                            *(unsigned int *)(v35 + 40),
                            v35);
    }
  }
  if ( v37 )
  {
    ++*(_DWORD *)(v33 + 1680);
    v37[2].Next = v66;
    *((_QWORD *)&v37[2].Next + 1) = v67;
    *((_DWORD *)&v37[1].Next + 2) = 0;
    *((_QWORD *)&v37[4].Next + 1) = v32;
    LODWORD(v37[4].Next) = 0;
    *((_QWORD *)&v37[5].Next + 1) = 3LL;
    v37[6].Next = 0LL;
    ++*(_QWORD *)v32;
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v37[2].Next);
    v39 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
    *((_QWORD *)&v37[3].Next + 1) = v39;
    v40 = *((_QWORD *)&v37[4].Next + 1);
    v37[3].Next = 0LL;
    LODWORD(v37[5].Next) = 0;
    *((_QWORD *)&v37[6].Next + 1) = 0LL;
    v37[7].Next = 0LL;
    *((_QWORD *)&v37[7].Next + 1) = 0LL;
    v37[8].Next = 0LL;
    *((_QWORD *)&v37[8].Next + 1) = 0LL;
    v37[9].Next = 0LL;
    *((_QWORD *)&v37[9].Next + 1) = 0LL;
    v37[10].Next = 0LL;
    *((_BYTE *)&v37[10].Next + 8) = 0;
    v41 = *(_QWORD **)(v40 + 136);
    if ( v41 )
    {
      v42 = *v41 + 144LL * v41[1];
      *(_DWORD *)v42 = 0;
      *(_QWORD *)(v42 + 8) = v37;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v42 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v40 + 136) + 8LL);
      v43 = *(_QWORD *)(v40 + 136);
      if ( *(_QWORD *)(v43 + 8) == *(_QWORD *)(v43 + 48) )
      {
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v40 + 136) + 16LL) = 1;
      }
    }
  }
  v44 = this[10];
  v29 = (*(_QWORD *)v44)-- == 1LL;
  if ( v29 && !*((_QWORD *)v44 + 1) )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v44);
  v45 = v69;
  v46 = v70;
  v47 = v71;
  *((_DWORD *)&v37[5].Next + 3) = v65;
  LODWORD(v37[5].Next) = v64;
  v48 = v68;
  *((_QWORD *)&v37[8].Next + 1) = v68;
  LODWORD(v37[4].Next) = v4;
  v37[9].Next = (struct _SLIST_ENTRY *)v45;
  *((_QWORD *)&v37[9].Next + 1) = v46;
  v37[10].Next = v47;
  if ( v75 )
    *(_QWORD *)(v48 + 64) = v37;
  if ( v60 )
    *(_QWORD *)(v48 + 72) = v37;
  if ( v76 )
    *(_QWORD *)(v45 + 64) = v37;
  if ( v61 )
    *(_QWORD *)(v45 + 72) = v37;
  if ( v77 )
    *(_QWORD *)(v46 + 64) = v37;
  if ( v62 )
    *(_QWORD *)(v46 + 72) = v37;
  if ( v58 )
    v47[4].Next = v37;
  if ( v63 )
    *((_QWORD *)&v47[4].Next + 1) = v37;
  v49 = v72;
  v37[8].Next = v72;
  v49->Next = (PSLIST_ENTRY)((char *)v37 + 120);
  v50 = v73;
  *((_QWORD *)&v37[7].Next + 1) = v73;
  *(_QWORD *)(v50 + 8) = (char *)v37 + 120;
  if ( v4 == 5 )
  {
    v51 = *(_QWORD *)(*((_QWORD *)this[10] + 4) + 8LL);
    v52 = (struct _SLIST_ENTRY *)(v51 + 1552);
    v37[6].Next = (struct _SLIST_ENTRY *)(*(_QWORD *)(v51 + 1568) + (unsigned int)dword_1C00503D0);
    v53 = (PSLIST_ENTRY)((char *)v37 + 104);
    v47 = *(struct _SLIST_ENTRY **)(v51 + 1560);
    if ( v47->Next != (struct _SLIST_ENTRY *)(v51 + 1552) )
      __fastfail(3u);
    v53->Next = v52;
    v37[7].Next = v47;
    v47->Next = v53;
    *(_QWORD *)(v51 + 1560) = v53;
    if ( !_InterlockedExchange((volatile __int32 *)(v51 + 1528), 1) && !*(_DWORD *)(v51 + 1576) )
      KeSetTimer((PKTIMER)(v51 + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)(v51 + 1432));
    v54 = *((_QWORD *)&v37[2].Next + 1) - (unsigned __int64)v37[2].Next;
    if ( (__int64)(v54 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v54)) < 0
      && g_IsInternalRelease )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v52);
      v55[3] = 270LL;
      v55[4] = 9LL;
      v55[5] = 0LL;
      v55[6] = 0LL;
      v55[7] = 0LL;
      WdLogEvent5_WdCriticalError(v55);
    }
  }
  else if ( (unsigned int)(v4 - 3) <= 1 )
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v37);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v56 = (__int64)this[10];
    v57 = *(_QWORD *)(v56 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v57,
      v56,
      (__int64)v47,
      **(_QWORD **)(*(_QWORD *)(v57 + 8) + 8LL),
      v37,
      v56,
      *(_QWORD *)(v56 + 56),
      v57,
      v37[2].Next,
      *((_QWORD *)&v37[2].Next + 1),
      *(_DWORD *)v57,
      LODWORD(v37[4].Next));
  }
}
