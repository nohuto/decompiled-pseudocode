/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0
 * Callers:
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0087A08 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C009304C (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C009DF24 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B2D08 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0001430 (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001BB36 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C008FC00 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AF5E8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B4384 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00E0FA0 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00EC44C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        void *a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r12
  struct VIDMM_DEVICE *v11; // rsi
  struct VIDMM_ALLOC *v13; // rax
  struct VIDMM_ALLOC *v14; // r15
  bool v15; // zf
  char v16; // cl
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  struct VIDMM_DEVICE *v21; // rax
  struct VIDMM_DEVICE **v22; // rdx
  struct _KTHREAD **v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  struct _VIDSCH_SYNC_OBJECT **v27; // r8
  struct _VIDMM_LOCAL_ALLOC *v28; // rax
  struct VIDMM_ALLOC *v29; // r9
  struct _VIDMM_LOCAL_ALLOC *v30; // rdi
  _DWORD *v31; // r14
  struct VIDMM_ALLOC *v32; // r8
  _DWORD *v33; // rax
  struct _VIDMM_LOCAL_ALLOC *v34; // rdx
  struct _VIDMM_LOCAL_ALLOC **v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // rsi
  HANDLE CurrentProcessId; // rax
  __int64 v45; // rax
  struct VIDMM_ALLOC *v47; // rax
  unsigned int v48; // ecx
  int v49; // r9d
  int v50; // r9d
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  VIDMM_ALLOC *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  struct VIDMM_ALLOC *v60; // rax
  __int64 v61; // r14
  __int64 v62; // rsi
  __int64 CurrentProcess; // rax
  __int64 v64; // r14
  __int64 v65; // rbp
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rcx
  VIDMM_GLOBAL *v79; // rcx
  __int64 *v80; // r8
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 **v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  int Resident; // eax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  char *v91; // rax
  char **v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // [rsp+38h] [rbp-160h]
  unsigned int v95; // [rsp+80h] [rbp-118h]
  struct VIDMM_ALLOC *v96; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v97; // [rsp+90h] [rbp-108h]
  unsigned int v98; // [rsp+94h] [rbp-104h]
  unsigned __int64 v99; // [rsp+98h] [rbp-100h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v100; // [rsp+A0h] [rbp-F8h]
  struct _VIDSCH_SYNC_OBJECT **v101; // [rsp+A8h] [rbp-F0h]
  struct VIDMM_PROCESS_ADAPTER_INFO *v102; // [rsp+B0h] [rbp-E8h]
  char *v103; // [rsp+B8h] [rbp-E0h]
  __int64 v104; // [rsp+C0h] [rbp-D8h]
  __int64 v105; // [rsp+C8h] [rbp-D0h] BYREF
  _DWORD *v106; // [rsp+D0h] [rbp-C8h]
  struct VIDMM_PAGING_QUEUE *v107; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v108; // [rsp+E0h] [rbp-B8h] BYREF
  struct _VIDMM_MULTI_ALLOC *v109; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 *v110; // [rsp+F0h] [rbp-A8h]
  char v111[8]; // [rsp+F8h] [rbp-A0h] BYREF
  DXGPUSHLOCK *v112; // [rsp+100h] [rbp-98h]
  int v113; // [rsp+108h] [rbp-90h]
  _QWORD v114[17]; // [rsp+110h] [rbp-88h] BYREF
  struct VIDMM_ALLOC **v116; // [rsp+1D0h] [rbp+38h]

  v8 = 0LL;
  v95 = 0;
  v98 = 0;
  v11 = a2;
  v97 = 0;
  v104 = 0LL;
  v102 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v54 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v54 + 24) = a3;
    *(_QWORD *)(v54 + 32) = v11;
  }
  *a7 = 0LL;
  if ( !g_IsInternalReleaseOrDbg )
  {
    v13 = (struct VIDMM_ALLOC *)operator new(240LL, 0x33306956u, 64LL);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0xF0uLL);
      KeInitializeEvent((PRKEVENT)v14 + 3, NotificationEvent, 0);
      KeInitializeEvent((PRKEVENT)v14 + 7, SynchronizationEvent, 0);
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)v14 + 29);
      goto LABEL_6;
    }
