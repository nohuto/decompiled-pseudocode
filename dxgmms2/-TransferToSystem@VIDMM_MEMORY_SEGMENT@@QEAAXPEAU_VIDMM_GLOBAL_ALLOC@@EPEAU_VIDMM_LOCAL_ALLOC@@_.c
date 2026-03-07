// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC *a4,
        bool a5)
{
  ADAPTER_RENDER ***v9; // rdi
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  _DWORD *v14; // rbx
  VIDMM_GLOBAL *v15; // rcx
  _DWORD *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // r8d
  int v20; // edx
  char v21; // al
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  ADAPTER_RENDER **v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  ADAPTER_RENDER **v30; // rax
  char v31; // dl
  int v32; // r8d
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rdi
  void (__fastcall *v36)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, union _LARGE_INTEGER *, struct _MDL *, struct VIDMM_SEGMENT *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v38; // r8
  __int64 (__fastcall *v39)(struct _MDL *, struct _MDL *, char *); // r13
  int v40; // r9d
  int v41; // eax
  union _LARGE_INTEGER *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r8d
  unsigned __int8 v46; // al
  int v47; // r8d
  unsigned __int64 v48; // rdx
  unsigned int v49; // r9d
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned int v52; // eax
  ADAPTER_RENDER **v53; // rcx
  unsigned int v54; // ebx
  char *v55; // rax
  char v56; // dl
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  SIZE_T v62; // rcx
  SIZE_T v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rax
  void *v66; // r12
  void (*v67)(void *); // r8
  void *v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  char *v73; // rcx
  ADAPTER_RENDER **v74; // rcx
  signed __int32 v75[8]; // [rsp+0h] [rbp-198h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-178h]
  union _LARGE_INTEGER *v77; // [rsp+28h] [rbp-170h]
  struct _MDL *v78; // [rsp+30h] [rbp-168h]
  struct VIDMM_SEGMENT *v79; // [rsp+38h] [rbp-160h]
  char v80; // [rsp+60h] [rbp-138h]
  bool v81; // [rsp+61h] [rbp-137h] BYREF
  char v82[2]; // [rsp+62h] [rbp-136h] BYREF
  unsigned int v83; // [rsp+64h] [rbp-134h]
  VIDMM_LINEAR_POOL **v84; // [rsp+68h] [rbp-130h]
  int v85; // [rsp+70h] [rbp-128h]
  SIZE_T v86; // [rsp+78h] [rbp-120h] BYREF
  _DWORD *v87; // [rsp+80h] [rbp-118h]
  char *v88; // [rsp+88h] [rbp-110h]
  union _LARGE_INTEGER v89; // [rsp+90h] [rbp-108h] BYREF
  void *v90; // [rsp+98h] [rbp-100h] BYREF
  VIDMM_MEMORY_SEGMENT *v91; // [rsp+A0h] [rbp-F8h] BYREF
  void *v92; // [rsp+A8h] [rbp-F0h] BYREF
  size_t Size; // [rsp+B0h] [rbp-E8h]
  ADAPTER_RENDER ***v94; // [rsp+B8h] [rbp-E0h]
  union _LARGE_INTEGER *v95; // [rsp+C0h] [rbp-D8h]
  _QWORD v96[4]; // [rsp+C8h] [rbp-D0h] BYREF
  unsigned __int64 v97; // [rsp+E8h] [rbp-B0h]
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v98; // [rsp+F0h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp-78h] BYREF

  v96[2] = this;
  v91 = this;
  v96[3] = a2;
  v96[1] = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  v81 = 0;
  v9 = (ADAPTER_RENDER ***)((char *)this + 8);
  v94 = (ADAPTER_RENDER ***)((char *)this + 8);
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( (*v9)[5132] )
  {
    v10 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::RecordPageMappingHistory(v13, v10, v11, v12, 4, (__int64)a2);
  }
  v14 = (_DWORD *)((char *)a2 + 68);
  v87 = (_DWORD *)((char *)a2 + 68);
  v15 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( ((unsigned __int16)v15 & 0x100) != 0 || (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    a3 = 0;
  if ( ((unsigned int)v15 & 0x10000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v15, a2);
  v88 = (char *)a2 + 536;
  if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*v9, a2, 0);
  v16 = *(_DWORD **)v88;
  if ( (**(_DWORD **)v88 & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
    *v14 |= 0x200000u;
  if ( (*v16 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(**((_QWORD **)a4 + 1)) )
    *v14 |= 0x200000u;
  v17 = 0;
  if ( (*v14 & 0x200000) == 0 )
    v17 = a3;
  v83 = v17;
  if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)*v9) )
  {
    WdLogSingleEntry1(4LL, a2);
    LOBYTE(v19) = 0;
    v83 = v19;
  }
  v20 = *((_DWORD *)a2 + 19);
  LOBYTE(v18) = (v20 & 8) != 0;
  if ( ((unsigned __int8)v18 & ((VIDMM_GLOBAL::_Config & 8) == 0)) != 0 )
  {
    *((_BYTE *)a2 + 83) = 1;
    v21 = 1;
  }
  else
  {
    v21 = *((_BYTE *)a2 + 83);
  }
  if ( (_BYTE)v19 && (v20 & 8) != 0 && !v21 && a4 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    v92 = 0LL;
    v96[0] = VidMmMapViewOfAllocation(a4, 0LL, *((_QWORD *)a2 + 1), &v92, 1);
    if ( v96[0] )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, char *, int, int))VirtualMemoryInterface)(
              -1LL,
              v96,
              0LL,
              (char *)a2 + 8,
              0x1000000,
              4);
      VidMmUnmapViewOfAllocation(a4, v92);
      if ( v23 < 0 )
      {
        *((_BYTE *)a2 + 83) = 1;
        if ( bTracingEnabled )
        {
          v28 = *((_QWORD *)a2 + 1) >> 12;
          if ( (byte_1C00769C1 & 1) != 0 )
          {
            LODWORD(v78) = 0;
            LODWORD(v77) = v28;
            LODWORD(Timeout) = 0;
            McTemplateK0pqqt_EtwWriteTransfer(v28, &EventUnreset, v24, a2, Timeout, v77, v78);
          }
        }
        v29 = *((_QWORD *)a2 + 1);
        v30 = *v9;
        ++*((_DWORD *)v30 + 1860);
        v30[931] = (ADAPTER_RENDER *)((char *)v30[931] + v29);
      }
      else
      {
        if ( bTracingEnabled )
        {
          v25 = *((_QWORD *)a2 + 1) >> 12;
          if ( (byte_1C00769C1 & 1) != 0 )
          {
            LODWORD(v78) = 1;
            LODWORD(v77) = v25;
            LODWORD(Timeout) = 0;
            McTemplateK0pqqt_EtwWriteTransfer(v25, &EventUnreset, v24, a2, Timeout, v77, v78);
          }
        }
        v26 = *((_QWORD *)a2 + 1);
        v27 = *v9;
        ++*((_DWORD *)v27 + 1856);
        v27[929] = (ADAPTER_RENDER *)((char *)v27[929] + v26);
      }
      v14 = v87;
    }
    KeUnstackDetachProcess(&ApcState);
    LOBYTE(v19) = v83;
  }
  v31 = *((_BYTE *)a2 + 83) != 0 ? v19 : 0;
  v80 = v31;
  v32 = *((_DWORD *)a2 + 19);
  if ( (v32 & 8) == 0 && (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v18) = ((v32 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v18 )
      {
        if ( !*((_QWORD *)a2 + 30) )
        {
          if ( (*v14 & 0x8000000) == 0 )
          {
            WdLogSingleEntry1(1LL, 1537LL);
            v79 = 0LL;
            v78 = 0LL;
            v77 = 0LL;
            Timeout = (PLARGE_INTEGER)1537;
            DxgkLogInternalTriageEvent(v33, 0x40000LL);
            v31 = v80;
          }
          if ( !v31 )
            goto LABEL_57;
          VIDMM_GLOBAL::ResetBackingStore((VIDMM_GLOBAL *)*v9, a2);
          v31 = v80;
        }
      }
    }
  }
  if ( v31 && (**(_DWORD **)v88 & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_74;
    LOBYTE(v18) = ((*((_BYTE *)a2 + 76) & 2) == 0) & ~*((_BYTE *)a4 + 32);
    if ( (_BYTE)v18 )
    {
      if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore((VIDMM_GLOBAL *)*v9, *((_QWORD *)a2 + 1)) >= 0 )
      {
        if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
          VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)*v9, *((_QWORD *)a2 + 1));
        else
          *((_DWORD *)a2 + 19) |= 2u;
      }
      v31 = v80;
    }
  }
