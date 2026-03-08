/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C009E640
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009728C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x1C00F152C (VidMmAllocateVirtualMemoryFromPartition.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, unsigned __int8 *a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int VirtualMemoryFromPartition; // eax
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  _QWORD *v31; // rcx
  int v32; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+70h] [rbp+8h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h] BYREF

  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((int *)this + 16);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      v8 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
      v9 = *((_QWORD *)v8 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
      *((_QWORD *)this + 12) = *(_QWORD *)(v9 + 1576) + (unsigned int)dword_1C007647C;
      v10 = (_QWORD *)((char *)this + 104);
      v11 = *(_QWORD **)(v9 + 1552);
      if ( *v11 != v9 + 1544 )
        __fastfail(3u);
      *v10 = v9 + 1544;
      *((_QWORD *)this + 14) = v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 1552) = v10;
      if ( !_InterlockedExchange((volatile __int32 *)(v9 + 1536), 1) && !*(_DWORD *)(v9 + 1584) )
        KeSetTimer((PKTIMER)(v9 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v9 + 1440));
      v12 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
      if ( (__int64)(v12 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v12)) < 0
        && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      if ( dword_1C0076490 && *((_DWORD *)this + 20) <= 1u && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), 3LL);
      if ( (byte_1C00769C2 & 2) != 0 )
      {
        LODWORD(v42) = 3;
        LODWORD(v41) = *((_DWORD *)this + 16);
        McTemplateK0pqq_EtwWriteTransfer(v13, &EventRecycleRangeTransition, v14, this, v41, v42);
      }
      v15 = *((_QWORD *)this + 9);
      v16 = *(_QWORD **)(v15 + 136);
      if ( v16 )
      {
        v36 = *v16 + 144LL * v16[1];
        *(_DWORD *)v36 = 2;
        *(_QWORD *)(v36 + 8) = this;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v36 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v15 + 136) + 8LL);
        v37 = *(_QWORD *)(v15 + 136);
        if ( *(_QWORD *)(v37 + 8) == *(_QWORD *)(v37 + 48) )
        {
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v15 + 136) + 16LL) = 1;
        }
      }
      *((_DWORD *)this + 16) = 3;
    }
    else if ( (_DWORD)v5 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, this);
      if ( dword_1C0076490 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 1);
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 0LL, v5, 0LL);
    }
    goto LABEL_36;
  }
  v6 = *((_QWORD *)this + 4);
  v43 = *((_QWORD *)this + 5) - v6;
  v7 = **(_DWORD **)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(v7 - 9) <= 1 )
  {
    if ( !dword_1C0076490 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
      goto LABEL_32;
    goto LABEL_71;
  }
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    if ( v7 == 2 || v7 == 8 )
      v17 = 4;
    else
      v17 = 1028;
    v44 = v6;
    if ( DXGPROCESS::GetCurrent()
      && (v18 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0
      && (v19 = *(_QWORD *)(v18 + 8)) != 0
      && (v20 = *(_QWORD *)(v19 + 296), v20 != -1) )
    {
      VirtualMemoryFromPartition = VidMmAllocateVirtualMemoryFromPartition(
                                     v20,
                                     (unsigned int)&v44,
                                     (unsigned int)&v43,
                                     4096,
                                     v17);
    }
    else
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      VirtualMemoryFromPartition = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *, int, int))VirtualMemoryInterface)(
                                     -1LL,
                                     &v44,
                                     0LL,
                                     &v43,
                                     4096,
                                     v17);
    }
    v23 = VirtualMemoryFromPartition;
    if ( VirtualMemoryFromPartition < 0 )
    {
      _InterlockedIncrement(&dword_1C0076870);
      WdLogSingleEntry1(6LL, VirtualMemoryFromPartition);
      DxgkLogInternalTriageEvent(v38, 262145LL);
      return v23;
    }
    if ( dword_1C0076490 && *((_DWORD *)this + 20) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( bTracingEnabled )
    {
      v24 = *((_QWORD *)this + 9);
      v25 = *(_QWORD *)(v24 + 32);
      v26 = (unsigned int)(*(_DWORD *)v25 - 3) <= 3 ? *(_QWORD *)(v24 + 56) : *((_QWORD *)this + 4);
      v27 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL);
      if ( (byte_1C00769C1 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v27,
          &EventCreateProcessAllocationDetails,
          v26,
          *(_DWORD *)(v27 + 8),
          (char)this,
          v43,
          v26);
    }
    goto LABEL_32;
  }
  if ( dword_1C0076490 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
  {
LABEL_71:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
LABEL_32:
  WdLogSingleEntry3(4LL, this, *((int *)this + 16), 1LL);
  if ( (byte_1C00769C2 & 2) != 0 )
  {
    LODWORD(v42) = 1;
    LODWORD(v41) = *((_DWORD *)this + 16);
    McTemplateK0pqq_EtwWriteTransfer(v28, &EventRecycleRangeTransition, v29, this, v41, v42);
  }
  v30 = *((_QWORD *)this + 9);
  v31 = *(_QWORD **)(v30 + 136);
  if ( v31 )
  {
    v39 = *v31 + 144LL * v31[1];
    *(_DWORD *)v39 = 2;
    *(_QWORD *)(v39 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v39 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v30 + 136) + 8LL);
    v40 = *(_QWORD *)(v30 + 136);
    if ( *(_QWORD *)(v40 + 8) == *(_QWORD *)(v40 + 48) )
    {
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v30 + 136) + 16LL) = 1;
    }
  }
  *((_DWORD *)this + 16) = 1;
LABEL_36:
  v32 = *((_DWORD *)this + 20);
  if ( !v32 )
  {
    *((_DWORD *)this + 20) = 1;
LABEL_38:
    *((_BYTE *)this + 84) = 0;
    return 0LL;
  }
  v34 = v32 - 1;
  if ( !v34 )
    goto LABEL_38;
  v35 = v34 - 1;
  if ( v35 )
  {
    if ( v35 == 1 )
      *((_BYTE *)this + 84) = *a3;
    return 0LL;
  }
  *((_DWORD *)this + 20) = 3;
  *((_BYTE *)this + 84) = *a3;
  return 0LL;
}