LABEL_134:
    _InterlockedIncrement(&dword_1C0076788);
    WdLogSingleEntry1(6LL, 4466LL);
    DxgkLogInternalTriageEvent(v93, 262145LL);
    LODWORD(v61) = -1073741801;
    return (unsigned int)v61;
  }
  v55 = (VIDMM_ALLOC *)operator new(288LL, 0x33306956u, 64LL);
  v14 = v55;
  if ( !v55 )
    goto LABEL_134;
  VIDMM_ALLOC::VIDMM_ALLOC(v55);
  *((_DWORD *)v14 + 7) |= 0x20u;
  *((_QWORD *)v14 + 30) = 0LL;
  *((_QWORD *)v14 + 31) = 0LL;
  *((_QWORD *)v14 + 32) = 0LL;
  *((_QWORD *)v14 + 33) = 0LL;
  *((_QWORD *)v14 + 34) = 0LL;
  *((_QWORD *)v14 + 35) = 0LL;
LABEL_6:
  v15 = (*((_DWORD *)this + 1764) & 0x2000) == 0;
  v96 = v14;
  v16 = !v15;
  *((_BYTE *)v14 + 36) = v16 | *((_BYTE *)v14 + 36) & 0xFE;
  v17 = *((_QWORD *)v11 + 2);
  if ( v17 )
  {
    v18 = v17 + 360;
    if ( v18 && *(struct _KTHREAD **)(v18 + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      HIDWORD(v94) = 0;
      DxgkLogInternalTriageEvent(v56, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v50 = *(_DWORD *)(v18 + 24);
        if ( v50 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v20, v50);
      }
      ExAcquirePushLockExclusiveEx(v18, 0LL);
    }
    *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
    v21 = (struct VIDMM_ALLOC *)((char *)v14 + 112);
    v22 = (struct VIDMM_DEVICE **)*((_QWORD *)v11 + 23);
    if ( *v22 != (struct VIDMM_DEVICE *)((char *)v11 + 176) )
      goto LABEL_133;
    *(_QWORD *)v21 = (char *)v11 + 176;
    *((_QWORD *)v14 + 15) = v22;
    *v22 = v21;
    *((_QWORD *)v11 + 23) = v21;
    *(_QWORD *)(v18 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
  }
  v23 = (struct _KTHREAD **)((char *)a3 + 296);
  *((_DWORD *)v14 + 8) ^= (*((_DWORD *)v14 + 8) ^ (4 * *((_DWORD *)a3 + 17))) & 0xFC;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)a3 + 40) == KeGetCurrentThread() )
  {
    if ( *((int *)a3 + 82) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      HIDWORD(v94) = 0;
      DxgkLogInternalTriageEvent(v57, 262146LL);
    }
    ++*((_DWORD *)a3 + 82);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a3 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v49 = *((_DWORD *)a3 + 83);
        if ( v49 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, v49);
      }
      _InterlockedIncrement64((volatile signed __int64 *)a3 + 39);
      ExAcquirePushLockExclusiveEx((char *)a3 + 304, 0LL);
    }
    if ( *((_QWORD *)a3 + 40) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      HIDWORD(v94) = 0;
      DxgkLogInternalTriageEvent(v58, 262146LL);
    }
    if ( *((_DWORD *)a3 + 82) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      HIDWORD(v94) = 0;
      DxgkLogInternalTriageEvent(v59, 262146LL);
    }
    *((_QWORD *)a3 + 40) = KeGetCurrentThread();
    *((_DWORD *)a3 + 82) = 1;
  }
  if ( *((_BYTE *)a3 + 81) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = a3;
    v60 = v96;
    LODWORD(v61) = -1071775482;
    v14 = v96;
    goto LABEL_132;
  }
  v26 = *((unsigned int *)a3 + 19);
  if ( (v26 & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = a3;
    v60 = v96;
    LODWORD(v61) = -1071775470;
    v14 = v96;
    goto LABEL_132;
  }
  v27 = (struct _VIDSCH_SYNC_OBJECT **)*((_QWORD *)a3 + 11);
  v101 = v27;
  if ( (v26 & 4) != 0 )
    v102 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)v27[1] + 2)
                                                 + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  v28 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, *((struct VIDMM_PROCESS **)v11 + 1), a4, a8);
  v100 = v28;
  v30 = v28;
  if ( !v28 )
  {
    v60 = v96;
    LODWORD(v61) = -1071775488;
    v14 = v96;
LABEL_132:
    VIDMM_DEVICE::NotifyAllocationClosed(v11, v60);
    operator delete(v14);
    DXGFASTMUTEX::Release(v23);
    return (unsigned int)v61;
  }
  v31 = (_DWORD *)((char *)v14 + 28);
  v32 = v96;
  v107 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 11);
  *((_QWORD *)v14 + 1) = v11;
  v103 = (char *)v14 + 8;
  *((_QWORD *)v14 + 2) = a6;
  *(_QWORD *)v14 = v28;
  v110 = (__int64 *)((char *)v14 + 16);
  *((_QWORD *)v14 + 12) = *((_QWORD *)a3 + 67);
  v33 = (_DWORD *)*((_QWORD *)a3 + 67);
  v106 = (_DWORD *)((char *)v14 + 28);
  *((_DWORD *)v14 + 7) ^= (*((_DWORD *)v14 + 7) ^ (*v33 >> 26)) & 8;
  if ( !a5
    || (*((_BYTE *)v32 + 24) = 1, v29 = v14, (**((_DWORD **)a3 + 67) & 0x200000) != 0)
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 424LL) & 4) != 0
    && *((_DWORD *)this + 1754) > 1u )
  {
    *((_BYTE *)v32 + 24) = 0;
  }
  *((_QWORD *)v14 + 18) = 0LL;
  *((_QWORD *)v14 + 17) = (char *)v14 + 128;
  v34 = (struct VIDMM_ALLOC *)((char *)v14 + 40);
  *((_QWORD *)v14 + 16) = (char *)v14 + 128;
  v35 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v30 + 6);
  if ( *v35 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v30 + 40) )
