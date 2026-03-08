/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009375C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C009461C (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00958F0 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00B0F30 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B2D08 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B3AD0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001B50 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002CA20 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002DE9C (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002E6AC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C002F2DC (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00865D8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087B28 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0089D40 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0094BC4 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094C0C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     VidSchDestroySyncObject @ 0x1C00AA4A0 (VidSchDestroySyncObject.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF5B8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00E19C0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00E3B3C (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  __int64 v4; // r12
  __int64 v9; // r15
  char v10; // bp
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // r8
  KSPIN_LOCK *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r9d
  char v20; // r11
  __int64 v21; // rdi
  int v22; // r9d
  int *v23; // r14
  __int64 v24; // r8
  int v25; // edx
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  int *v29; // rdi
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  int v34; // r9d
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rdi
  int v39; // ecx
  struct _VIDMM_POOL_BLOCK *v40; // rcx
  int *v41; // r9
  __int64 v42; // rcx
  __int64 i; // rdi
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v47; // [rsp+28h] [rbp-200h]
  int v48; // [rsp+48h] [rbp-1E0h]
  int v49; // [rsp+60h] [rbp-1C8h]
  char v50; // [rsp+100h] [rbp-128h]
  int v51; // [rsp+104h] [rbp-124h]
  int v52; // [rsp+108h] [rbp-120h]
  int v53; // [rsp+10Ch] [rbp-11Ch]
  int v54; // [rsp+110h] [rbp-118h]
  int v55; // [rsp+114h] [rbp-114h]
  int v56; // [rsp+118h] [rbp-110h]
  int v57; // [rsp+11Ch] [rbp-10Ch]
  int v58; // [rsp+120h] [rbp-108h]
  _QWORD v59[12]; // [rsp+150h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v36 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v36 + 24) = a3;
    *(_QWORD *)(v36 + 32) = a2;
  }
  v10 = 0;
  if ( (*((_DWORD *)a3 + 17) & 0x100) == 0 )
  {
    if ( this != (struct _KTHREAD **)-39976LL && this[4998] == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      v47 = 0LL;
      v46 = 1453LL;
      DxgkLogInternalTriageEvent(v37, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4997, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *((_DWORD *)this + 10000);
        if ( v34 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v34);
      }
      ExAcquirePushLockExclusiveEx(this + 4997, 0LL);
    }
    this[4998] = KeGetCurrentThread();
    v13 = (_QWORD *)((char *)a3 + 424);
    v14 = *((_QWORD *)a3 + 53);
    if ( v14 )
    {
      if ( *(_QWORD **)(v14 + 8) != v13 || (v35 = (_QWORD *)*((_QWORD *)a3 + 54), (_QWORD *)*v35 != v13) )
        __fastfail(3u);
      *v35 = v14;
      *(_QWORD *)(v14 + 8) = v35;
      *v13 = 0LL;
    }
    if ( *((_QWORD *)a3 + 55) )
      VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, a3);
    if ( this[5593] == a3 )
      v10 = 1;
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (*((_DWORD *)a3 + 19) & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 15) || *((_QWORD *)a3 + 30) )
    {
      memset(v59, 0, 0x58uLL);
      v33 = *((_DWORD *)a3 + 17) & 0x3F;
      LODWORD(v59[0]) = 112;
      HIDWORD(v59[0]) = v33;
      v59[5] = a3;
      LODWORD(v59[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v59);
      v10 = 0;
    }
    v31 = *(_QWORD *)(*((_QWORD *)a3 + 11) + 40LL);
    if ( (*((_DWORD *)a3 + 19) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore((struct VIDMM_GLOBAL *)this, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 19) &= ~2u;
    }
    v32 = *((_QWORD *)a3 + 11);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v32 + 8), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)(v31 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 11) = 0LL;
  }
  if ( v10 )
  {
    v38 = *this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v38 + 56, 0LL);
    *((_QWORD *)v38 + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v38 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a3);
  if ( (*((_DWORD *)a3 + 19) & 0x20) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, a3, 1);
  VidMmiClosePartition(**((volatile signed __int32 ***)a3 + 64));
  v17 = (KSPIN_LOCK *)*((_QWORD *)a3 + 65);
  if ( v17 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc(v15, v17, a3);
    v39 = _InterlockedDecrement(*((volatile signed __int32 **)a3 + 65));
    if ( v39 )
    {
      if ( v39 < 0 )
      {
        v41 = (int *)*((_QWORD *)a3 + 65);
        v42 = *v41;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v41, v42, 0LL);
      }
    }
    else
    {
      v40 = *(struct _VIDMM_POOL_BLOCK **)(*((_QWORD *)a3 + 65) + 48LL);
      if ( v40 )
        VIDMM_GLOBAL::FreePhysical(v40);
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v40, *((struct _VIDMM_CROSSADAPTER_ALLOC **)a3 + 65));
    }
    *((_QWORD *)a3 + 65) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v18 = *(unsigned __int16 *)(*((_QWORD *)a3 + 67) + 4LL);
    if ( (_WORD)v18 && (byte_1C00769C1 & 1) != 0 )
    {
      LOBYTE(v47) = *((_BYTE *)a3 + 456);
      LOBYTE(v46) = *(_WORD *)(*((_QWORD *)a3 + 67) + 4LL);
      McTemplateK0puu_EtwWriteTransfer(v18, &EventReportOfferAllocation, v16, a3, v46, v47);
    }
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a3 + 17);
      v20 = v19 & 0x3F;
      v21 = *((_QWORD *)a3 + 5);
      v22 = (v19 >> 8) & 1;
      v23 = v21 ? *(int **)(v21 + 24) : 0LL;
      if ( v9 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL) + 80LL);
      }
      else
      {
        v24 = 0LL;
      }
      LOBYTE(v58) = 0;
      LOBYTE(v57) = 0;
      LOBYTE(v56) = 0;
      LOBYTE(v55) = 0;
      LOBYTE(v54) = 0;
      LOBYTE(v53) = 0;
      LOBYTE(v52) = 0;
      LOBYTE(v51) = 0;
      v50 = 0;
      if ( v23 )
      {
        v58 = *v23;
        v57 = v23[1];
        v56 = v23[2];
        v55 = v23[3];
        v54 = v23[4];
        v53 = v23[5];
        v52 = v23[6];
        v51 = v23[7];
        v25 = v23[8];
        v26 = v23[9];
        v50 = v25;
      }
      else
      {
        LOBYTE(v26) = 0;
      }
      if ( (byte_1C00769C1 & 8) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          *((_QWORD *)a3 + 2),
          &EventDestroyAdapterAllocation,
          v24,
          v24,
          v9,
          v4,
          **((_DWORD **)a3 + 67),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v48,
          *((_DWORD *)a3 + 15),
          *((_DWORD *)a3 + 16),
          v49,
          *((_DWORD *)a3 + 14),
          *((_DWORD *)a3 + 100),
          (char)a3,
          v21,
          0,
          v58,
          v57,
          v56,
          v55,
          v54,
          v53,
          v52,
          v51,
          v50,
          v26,
          (*((_DWORD *)a3 + 19) & 2) != 0,
          *((_QWORD *)a3 + 48),
          v20,
          v22);
    }
  }
  this[959] = (struct _KTHREAD *)((char *)this[959] + *((_QWORD *)a3 + 2));
  ++*((_DWORD *)this + 1916);
  v27 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 67) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1948);
    this[975] = (struct _KTHREAD *)((char *)this[975] + v27);
  }
  else
  {
    ++*((_DWORD *)this + 1952);
    this[977] = (struct _KTHREAD *)((char *)this[977] + v27);
  }
  this[5024] = (struct _KTHREAD *)((char *)this[5024] - *((_QWORD *)a3 + 2));
  v28 = *((_QWORD *)a3 + 67);
  if ( v28 )
  {
    if ( *(_QWORD *)(v28 + 24) )
    {
      for ( i = 0LL; i < 16; i += 8LL )
      {
        v44 = *(_QWORD *)(v28 + 24);
        if ( *(_QWORD *)(i + v44) )
        {
          VidSchDestroySyncObject(*(PVOID *)(i + v44));
          *(_QWORD *)(i + *(_QWORD *)(*((_QWORD *)a3 + 67) + 24LL)) = 0LL;
          v28 = *((_QWORD *)a3 + 67);
        }
      }
      operator delete(*(void **)(v28 + 24));
      *(_QWORD *)(*((_QWORD *)a3 + 67) + 24LL) = 0LL;
    }
    v29 = *(int **)(*((_QWORD *)a3 + 67) + 16LL);
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29, 0xFFFFFFFF) == 1 )
      {
        if ( v29[2] )
        {
          v45 = v29[2];
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 42LL, v29, v45, 0LL);
        }
        operator delete(v29);
      }
      *(_QWORD *)(*((_QWORD *)a3 + 67) + 16LL) = 0LL;
    }
  }
  v30 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)a3 + 66);
  if ( v30 )
    SysMmFreeLogicalMemory(*((struct SYSMM_ADAPTER **)this[3] + 28), v30);
  if ( !*((_DWORD *)a3 + 101) )
  {
    operator delete(*((void **)a3 + 67));
    *((_DWORD *)a3 + 17) |= 0x400000u;
    _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(a3);
    operator delete(a3);
  }
}
