/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C6100
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006090 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000613C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015D30 (VidSchMarkDeviceAsError.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C00323B4 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060630 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0067004 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00896C8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008AC88 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2A20 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B45B4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C5F20 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _VIDMM_GLOBAL_ALLOC *v12; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v13; // r15
  _QWORD **v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rcx
  VIDMM_SEGMENT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  char IsNonOverlappingResourceCB; // si
  __int64 v24; // rdx

  if ( a2 && *((_QWORD *)a2 + 25) && *((_QWORD *)a2 + 27) == *((_QWORD *)a2 + 16) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 472, 0LL);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v6, a2);
    v7 = (_QWORD *)((char *)a2 + 136);
    VIDMM_GLOBAL::MemoryTransfer(
      this[1],
      a2,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 16),
      (union _LARGE_INTEGER *)a2 + 17,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 16),
      (union _LARGE_INTEGER *)a2 + 26,
      0LL,
      0);
    if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdAssertion(v11);
      v12 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
      while ( v12 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288) )
      {
        v13 = v12;
        v12 = *(struct _VIDMM_GLOBAL_ALLOC **)v12;
        v14 = (_QWORD **)((char *)v13 - 16);
        v15 = *v14;
        while ( v15 != v14 )
        {
          v16 = *(v15 - 4);
          v15 = (_QWORD *)*v15;
          VidSchMarkDeviceAsError(*(_QWORD *)(v16 + 32));
        }
      }
    }
    v17 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 16);
    *v7 = *((_QWORD *)a2 + 26);
    *(_WORD *)(*((_QWORD *)a2 + 62) + 6LL) = VIDMM_SEGMENT::DriverId(v17);
    *(_QWORD *)(*((_QWORD *)a2 + 62) + 32LL) = *v7 + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 25) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
    {
      ExReleasePushLockExclusiveEx((char *)a2 + 472, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v18);
      v21 = WdLogNewEntry5_WdWarning(v20, v19);
      WdLogEvent5_WdWarning(v21);
      return 3221226166LL;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this[1], *((_DWORD *)a2 + 19) & 0x3F);
    if ( (**((_DWORD **)a2 + 62) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this[1] + 2) + 624LL), a2);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (VIDMM_SEGMENT **)a2);
    ExReleasePushLockExclusiveEx((char *)a2 + 472, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v24);
  }
  return 0LL;
}