LABEL_57:
  if ( a4 && (*((_BYTE *)a4 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v18);
    memset(&v98, 0, 40);
    v34 = 3;
    if ( v80 )
    {
      if ( *((_BYTE *)a2 + 265) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)*v9, a2);
        v35 = *((_QWORD *)a2 + 30);
        v36 = *(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, union _LARGE_INTEGER *, struct _MDL *, struct VIDMM_SEGMENT *))(*(_QWORD *)v35 + 120LL);
        MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
        v36(v35, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange, v77, v78, v79);
        LOBYTE(v38) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 30) + 104LL))(
          *((_QWORD *)a2 + 30),
          a2,
          v38);
        v9 = v94;
      }
      *(_QWORD *)&v98.PhysicalAdapterIndex = a2;
      *(_QWORD *)&v98.VprIndex = this;
      v98.CurrentStartOffset = *((_QWORD *)a2 + 16);
      LODWORD(v98.CurrentSize) = 0;
      v39 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v34 = 2;
    }
    else
    {
      v39 = 0LL;
    }
    KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
    if ( !a5 || (v40 = 3, !*((_BYTE *)a2 + 80)) )
      v40 = 1;
    v41 = VIDMM_GLOBAL::Rotate(
            (__int64)*v9,
            *(_QWORD *)(*((_QWORD *)a4 + 1) + 24LL),
            *((_QWORD *)a4 + 3),
            v34,
            0LL,
            0LL,
            (__int64)v39,
            (__int64)&v98,
            v40,
            (__int64)a2);
    if ( v41 == -1073741558 )
    {
      *v87 |= 0x200000u;
    }
    else if ( v41 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, v34, v41, 0LL);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_132;
  }
