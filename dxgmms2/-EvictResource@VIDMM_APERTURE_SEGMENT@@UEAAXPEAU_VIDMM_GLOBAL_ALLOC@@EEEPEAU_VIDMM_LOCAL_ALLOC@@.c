// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  void (*v10)(void *); // r8
  struct _VIDMM_LOCAL_ALLOC *v11; // rbp
  VIDMM_GLOBAL *v12; // rcx
  VIDMM_GLOBAL *v13; // r9
  void (__fastcall *v14)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD); // rbx
  struct _MDL *FullMDL; // rax
  VIDMM_GLOBAL *v16; // rcx
  _DWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned int PriorityClass; // eax
  _QWORD **v22; // rbx
  _QWORD **v23; // r10
  __int64 v24; // rdx
  _QWORD *i; // r9
  __int64 v26; // rcx
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  signed __int32 v32[16]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+40h] [rbp-48h]
  __int128 v34; // [rsp+50h] [rbp-38h]
  __int128 v35; // [rsp+60h] [rbp-28h]

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v30 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v30 + 24) = a2;
    *(_QWORD *)(v30 + 32) = *((int *)a2 + 91);
  }
  if ( *((_DWORD *)a2 + 36) && (*((_DWORD *)a2 + 17) & 0x40000000) == 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v11 = a6;
  if ( !a6 )
    v11 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v12 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( ((unsigned int)v12 & 0x200000) != 0 || (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    a3 = 0;
  v13 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_DWORD *)v13 + 10042) )
  {
    if ( ((unsigned int)v12 & 0x10000000) != 0 )
    {
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v12, a2);
      v13 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    }
    if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency(v13, a2, 0);
    if ( a3 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, void (*)(void *), VIDMM_GLOBAL *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        v10,
        v13);
    if ( (*((_DWORD *)a2 + 17) & 0x800000) == 0 )
    {
      v14 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))(*(_QWORD *)this + 208LL);
      FullMDL = VidMmGetFullMDL(a2, v11);
      v32[12] = 0;
      v14(this, a2, *((_QWORD *)a2 + 1) >> 12, *((_QWORD *)a2 + 16) / 4096LL, *((_QWORD *)a2 + 16) / 4096LL, FullMDL, 0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 17) = (unsigned int)v12 | 0x200000;
  }
  LOBYTE(v10) = 1;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, v10, v13);
  v16 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_BYTE *)v16 + 40179) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v16, a2, v11);
  v17 = (_DWORD *)((char *)a2 + 76);
  if ( (**((_DWORD **)a2 + 67) & 0x8000000) == 0 )
    goto LABEL_42;
  if ( (*v17 & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *v17 |= 2u;
      goto LABEL_24;
    }
LABEL_42:
    if ( (**((_DWORD **)a2 + 67) & 0x4000) != 0 )
      *((_QWORD *)a2 + 49) = 0LL;
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v11);
    if ( (*v17 & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *v17 &= ~2u;
    }
  }
LABEL_24:
  if ( *((_QWORD *)a2 + 17) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v31[3] = *((_QWORD *)a2 + 17);
      v31[4] = *((int *)a2 + 33);
      v31[5] = *((unsigned int *)a2 + 32);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      *((_QWORD *)a2 + 17),
      *((_QWORD *)a2 + 2),
      **((_QWORD **)a2 + 64));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v16);
  }
  v18 = (_QWORD *)((char *)a2 + 408);
  v19 = *((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v19 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v20 = (_QWORD *)*((_QWORD *)a2 + 52), (_QWORD *)*v20 != v18) )
  {
    __fastfail(3u);
  }
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  *v18 = 0LL;
  *((_QWORD *)a2 + 52) = 0LL;
  if ( v11 && *((_QWORD *)v11 + 1) && (*((_DWORD *)a2 + 19) & 4) == 0 )
    VidMmRecordAlloc(*((_QWORD *)this + 1), a2, v11, this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 100));
  v22 = (_QWORD **)((char *)a2 + 272);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v23 = (_QWORD **)*((_QWORD *)a2 + 34);
  while ( v23 != v22 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v23 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v28 + 7184, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v28 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = 0LL;
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  *((_QWORD *)a2 + 15) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
    *((_DWORD *)a2 + 19) |= 0x10u;
    *((_QWORD *)a2 + 58) = *(_QWORD *)(*((_QWORD *)this + 1) + 4632LL);
  }
  v24 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v24 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1600) -= *((_QWORD *)a2 + 2);
  for ( i = *v22; i != v22; i = (_QWORD *)*i )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v29 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  v26 = *((_QWORD *)this + 1);
  _InterlockedOr(v32, 0);
  ++*(_QWORD *)(v26 + 40);
}
