/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A6BA0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7EBC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00E16DC (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E38C0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E6990 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00A7A48 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A83EC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B42DC (VidSchiResumeFlipQueues.c)
 *     VidSchSignalPagingFences @ 0x1C00B57E0 (VidSchSignalPagingFences.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00E7D9C (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C010919C (VidSchWaitForPagingFence.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        PRKEVENT Event,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  bool v6; // r15
  unsigned int i; // edi
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD **v16; // r14
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rbp
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  bool *v27; // [rsp+20h] [rbp-38h]
  bool v28; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v28 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  if ( a2 == -1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
    {
      v12 = 0;
      v13 = 1616LL * i;
      v14 = *((_QWORD *)this + 5028);
      if ( *(_DWORD *)(v14 + v13 + 32) )
      {
        do
        {
          v15 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v12 + *(_DWORD *)(v14 + v13 + 28)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 152LL))(v15);
          v14 = *((_QWORD *)this + 5028);
          ++v12;
        }
        while ( v12 < *(_DWORD *)(v14 + v13 + 32) );
      }
      VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, i);
    }
  }
  else
  {
    v17 = *((_QWORD *)this + 5028);
    v18 = 0;
    v19 = 1616LL * a2;
    if ( *(_DWORD *)(v19 + v17 + 32) )
    {
      do
      {
        v20 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v18 + *(_DWORD *)(v19 + v17 + 28)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20);
        v17 = *((_QWORD *)this + 5028);
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v17 + v19 + 32) );
    }
    if ( a4 )
    {
      VIDMM_GLOBAL::SignalMonitoredFence(this, a2, a6, a5, &v28);
      v6 = v28;
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, a2);
  }
  v16 = (_QWORD **)((char *)this + 44712);
  if ( *v16 != v16 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    v21 = *v16;
    while ( v21 != v16 )
    {
      v22 = (_QWORD *)*v21;
      v23 = v21 - 38;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v24 = (_QWORD *)v21[1], (_QWORD *)*v24 != v21) )
        __fastfail(3u);
      *v24 = v22;
      v22[1] = v24;
      *v21 = 0LL;
      v21 = v22;
      if ( (*((_DWORD *)v23 + 15) & 7) != 0 )
      {
        v25 = v23[4];
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 63LL, v23, v25, 0LL);
      }
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v23);
    }
  }
  if ( *((_BYTE *)this + 44728) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), 0xFFFFFFFFLL);
    *((_BYTE *)this + 44728) = 0;
  }
  if ( !a4 || v6 )
  {
    if ( Event )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
      KeSetEvent(Event, 0, 0);
    }
  }
  else
  {
    LODWORD(v27) = a2;
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &a6, &a5);
    if ( a2 == -1 )
    {
      v26 = *((_DWORD *)this + 1754);
      if ( v26 > 1 )
        VidSchWaitForPagingFence(
          *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
          a6,
          a5,
          (unsigned int)((1 << v26) - 1),
          v27);
    }
  }
  *((_QWORD *)this + 879) = 0LL;
  *((_QWORD *)this + 880) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
