/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C007A630
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0074924 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007A160 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00C10E4 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E8C (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023F2C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0027E78 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007596C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF4CC (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C032C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  bool v7; // r15
  __int64 v8; // rax
  bool v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _QWORD *v12; // rdx
  __int64 v13; // r8
  struct _SLIST_ENTRY *v14; // r9
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rax
  PSLIST_ENTRY v19; // rdi
  CCHAR LeastSignificantBit; // al
  __int64 v21; // r8
  __int64 v22; // rax
  struct _SLIST_ENTRY *v23; // r14
  unsigned __int64 *v24; // r13
  __int64 v25; // rbp
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  struct VIDMM_RECYCLE_BLOCK *v31; // rdx
  __int64 v32; // rcx
  struct _SLIST_ENTRY *v33; // rdx
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // [rsp+50h] [rbp-78h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  _QWORD *v44; // [rsp+60h] [rbp-68h]
  __int64 v45; // [rsp+68h] [rbp-60h]
  struct _SLIST_ENTRY *v46; // [rsp+70h] [rbp-58h]
  bool v47; // [rsp+D0h] [rbp+8h]
  bool v50; // [rsp+E8h] [rbp+20h]

  *a3 = 1;
  v4 = *((_QWORD *)this + 17);
  v47 = 0;
  if ( v4 )
    v47 = *(_QWORD *)(v4 + 72) == (_QWORD)this;
  v6 = *((_QWORD *)this + 18);
  v7 = 0;
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 72) == (_QWORD)this;
  v8 = *((_QWORD *)this + 19);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 72) == (_QWORD)this;
  v10 = *((_QWORD *)this + 20);
  v50 = 0;
  if ( v10 )
    v50 = *(_QWORD *)(v10 + 72) == (_QWORD)this;
  v11 = *((_DWORD *)this + 22);
  if ( v11 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v11, this);
  v12 = (_QWORD *)*((_QWORD *)this + 9);
  v13 = *((_QWORD *)this + 5);
  v14 = (struct _SLIST_ENTRY *)(a2 + *((_QWORD *)this + 4));
  v44 = v12;
  v45 = v13;
  v46 = v14;
  v15 = *(_QWORD *)(v12[4] + 8LL);
  v16 = *(_DWORD *)(v15 + 1608);
  v17 = *(_QWORD *)(v15 + 1312);
  if ( v16 )
  {
    v18 = (unsigned int)(v16 - 1);
    v19 = *(PSLIST_ENTRY *)(v15 + 8 * v18 + 1616);
    *(_QWORD *)(v15 + 8 * v18 + 1616) = 0LL;
    --*(_DWORD *)(v15 + 1608);
  }
  else
  {
    ++*(_DWORD *)(v17 + 20);
    v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
    if ( !v19 )
    {
      ++*(_DWORD *)(v17 + 24);
      v19 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v17 + 48))(
                            *(unsigned int *)(v17 + 36),
                            *(unsigned int *)(v17 + 44),
                            *(unsigned int *)(v17 + 40),
                            v17);
    }
    v12 = v44;
    v13 = v45;
    v14 = v46;
  }
  if ( v19 )
  {
    ++*(_DWORD *)(v15 + 1680);
    v19[2].Next = v14;
    *((_DWORD *)&v19[1].Next + 2) = 0;
    *((_QWORD *)&v19[4].Next + 1) = v12;
    *((_QWORD *)&v19[2].Next + 1) = v13;
    LODWORD(v19[4].Next) = 0;
    *((_QWORD *)&v19[5].Next + 1) = 3LL;
    v19[6].Next = 0LL;
    ++*v12;
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v19[2].Next);
    if ( LeastSignificantBit < 0 )
      v22 = 0LL;
    else
      v22 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v19[3].Next + 1) = v22;
    v23 = (PSLIST_ENTRY)((char *)v19 + 104);
    *((_QWORD *)&v19[6].Next + 1) = 0LL;
    v24 = (unsigned __int64 *)(&v19[7].Next + 1);
    *((_QWORD *)&v19[7].Next + 1) = 0LL;
    v19[3].Next = 0LL;
    LODWORD(v19[5].Next) = 0;
    v19[7].Next = 0LL;
    v19[8].Next = 0LL;
    *((_QWORD *)&v19[8].Next + 1) = 0LL;
    v19[9].Next = 0LL;
    *((_QWORD *)&v19[9].Next + 1) = 0LL;
    v19[10].Next = 0LL;
    v25 = *((_QWORD *)&v19[4].Next + 1);
    *((_BYTE *)&v19[10].Next + 8) = 0;
    v26 = *(_QWORD **)(v25 + 136);
    if ( v26 )
    {
      v27 = *v26 + 144LL * v26[1];
      *(_DWORD *)v27 = 0;
      *(_QWORD *)(v27 + 8) = v19;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v27 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v25 + 136) + 8LL);
      v28 = *(_QWORD *)(v25 + 136);
      if ( *(_QWORD *)(v28 + 8) == *(_QWORD *)(v28 + 48) )
      {
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v25 + 136) + 16LL) = 1;
      }
    }
    LODWORD(v19[4].Next) = *((_DWORD *)this + 16);
    *((_DWORD *)&v19[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v29 = *((_QWORD *)this + 15);
    *(_QWORD *)(v29 + 8) = v24;
    *((_QWORD *)this + 15) = v24;
    v19[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *v24 = v29;
    *((_QWORD *)&v19[8].Next + 1) = *((_QWORD *)this + 17);
    v19[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v19[9].Next + 1) = *((_QWORD *)this + 19);
    v19[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    LODWORD(v19[5].Next) = *((_DWORD *)this + 20);
    BYTE4(v19[5].Next) = *((_BYTE *)this + 84);
    if ( v47 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v19;
    if ( v7 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v19;
    if ( v9 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v19;
    if ( v50 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v19;
    v30 = *((_DWORD *)this + 16);
    if ( v30 == 5 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v19[6].Next = (struct _SLIST_ENTRY *)(*(_QWORD *)(v32 + 1568) + (unsigned int)dword_1C00503D0);
      v33 = *(struct _SLIST_ENTRY **)(v32 + 1560);
      if ( v33->Next != (struct _SLIST_ENTRY *)(v32 + 1552) )
        __fastfail(3u);
      v23->Next = (struct _SLIST_ENTRY *)(v32 + 1552);
      v19[7].Next = v33;
      v33->Next = v23;
      *(_QWORD *)(v32 + 1560) = v23;
      if ( !_InterlockedExchange((volatile __int32 *)(v32 + 1528), 1) && !*(_DWORD *)(v32 + 1576) )
        KeSetTimer((PKTIMER)(v32 + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)(v32 + 1432));
      v34 = *((_QWORD *)&v19[2].Next + 1) - (unsigned __int64)v19[2].Next;
      if ( (__int64)(v34 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v34)) < 0
        && g_IsInternalRelease )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
        v35[3] = 270LL;
        v35[4] = 9LL;
        v35[5] = 0LL;
        v35[6] = 0LL;
        v35[7] = 0LL;
        WdLogEvent5_WdCriticalError(v35);
      }
      v29 = (unsigned __int64)v19[2].Next - *((_QWORD *)&v19[2].Next + 1);
      if ( (__int64)(v29 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v29)) < 0
        && g_IsInternalRelease )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v33);
        v36[3] = 270LL;
        v36[4] = 9LL;
        v36[5] = 0LL;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
    }
    else if ( (unsigned int)(v30 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v19);
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(
        (unsigned __int64)v19[2].Next - *((_QWORD *)&v19[2].Next + 1),
        v31);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v29, &EventRecycleRangeDestroy, v21, this);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      v37 = *((_QWORD *)this + 9);
      v38 = *(_QWORD *)(v37 + 32);
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v38,
        v37,
        v21,
        **(_QWORD **)(*(_QWORD *)(v38 + 8) + 8LL),
        this,
        v37,
        *(_QWORD *)(v37 + 56),
        v38,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5),
        *(_DWORD *)v38,
        *((_DWORD *)this + 16));
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      v39 = *((_QWORD *)this + 9);
      v40 = *(_QWORD *)(v39 + 32);
      LODWORD(v43) = v19[4].Next;
      LODWORD(v42) = *(_DWORD *)v40;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v40,
        v39,
        v21,
        **(_QWORD **)(*(_QWORD *)(v40 + 8) + 8LL),
        v19,
        v39,
        *(_QWORD *)(v39 + 56),
        v40,
        v19[2].Next,
        *((_QWORD *)&v19[2].Next + 1),
        v42,
        v43);
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdWarning(v10, v12);
    *(_QWORD *)(v41 + 24) = this;
    *(_QWORD *)(v41 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
    WdLogEvent5_WdWarning(v41);
    if ( v11 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v11, this);
    *a3 = 0;
  }
}
