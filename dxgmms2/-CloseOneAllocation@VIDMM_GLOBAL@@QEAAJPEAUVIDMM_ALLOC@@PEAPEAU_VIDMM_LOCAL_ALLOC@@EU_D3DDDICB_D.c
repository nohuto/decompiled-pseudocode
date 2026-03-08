/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0
 * Callers:
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0087A08 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009375C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00958F0 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A2440 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00B0F30 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B2D08 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B3AD0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089160 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008AC70 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008B25C (-WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00AE4B0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00B0BA4 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 *v6; // rax
  int v7; // r15d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KEVENT **v23; // rdx
  struct VIDMM_ALLOC **v24; // rcx
  __int64 *v25; // rdi
  __int64 v26; // r13
  bool v27; // zf
  __int64 v28; // rdx
  __int64 **v29; // rcx
  __int64 v30; // rdx
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *v32; // r15
  struct _LIST_ENTRY *v33; // r15
  struct _LIST_ENTRY *v34; // r12
  __int64 v35; // rbp
  struct _LIST_ENTRY *v36; // rdi
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v38; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _LIST_ENTRY **v42; // rax
  struct _LIST_ENTRY *v43; // rdx
  struct _LIST_ENTRY *v44; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // r9d
  __int64 v54; // rax
  struct _LIST_ENTRY *v55; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v57; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  __int64 v59; // rcx
  int v60; // r9d
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 Blink_low; // rcx
  struct _LIST_ENTRY *v66; // [rsp+80h] [rbp-C8h]
  __int64 v67; // [rsp+88h] [rbp-C0h]
  __int64 v68; // [rsp+90h] [rbp-B8h]
  __int64 v69; // [rsp+A0h] [rbp-A8h]
  _QWORD v70[12]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+158h] [rbp+10h]
  unsigned int v72; // [rsp+160h] [rbp+18h]

  v6 = *(__int64 **)&a2->Header.Lock;
  v7 = 0;
  v72 = 0;
  Flink = a2->Header.WaitListHead.Flink;
  v66 = Flink;
  v12 = *v6;
  v71 = 0;
  v68 = 0LL;
  v67 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v54 = WdLogNewEntry5_WdTrace(this);
    Flink = v66;
    *(_QWORD *)(v54 + 24) = a2;
  }
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v72 = (unsigned int)Blink[1].Flink;
      v15 = Blink[2].Blink;
      if ( v15 )
      {
        v71 = (unsigned int)v15[1].Flink;
        v68 = (__int64)v15[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v12 + 536) & 8) != 0 )
      v16 = *(_QWORD *)(v12 + 392);
    else
      v16 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v67 = v16;
  }
  v17 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v17 & 1) == 0 )
  {
    v46 = a2->Header.WaitListHead.Flink;
    if ( v46 && v46[1].Blink || (*(_DWORD *)(v12 + 76) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v12 + 76) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_13;
      }
      a2[1].Header.SignalState |= 4u;
      LODWORD(a2[1].Header.WaitListHead.Flink) = v17 | 1;
    }
    else
    {
      v50 = a2[1].Header.SignalState | 4;
      a2[1].Header.SignalState = v50;
      if ( (v50 & 3) == 1 )
      {
        v55 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        if ( v55->Blink != &a2[2].Header.WaitListHead )
          goto LABEL_119;
        v57 = a2[2].Header.WaitListHead.Blink;
        if ( v57->Flink != p_WaitListHead )
          goto LABEL_119;
        v57->Flink = v55;
        v55->Blink = v57;
        a2[1].Header.SignalState &= 0xFFFFFFFC;
        Flink = v66;
        a2[2].Header.WaitListHead.Blink = 0LL;
        p_WaitListHead->Flink = 0LL;
      }
      if ( (*(_DWORD *)(v12 + 68) & 0x100) != 0 && (struct _KEVENT *)Flink[16].Flink == a2 )
        Flink[16].Flink = 0LL;
    }
    KeSetEvent(a2 + 3, 0, 0);
  }
