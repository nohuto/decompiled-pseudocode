// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        bool a4)
{
  VIDMM_GLOBAL **v6; // r15
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r14
  struct _VIDMM_LOCAL_ALLOC *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  VIDMM_SEGMENT *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int8 v21; // al
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned int v26; // eax
  char *v27; // rax
  SIZE_T v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  SIZE_T v33; // rdx
  SIZE_T v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  SIZE_T v38; // rdx
  SIZE_T v39; // rbx
  _QWORD *v40; // rax
  bool v41; // [rsp+60h] [rbp-118h] BYREF
  bool v42; // [rsp+61h] [rbp-117h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v43; // [rsp+68h] [rbp-110h]
  unsigned int v44; // [rsp+70h] [rbp-108h]
  _DWORD v45[7]; // [rsp+74h] [rbp-104h]
  size_t Size; // [rsp+90h] [rbp-E8h]
  union _LARGE_INTEGER v47; // [rsp+98h] [rbp-E0h] BYREF
  SIZE_T v48; // [rsp+A0h] [rbp-D8h]
  void *v49[5]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v50; // [rsp+D0h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-A0h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v52; // [rsp+108h] [rbp-70h] BYREF

  v41 = a4;
  *(_QWORD *)&v45[1] = a3;
  v49[1] = this;
  v49[4] = a2;
  v45[3] = 0;
  v42 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v43 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v49[2] = v43;
  v6 = (VIDMM_GLOBAL **)((char *)this + 8);
  v49[3] = (char *)this + 8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 1);
  if ( !VIDMM_GLOBAL::IsTdrPending(*v6) )
  {
    LODWORD(v9) = -1073741823;
    if ( *((_BYTE *)a2 + 80) )
    {
      v10 = v43;
      if ( *((int *)a2 + 91) > 0 )
      {
        VIDMM_GLOBAL::UnlockAllocation(v7, v43, 0LL, *((_QWORD *)a2 + 1), 0, 0);
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*v6, *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 19) &= ~2u;
        VidMmiRemoveProbeAndLockReference(a2);
      }
      *(SIZE_T *)((char *)&v52.CurrentSize + 4) = 0LL;
      HIDWORD(v52.NewStartOffset) = 0;
      *(_QWORD *)&v52.VprIndex = this;
      v52.CurrentStartOffset = *((_QWORD *)a2 + 24);
      *(_QWORD *)&v52.PhysicalAdapterIndex = a2;
      LODWORD(v52.CurrentSize) = 0;
      KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), &ApcState);
      v9 = (int)VIDMM_GLOBAL::Rotate(
                  (__int64)*v6,
                  *(_QWORD *)(*((_QWORD *)v10 + 1) + 24LL),
                  *((_QWORD *)v10 + 3),
                  0,
                  *(__int64 *)&v45[1],
                  *((_QWORD *)a2 + 2),
                  (__int64)VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                  (__int64)&v52,
                  2 * (unsigned int)v41,
                  (__int64)a2);
      KeUnstackDetachProcess(&ApcState);
      v12 = *((_QWORD *)a2 + 30);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v12 + 88LL))(*((_QWORD *)a2 + 30), a2);
      if ( v41 )
      {
        if ( (int)v9 >= 0 )
          goto LABEL_17;
        *((_DWORD *)a2 + 17) |= 0x200000u;
        VIDMM_GLOBAL::FillAllocation(
          *v6,
          a2,
          *((_QWORD *)a2 + 2),
          v11,
          *((struct VIDMM_SEGMENT **)a2 + 25),
          (union _LARGE_INTEGER *)a2 + 24);
LABEL_16:
        if ( (int)v9 < 0 )
        {
LABEL_18:
          *((_BYTE *)a2 + 83) = 1;
          v42 = 1;
          goto LABEL_19;
        }
LABEL_17:
        *((_BYTE *)v10 + 32) |= 1u;
        goto LABEL_18;
      }
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = 0;
        goto LABEL_16;
      }
      WdLogSingleEntry1(1LL, v9);