LABEL_74:
  if ( v31 )
  {
    v42 = (union _LARGE_INTEGER *)((char *)a2 + 128);
    v95 = (union _LARGE_INTEGER *)((char *)a2 + 128);
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                (VIDMM_GLOBAL **)this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *((struct VIDMM_SEGMENT **)a2 + 15),
                *(union _LARGE_INTEGER *)((char *)a2 + 128),
                &v81,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v43);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, &EventPerformanceWarning, v44, 2);
      v45 = 0;
      v85 = 0;
      if ( (**(_DWORD **)v88 & 8) == 0 && a4 )
      {
        KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState);
        v45 = 1;
        v85 = 1;
      }
      LODWORD(v86) = v45;
      v46 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 15));
      v48 = *((_QWORD *)a2 + 1);
      v49 = v46 != 0 ? 0x10000 : 4096;
      LODWORD(v84) = v49;
      v50 = v48 >> 12;
      v51 = v48 >> 16;
      if ( !v46 )
        v51 = (unsigned int)v50;
      v97 = v51;
      v89 = *v42;
      v52 = 0;
      while ( 1 )
      {
        v83 = v52;
        if ( v52 >= (unsigned int)v51 )
          break;
        v53 = *v9;
        v54 = v49 * v52;
        Size = v49;
        VIDMM_GLOBAL::MemoryTransfer(
          (VIDMM_GLOBAL *)v53,
          a2,
          v49,
          v49 * v52,
          this,
          &v89,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)*v9, a2);
        v89.QuadPart += Size;
        v90 = 0LL;
        v55 = VidMmMapViewOfAllocation(a4, (void **)v54, Size, &v90, 0);
        if ( v55 )
        {
          memmove(v55, *((const void **)this + 32), Size);
          VidMmUnmapViewOfAllocation(a4, v90);
        }
        else
        {
          *v87 |= 0x200000u;
        }
        v52 = v83 + 1;
        v47 = v85;
        LODWORD(v51) = v97;
        v49 = (unsigned int)v84;
      }
      v42 = v95;
      if ( v47 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v18);
    if ( (*v14 & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*v9, a2);
    v42 = (union _LARGE_INTEGER *)((char *)a2 + 128);
  }
  if ( (**(_DWORD **)v88 & 0x20000) != 0 && *((_QWORD *)a2 + 17) )
  {
    memset(&v98, 0, sizeof(v98));
    v98.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v98.SegmentIndex = VIDMM_SEGMENT::DriverId(this);
    v56 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v86 = 0LL;
      v91 = 0LL;
      v82[0] = 0;
      v57 = *((_QWORD *)this + 19);
      v84 = (VIDMM_LINEAR_POOL **)((char *)this + 152);
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           v57,
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v86,
                           (__int64)&v91,
                           (__int64)v82) != -1073741823 )
        goto LABEL_112;
      v84 = (VIDMM_LINEAR_POOL **)((char *)this + 152);
      if ( v86 != v42->QuadPart )
        goto LABEL_112;
      v58 = *((_QWORD *)this + 53);
      v59 = *((_QWORD *)a2 + 17);
      v60 = *(_QWORD *)v59 + *(_QWORD *)(v59 + 8);
      if ( v60 >= v58 )
      {
LABEL_109:
        v60 = *((_QWORD *)this + 53);
      }
      else
      {
        while ( 1 )
        {
          v61 = *(_QWORD *)(v59 + 40);
          if ( v61 == *((_QWORD *)this + 19) + 72LL )
            break;
          v59 = v61 - 40;
          if ( *(_BYTE *)(v59 + 56) != 2 )
            break;
          v60 = *(_QWORD *)v59 + *(_QWORD *)(v59 + 8);
          if ( v60 >= v58 )
            goto LABEL_109;
        }
      }
      v62 = v60 & ~*((_QWORD *)this + 50);
      v86 = v62;
      v63 = *((_QWORD *)this + 52);
      v84 = (VIDMM_LINEAR_POOL **)((char *)this + 152);
      if ( v62 > v63 )
      {
        v98.CurrentStartOffset = v63;
        v98.CurrentSize = *((_QWORD *)this + 54);
        v98.NewStartOffset = v62;
        v98.NewSize = v58 - v62;
        *((_QWORD *)this + 54) = v58 - v62;
        *((_QWORD *)this + 52) = v62;
        v56 = 1;
        v84 = (VIDMM_LINEAR_POOL **)((char *)this + 152);
      }
      else
      {
LABEL_112:
        v56 = 0;
      }
    }
    else
    {
      v98.CurrentStartOffset = v42->QuadPart;
      v98.CurrentSize = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
      v84 = (VIDMM_LINEAR_POOL **)((char *)v91 + 152);
    }
    if ( v56 )
    {
      v64 = operator new(104LL, 0x31356956u, 256LL);
      v65 = (_QWORD *)operator new(48LL, 0x38356956u, 256LL);
      v66 = v65;
      if ( v64 )
      {
        if ( v65 )
        {
          *(_QWORD *)(v64 + 16) = DeferredSetVprCallback;
          *(_QWORD *)(v64 + 32) = DeferredSetVprCompletionCallback;
          *(struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v64 + 56) = v98;
          *(_QWORD *)(v64 + 40) = *v9;
          *(_QWORD *)(v64 + 48) = v65;
          v65[2] = this;
          v65[3] = *((_QWORD *)a2 + 17);
          v65[4] = *((_QWORD *)a2 + 2);
          v65[5] = **((_QWORD **)a2 + 64);
          *(_QWORD *)(v64 + 24) = v64;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)*v9, 0LL);
          VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)*v9, 0, v67, v68);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *v84,
            *((void **)a2 + 17),
            v98.CurrentStartOffset,
            v98.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*v9 + 5142),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v64);
          *((_QWORD *)a2 + 17) = 0LL;
          if ( *((_DWORD *)a2 + 28) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 64), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_132;
        }
        operator delete((void *)v64);
      }
      if ( v66 )
        operator delete(v66);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*v9 + 5142)) )
      {
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v69, &EventPerformanceWarning, v70, 24);
        KeWaitForSingleObject(*v9 + 5148, Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)*v9, 0LL);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)*v9, *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v98);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0qqqxxp_EtwWriteTransfer(
          (__int64)(*v9)[3],
          v71,
          v72,
          v98.PhysicalAdapterIndex,
          v98.SegmentIndex,
          v98.VprIndex,
          v98.NewStartOffset,
          v98.NewSize,
          (char)(*v9)[3]);
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *((ADAPTER_RENDER **)(*v9)[3] + 366),
                  (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v98) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_132:
  *v87 &= ~0x8000000u;
  v73 = v88;
  *(_WORD *)(*(_QWORD *)v88 + 6LL) = 0;
  *(_QWORD *)(*(_QWORD *)v73 + 32LL) = 0LL;
  *((_QWORD *)a2 + 15) = 0LL;
  if ( v81 )
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 30) + 88LL))(
      *((_QWORD *)a2 + 30),
      a2);
  v74 = *v9;
  _InterlockedOr(v75, 0);
  v74[5] = (ADAPTER_RENDER *)((char *)v74[5] + 1);
}