LABEL_13:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    WdLogSingleEntry2(4LL, a2, -1071775486LL);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingOperations(this, (struct _VIDMM_GLOBAL_ALLOC *)v12);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a2;
  v19 = *(_QWORD *)&a2[6].Header.Lock;
  if ( v19 )
  {
    if ( (**(_DWORD **)(v12 + 536) & 0x10000008) != 0 )
    {
      v48 = **(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v48, v19);
    }
    *(_QWORD *)&a2[6].Header.Lock = 0LL;
  }
  if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                      *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                                      *(_DWORD *)(v12 + 68) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
    }
    else
    {
      memset(v70, 0, 0x58uLL);
      v20 = *((_QWORD *)this + 5049);
      v70[0] = -4294967175LL;
      v70[2] = a2;
      VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        this,
        (struct _VIDMM_SYSTEM_COMMAND *)v70,
        *(struct VIDMM_PAGING_QUEUE **)(v20 + 88),
        *(struct _VIDSCH_SYNC_OBJECT **)(176LL * *(unsigned int *)(*(_QWORD *)(v20 + 88) + 144LL)
                                       + *(_QWORD *)(v20 + 88)
                                       + 152),
        1);
    }
  }
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v12 + 320) == KeGetCurrentThread() )
  {
    if ( *(int *)(v12 + 328) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(v59, 262146LL);
    }
    ++*(_DWORD *)(v12 + 328);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v60 = *(_DWORD *)(v12 + 332);
        if ( v60 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventBlockThread, v22, v60);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 312));
      ExAcquirePushLockExclusiveEx(v12 + 304, 0LL);
    }
    if ( *(_QWORD *)(v12 + 320) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(v61, 262146LL);
    }
    if ( *(_DWORD *)(v12 + 328) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v62, 262146LL);
    }
    *(_QWORD *)(v12 + 320) = KeGetCurrentThread();
    *(_DWORD *)(v12 + 328) = 1;
  }
  v23 = (struct _KEVENT **)a2[1].Header.WaitListHead.Blink;
  if ( v23[1] != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_119;
  v24 = *(struct VIDMM_ALLOC ***)&a2[2].Header.Lock;
  if ( *v24 != (struct VIDMM_ALLOC *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_119;
  *v24 = (struct VIDMM_ALLOC *)v23;
  v23[1] = (struct _KEVENT *)v24;
  v25 = *(__int64 **)&a2->Header.Lock;
  if ( !a3 )
    v7 = 1;
  v26 = *v25;
  v69 = v25[3];
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = *((unsigned int *)v25 + 9);
  if ( !v7 )
  {
    *(_DWORD *)(v26 + 76) |= 1u;
    ++*((_DWORD *)v25 + 18);
    ++*(_DWORD *)(v26 + 404);
  }
  v27 = (*((_DWORD *)v25 + 9))-- == 1;
  if ( v27 )
  {
    if ( *((int *)v25 + 19) > 0 )
    {
      v47 = -*((_DWORD *)v25 + 19);
      if ( (int)(v47 + _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 360), v47)) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
      }
    }
    if ( (*(_DWORD *)(v26 + 76) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v25, v7 != 0);
    --*(_DWORD *)(v26 + 288);
    v28 = v25[7];
    if ( *(__int64 **)(v28 + 8) != v25 + 7 )
      goto LABEL_119;
    v29 = (__int64 **)v25[8];
    if ( *v29 != v25 + 7 )
      goto LABEL_119;
    *v29 = (__int64 *)v28;
    *(_QWORD *)(v28 + 8) = v29;
    if ( *(_DWORD *)(v26 + 112) )
    {
      v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25[1] + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                      + 48LL)
          + 296LL * (*(_DWORD *)(v26 + 68) & 0x3F);
      v52 = *(_QWORD *)(v26 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v26 + 120) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v51 + 240) -= v52;
      else
        *(_QWORD *)(v51 + 232) -= v52;
    }
    v30 = *v25;
    if ( (**(_DWORD **)(*v25 + 536) & 0x20000000) != 0
      && v25 == *(__int64 **)(v30 + 88)
      && (*(_DWORD *)(v30 + 76) & 4) == 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 26LL, v25, 0LL, 0LL);
    }
    if ( v7 )
    {
      *((_BYTE *)v25 + 32) |= 4u;
      operator delete(v25);
    }
  }
  if ( *(struct _KTHREAD **)(v12 + 320) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v12 + 296, 0LL, 0LL);
  if ( *(int *)(v12 + 328) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(v63, 262146LL);
  }
  v27 = (*(_DWORD *)(v12 + 328))-- == 1;
  if ( v27 )
  {
    *(_QWORD *)(v12 + 320) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 304, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !bTracingEnabled )
    goto LABEL_60;
  v31 = a2->Header.WaitListHead.Blink;
  if ( v31 )
  {
    v32 = v31[2].Blink;
    if ( v32 )
    {
      v33 = v32[3].Blink;
      goto LABEL_55;
    }
  }
  v33 = 0LL;
  if ( v31 )
  {
LABEL_55:
    v34 = v31[2].Blink;
    goto LABEL_56;
  }
  v34 = 0LL;
LABEL_56:
  v35 = *((_QWORD *)this + 3);
  if ( v66 )
    v36 = v66[1].Blink;
  else
    v36 = 0LL;
  CurrentProcessId = PsGetCurrentProcessId();
  if ( (byte_1C00769C1 & 8) != 0 )
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      v71,
      &EventDestroyDeviceAllocation,
      v68,
      CurrentProcessId,
      v36,
      v35,
      a2,
      v12,
      v34,
      v33,
      v72,
      v71,
      v68,
      v67,
      v69);
LABEL_60:
  *((_QWORD *)this + 963) += *(_QWORD *)(v12 + 16);
  ++*((_DWORD *)this + 1924);
  v38 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( v38 )
  {
    p_Blink = &v38[22].Blink;
    if ( v38 != (struct _LIST_ENTRY *)-360LL && (struct _KTHREAD *)v38[23].Flink == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(v64, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *((_DWORD *)p_Blink + 6);
        if ( v53 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, &EventBlockThread, v41, v53);
      }
      ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
    }
    p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v42 = &a2[4].Header.WaitListHead.Blink;
    v43 = a2[4].Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)v43->Blink == &a2[4].Header.WaitListHead.Blink )
    {
      v44 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock;
      if ( (struct _LIST_ENTRY **)v44->Flink == v42 )
      {
        v44->Flink = v43;
        v43->Blink = v44;
        *(_QWORD *)&a2[5].Header.Lock = 0LL;
        *v42 = 0LL;
        p_Blink[1] = 0LL;
        ExReleasePushLockExclusiveEx(p_Blink, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_68;
      }
    }
LABEL_119:
    __fastfail(3u);
  }
LABEL_68:
  if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
  {
    Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 56LL, a2, Blink_low, 0LL);
  }
  operator delete(a2);
  return 0LL;
}