LABEL_133:
    __fastfail(3u);
  *(_QWORD *)v34 = (char *)v30 + 40;
  *((_QWORD *)v14 + 6) = v35;
  *v35 = v34;
  *((_QWORD *)v30 + 6) = v34;
  if ( (*((_BYTE *)this + 40936) & 0x10) != 0 )
  {
    if ( (**((_DWORD **)a3 + 67) & 0x10000008) != 0 )
    {
      v51 = *(unsigned int *)(*((_QWORD *)this + 3) + 436LL);
      if ( (v51 & 0x10) != 0 )
      {
        v47 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 49);
      }
      else
      {
        v62 = *((_QWORD *)a3 + 1);
        v96 = 0LL;
        v105 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v51, v34, v32, v29);
        v64 = *((_QWORD *)a3 + 48);
        v65 = CurrentProcess;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        LODWORD(v94) = 2;
        v67 = (*((__int64 (__fastcall **)(__int64, __int64, struct VIDMM_ALLOC **, _QWORD, __int64, __int64 *, char *, __int64, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v64,
                v65,
                &v96,
                0LL,
                v62,
                &v105,
                (char *)a3 + 8,
                v94,
                0,
                4);
        v61 = v67;
        v95 = v67;
        if ( v67 < 0 )
        {
          _InterlockedIncrement(&dword_1C007679C);
          v72 = PsGetCurrentProcess(v69, v68, v70, v71);
          WdLogSingleEntry3(6LL, a3, v72, v61);
          PsGetCurrentProcess(v74, v73, v75, v76);
          DxgkLogInternalTriageEvent(v77, 262145LL);
          v30 = v100;
          v23 = (struct _KTHREAD **)((char *)a3 + 296);
          v11 = a2;
LABEL_118:
          DXGFASTMUTEX::Release(v23);
          goto LABEL_125;
        }
        v47 = v96;
        v23 = (struct _KTHREAD **)((char *)a3 + 296);
        v30 = v100;
        v11 = a2;
        v31 = v106;
      }
    }
    else
    {
      v47 = (struct VIDMM_ALLOC *)*((_QWORD *)v30 + 2);
    }
    *((_QWORD *)v14 + 18) = v47;
  }
  if ( v23[3] != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
  if ( *((int *)v23 + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(v78, 262146LL);
  }
  v15 = (*((_DWORD *)v23 + 8))-- == 1;
  if ( v15 )
  {
    v23[3] = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v101 != (struct _VIDSCH_SYNC_OBJECT **)v107 )
  {
    if ( v30 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 11) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 67) + 4LL) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111, (struct _KTHREAD **)this + 4997, 0);
      DXGPUSHLOCK::AcquireExclusive(v112);
      v80 = (__int64 *)((char *)a3 + 440);
      v113 = 2;
      if ( *((_QWORD *)a3 + 55) )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v79, a3, v102);
        v80 = (__int64 *)((char *)a3 + 440);
      }
      v81 = *((_DWORD *)a3 + 19);
      if ( (v81 & 0x40) != 0 && (v81 & 0x20) != 0 )
      {
        v82 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
        v83 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 1) + 16LL) + 8 * v82) + 424LL;
        v84 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 1) + 16LL) + 8 * v82) + 432LL);
        if ( *v84 != (__int64 *)v83 )
          goto LABEL_133;
        *v80 = v83;
        v80[1] = (__int64)v84;
        *v84 = v80;
        *(_QWORD *)(v83 + 8) = v80;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v111);
    }
  }
  if ( (**((_DWORD **)a3 + 67) & 0x40000000) == 0 )
  {
    v36 = *((_QWORD *)v11 + 3);
    if ( !v36
      || (*(_BYTE *)(v36 + 1903)
       || *(_DWORD *)(v36 + 464) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2820LL) >= 2000)
      && (*((_DWORD *)a3 + 18) & 0x20) == 0 )
    {
      goto LABEL_44;
    }
    v86 = *((_DWORD *)a3 + 17) & 0x3F;
    v99 = 0LL;
    v108 = 0LL;
    v109 = v14;
    v101 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)v103 + 80LL) + 176 * v86);
    Resident = VIDMM_GLOBAL::MakeResident(this, (struct VIDMM_PAGING_QUEUE *)v101, &v109, 1LL, 0, &v99, &v108);
    v95 = Resident;
    if ( Resident == 259 )
    {
      VIDMM_GLOBAL::WaitForFence(this, v101[11], v99);
      v95 = 0;
      goto LABEL_44;
    }
    if ( Resident >= 0 )
      goto LABEL_44;
    LODWORD(v61) = Resident;
    goto LABEL_125;
  }
  if ( (*((_DWORD *)this + 1764) & 2) != 0
    && (**(_DWORD **)(*(_QWORD *)v30 + 536LL) & 0x20000000) != 0
    && v30 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v30 + 88LL) )
  {
    LODWORD(v61) = -1071775487;
LABEL_125:
    memset(v114, 0, 0x58uLL);
    v88 = *((_DWORD *)a3 + 17) & 0x3F;
    LODWORD(v114[0]) = 200;
    v114[2] = v14;
    v89 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)v103 + 80LL) + 176 * v88),
            (struct _VIDMM_DEFERRED_COMMAND *)v114,
            1,
            0LL);
    if ( v89 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v89, 0LL);
    }
    KeWaitForSingleObject((char *)v14 + 72, Executive, 0, 0, 0LL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v23);
    v90 = *((_QWORD *)v14 + 5);
    v91 = (char *)v14 + 40;
    if ( !v90 )
      goto LABEL_131;
    if ( *(char **)(v90 + 8) == v91 )
    {
      v92 = (char **)*((_QWORD *)v14 + 6);
      if ( *v92 == v91 )
      {
        *v92 = (char *)v90;
        *(_QWORD *)(v90 + 8) = v92;
LABEL_131:
        VIDMM_GLOBAL::CloseLocalAllocation(this, v30, 1);
        v60 = v14;
        goto LABEL_132;
      }
    }
    goto LABEL_133;
  }
  v52 = VIDMM_GLOBAL::PinOneAllocation(this, v14, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
  v95 = v52;
  if ( v52 < 0 )
  {
    _InterlockedIncrement(&dword_1C007680C);
    LODWORD(v61) = v52;
    WdLogSingleEntry2(6LL, v14, v52);
    DxgkLogInternalTriageEvent(v85, 262145LL);
    v30 = v100;
    goto LABEL_125;
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v23);
  if ( *((_BYTE *)a3 + 81) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v53) + 24) = a3;
    LODWORD(v61) = -1071775482;
    goto LABEL_118;
  }
  if ( (*((_DWORD *)a3 + 19) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v53) + 24) = a3;
    LODWORD(v61) = -1071775470;
    goto LABEL_118;
  }
  DXGFASTMUTEX::Release(v23);
