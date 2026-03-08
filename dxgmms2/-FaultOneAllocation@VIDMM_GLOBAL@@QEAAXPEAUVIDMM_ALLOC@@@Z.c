/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093A84
 * Callers:
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00939F8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7CA8 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00EC0C0 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EDCE8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE9F4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FFBDC (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093BA0 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0093E58 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDMM_DEVICE **v9; // rdx
  VIDMM_DEVICE *v10; // r8
  VIDMM_DEVICE *v11; // rax
  VIDMM_DEVICE *v12; // rax
  char v13; // [rsp+20h] [rbp-28h]

  v4 = *(_QWORD *)*a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, 0);
  if ( !*(_DWORD *)(v4 + 144) )
  {
    v6 = *(_DWORD **)(v4 + 536);
    if ( (*v6 & 0x40000000) == 0 && !v6[3] && (**(_DWORD **)(v4 + 536) & 0x20000) == 0 )
    {
      VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v4 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v4, 0LL, 0LL);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v7, &EventMarkAllocation, v5, a2);
      v8 = *(_QWORD *)(v4 + 16);
      ++*((_DWORD *)this + 1816);
      *((_QWORD *)this + 909) += v8;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2[1] + 1) + 112LL) & 2) != 0 && *(_DWORD *)(v4 + 112) == 1 )
  {
    LOBYTE(v5) = 1;
    v13 = 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char, _QWORD))(**(_QWORD **)(v4 + 120) + 48LL))(
      *(_QWORD *)(v4 + 120),
      v4,
      v5,
      0LL,
      v13,
      0LL);
  }
  v9 = a2 + 7;
  v10 = (VIDMM_DEVICE *)((char *)a2[1] + 144);
  if ( (*(_DWORD *)(*(_QWORD *)*a2 + 68LL) & 0x10000000) != 0 )
  {
    v12 = *(VIDMM_DEVICE **)v10;
    if ( *(VIDMM_DEVICE **)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      *v9 = v12;
      a2[8] = v10;
      *((_QWORD *)v12 + 1) = v9;
      *(_QWORD *)v10 = v9;
      goto LABEL_13;
    }
LABEL_16:
    __fastfail(3u);
  }
  v11 = (VIDMM_DEVICE *)*((_QWORD *)a2[1] + 19);
  if ( *(VIDMM_DEVICE **)v11 != v10 )
    goto LABEL_16;
  *v9 = v10;
  a2[8] = v11;
  *(_QWORD *)v11 = v9;
  *((_QWORD *)v10 + 1) = v9;
LABEL_13:
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 1;
}
