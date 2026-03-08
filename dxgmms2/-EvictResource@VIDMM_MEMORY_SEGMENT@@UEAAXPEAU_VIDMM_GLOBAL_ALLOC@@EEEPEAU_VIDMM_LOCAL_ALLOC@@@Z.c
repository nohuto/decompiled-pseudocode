/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F97D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00338C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00861B4 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0086988 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0086A28 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C008A84C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00B4A34 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rsi
  int v10; // r12d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  unsigned int PriorityClass; // eax
  void *v17; // r9
  struct _VIDMM_GLOBAL_ALLOC *v18; // r11
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_DWORD *)a2 + 36) && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 504, 0LL);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v9 = a6;
  if ( !a6 )
    v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v10 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    v10 = 1;
    if ( *((_BYTE *)a2 + 83) )
      *((_BYTE *)a2 + 82) = 0;
    a3 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem(this, a2, a3, v9, 0);
  if ( *((_QWORD *)a2 + 59) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 63), a2);
  }
  v11 = *((_QWORD *)a2 + 17);
  if ( v11 )
  {
    (*(void (__fastcall **)(VIDMM_MEMORY_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      v11,
      *((_QWORD *)a2 + 2),
      **((_QWORD **)a2 + 64));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  v12 = (_QWORD *)((char *)a2 + 408);
  v13 = *((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v13 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v14 = (_QWORD *)*((_QWORD *)a2 + 52), (_QWORD *)*v14 != v12) )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *((_QWORD *)a2 + 52) = 0LL;
  if ( v9 && *((_QWORD *)v9 + 1) )
    VidMmRecordAlloc(*((_QWORD *)this + 1), (__int64)a2, (__int64)v9, this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)this + 1) + 44760LL) -= *((_QWORD *)a2 + 2);
  v15 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v15 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1592) -= *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 39) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 100));
  *((_QWORD *)this + PriorityClass + 41) += *((_QWORD *)a2 + 2);
  v18 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
  while ( v18 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v18 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v20 + 7184, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v20 + 8));
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 - 48) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v22 + 232) -= *((_QWORD *)a2 + 2);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40216LL) -= *((_QWORD *)a2 + 2) >> 12;
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  *((_DWORD *)a2 + 28) = 0;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 0LL, v17);
  if ( !v10 )
  {
    *((_DWORD *)a2 + 19) &= ~8u;
    *((_BYTE *)a2 + 83) = 0;
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 504, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
}