LABEL_44:
  *v31 |= 0x40u;
  v15 = bTracingEnabled == 0;
  *a7 = v14;
  if ( !v15 )
  {
    v37 = *v110;
    if ( *v110 )
    {
      v98 = *(_DWORD *)(v37 + 16);
      v38 = *(_QWORD *)(v37 + 40);
      if ( v38 )
      {
        v48 = *(_DWORD *)(v38 + 16);
        v104 = *(_QWORD *)(v38 + 48);
        v97 = v48;
      }
    }
    v116 = (struct VIDMM_ALLOC **)*((_QWORD *)v30 + 3);
    if ( (**((_DWORD **)a3 + 67) & 8) != 0 )
      v39 = *((_QWORD *)a3 + 49);
    else
      v39 = *((_QWORD *)v30 + 2);
    v40 = (__int64 *)(v37 + 40);
    if ( v37 )
    {
      if ( *v40 )
        v8 = *(_QWORD *)(*v40 + 56);
      v41 = *v40;
    }
    else
    {
      v41 = 0LL;
    }
    v42 = *((_QWORD *)this + 3);
    v43 = *((_QWORD *)v11 + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        v97,
        &EventCreateDeviceAllocation,
        v104,
        CurrentProcessId,
        v43,
        v42,
        v14,
        a3,
        v41,
        v8,
        v98,
        v97,
        v104,
        v39,
        v116);
  }
  v45 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1920);
  *((_QWORD *)this + 961) += v45;
  return v95;
}