LABEL_14:
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      return (unsigned int)v9;
    }
    if ( !*((_BYTE *)a2 + 82) )
    {
      if ( *((_QWORD *)v43 + 3) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v43 + 1) + 24LL) + 144LL))(*(_QWORD *)(*((_QWORD *)v43 + 1) + 24LL));
      if ( (*((_DWORD *)a2 + 17) & 0x100) == 0 && (*((_DWORD *)a2 + 18) & 0x800) == 0 )
        VIDMM_GLOBAL::FillAllocation(*v6, a2, *((_QWORD *)a2 + 1), v8, this, (union _LARGE_INTEGER *)a2 + 24);
      LODWORD(v9) = 0;
      v42 = 1;
    }
    if ( (int)v9 < 0 )
    {
      v41 = 0;
      LODWORD(v9) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                      (VIDMM_GLOBAL **)this,
                      a2,
                      DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                      *((struct VIDMM_SEGMENT **)a2 + 25),
                      *(union _LARGE_INTEGER *)((char *)a2 + 192),
                      &v41,
                      &v42);
      if ( v41 )
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 30) + 88LL))(
          *((_QWORD *)a2 + 30),
          a2);
      if ( (int)v9 < 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v19);
        LODWORD(v9) = 0;
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, &EventPerformanceWarning, v20, 2);
        v48 = (SIZE_T)a2 + 536;
        if ( (**((_DWORD **)a2 + 67) & 8) == 0 )
          KeStackAttachProcess(**((PRKPROCESS **)v43 + 1), &ApcState);
        v21 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 25));
        v22 = *((_QWORD *)a2 + 1);
        v23 = v21 != 0 ? 0x10000 : 4096;
        v45[0] = v23;
        v24 = v22 >> 12;
        v25 = v22 >> 16;
        if ( !v21 )
          v25 = (unsigned int)v24;
        *(_QWORD *)&v45[1] = v25;
        v45[5] = v25;
        v47 = *(union _LARGE_INTEGER *)((char *)a2 + 192);
        v26 = 0;
        while ( 1 )
        {
          v44 = v26;
          if ( v26 >= (unsigned int)v25 )
            break;
          v49[0] = 0LL;
          Size = v23;
          v50 = v23 * v26;
          v27 = VidMmMapViewOfAllocation(v43, (void **)(unsigned int)v50, v23, v49, 0);
          if ( v27 )
          {
            memmove(*((void **)this + 32), v27, Size);
            VidMmUnmapViewOfAllocation(v43, v49[0]);
          }
          else
          {
            *((_DWORD *)a2 + 17) |= 0x200000u;
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *v6,
            a2,
            Size,
            v50,
            0LL,
            0LL,
            *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
            this,
            &v47,
            0LL,
            0);
          VIDMM_GLOBAL::WaitForAllPagingEngines(*v6, a2);
          v47.QuadPart += Size;
          v26 = v44 + 1;
          v23 = v45[0];
          LODWORD(v25) = v45[1];
        }
        v42 = 1;
        if ( (**(_DWORD **)v48 & 8) == 0 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
    if ( (**((_DWORD **)a2 + 67) & 0x20000) == 0 )
      goto LABEL_19;
    v28 = *((_QWORD *)a2 + 2);
    v48 = v28;
    memset(&v52, 0, sizeof(v52));
    v52.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v52.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    if ( *((_DWORD *)this + 103) )
    {
      v34 = *((_QWORD *)a2 + 24) & ~*((_QWORD *)this + 50);
      if ( v34 < *((_QWORD *)this + 52) )
      {
        if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((VIDMM_GLOBAL *)((char *)*v6 + 41136)) )
        {
          if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v35, &EventPerformanceWarning, v36, 24);
          KeWaitForSingleObject((char *)*v6 + 41184, Executive, 0, 0, 0LL);
        }
        VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
        VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
        VIDMM_GLOBAL::EvictAllReclaimedAllocation(*v6, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*v6, *((_DWORD *)this + 95));
        v52.CurrentStartOffset = *((_QWORD *)this + 52);
        v52.CurrentSize = *((_QWORD *)this + 54);
        v52.NewStartOffset = v34;
        v38 = *((_QWORD *)this + 53) - v34;
        v52.NewSize = v38;
        *((_QWORD *)this + 54) = v38;
        *((_QWORD *)this + 52) = v34;
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0qqqxxp_EtwWriteTransfer(
            *((_QWORD *)*v6 + 3),
            v38,
            v37,
            v52.PhysicalAdapterIndex,
            v52.SegmentIndex,
            v52.VprIndex,
            v34,
            v38,
            *((_QWORD *)*v6 + 3));
        LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                        *(ADAPTER_RENDER **)(*((_QWORD *)*v6 + 3) + 2928LL),
                        (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v52);
        if ( (int)v9 < 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
      }
      if ( (int)v9 < 0 )
      {
LABEL_87:
        WdLogSingleEntry1(1LL, 1033LL);
        goto LABEL_14;
      }
      *((_DWORD *)a2 + 18) |= 0x200u;
      v39 = v48;
      *((_QWORD *)this + 55) += v48;
      if ( g_IsInternalReleaseOrDbg )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v29);
        v40[3] = v39;
        v40[4] = *((_QWORD *)this + 55);
        v40[5] = a2;
      }
    }
    else
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((VIDMM_GLOBAL *)((char *)*v6 + 41136)) )
      {
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventPerformanceWarning, v31, 24);
        KeWaitForSingleObject((char *)*v6 + 41184, Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*v6, 0LL);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*v6, *((_DWORD *)this + 95));
      v33 = *((_QWORD *)a2 + 24);
      v52.NewStartOffset = v33;
      v52.NewSize = v28;
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          *((_QWORD *)*v6 + 3),
          v33,
          v32,
          v52.PhysicalAdapterIndex,
          v52.SegmentIndex,
          v52.VprIndex,
          v33,
          v28,
          *((_QWORD *)*v6 + 3));
      LODWORD(v9) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                      *(ADAPTER_RENDER **)(*((_QWORD *)*v6 + 3) + 2928LL),
                      (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v52);
      if ( (int)v9 < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
    if ( (int)v9 >= 0 )
      goto LABEL_19;
    goto LABEL_87;
  }
  LODWORD(v9) = -1073741130;
  if ( !v41 )
  {
    WdLogSingleEntry1(4LL, a2);
    return (unsigned int)v9;
  }
LABEL_19:
  v14 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 15) = v14;
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
  *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = VIDMM_SEGMENT::DriverId(v14);
  *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  *((_QWORD *)a2 + 25) = 0LL;
  v15 = *((_DWORD *)a2 + 19);
  if ( (v15 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*v6, a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*v6, *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 19) &= ~2u;
    v15 = *((_DWORD *)a2 + 19);
  }
  if ( v42 && (v15 & 8) == 0 && !*((_QWORD *)a2 + 30) )
    VIDMM_GLOBAL::ResetBackingStore(*v6, a2);
  if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)*v6, a2, 1u);
  if ( *((_QWORD *)*v6 + 5132) )
  {
    v16 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(
      v17,
      v16,
      *((__int64 *)a2 + 16) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      3,
      (__int64)a2);
  }
  return (unsigned int)v9;
}
