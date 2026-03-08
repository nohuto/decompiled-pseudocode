/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00F9B1C
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00F9610 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8028 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E9808 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00FC2F8 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C0101EF0 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C0102128 (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 */

unsigned __int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        struct VIDMM_GLOBAL **this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  unsigned __int64 v9; // r14
  struct _KTHREAD **v10; // r12
  VIDMM_GLOBAL *v11; // rcx
  unsigned __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r12d
  unsigned __int64 v17; // r14
  unsigned __int64 v19; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v21[5]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+88h] [rbp+Fh]
  __int64 v23; // [rsp+90h] [rbp+17h]
  char v24; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+6Fh]
  char v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v25 = a2;
  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v26 = 0;
  v9 = *(_QWORD *)(v4 + 16) + v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 504, 0LL);
  v10 = (struct _KTHREAD **)(v4 + 296);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 296));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v11, (struct _VIDMM_GLOBAL_ALLOC *)v4);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)this[1] + 1764) & 0x40000) == 0 )
  {
    v12 = (unsigned __int64 *)((char *)a4 + 16);
    WdLogSingleEntry2(4LL, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2));
    VidMmiMoveAndFlipDisplayingAllocation(
      this[1],
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      *((_QWORD *)a4 + 1),
      *((_QWORD *)a4 + 2));
LABEL_14:
    **(_QWORD **)(v4 + 136) = *v12;
    *(_QWORD *)(v4 + 128) = *v12;
    *(_QWORD *)(*(_QWORD *)(v4 + 536) + 32LL) = (char *)this[3] + *v12;
    v9 = *v12 + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (VIDMM_SEGMENT **)v4);
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(v4 + 16);
  v21[0] = v25;
  v21[3] = *(unsigned int *)(v4 + 32);
  v21[4] = VidMmiIsSaveableResource;
  v21[1] = a3;
  v12 = (unsigned __int64 *)((char *)a4 + 16);
  v22 = *((_QWORD *)a4 + 2);
  v23 = v13 + v22;
  v24 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21[2] = v13;
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              this[19],
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v21,
              1,
              &v19,
              &v20) >= 0 )
  {
    v17 = v19;
    v16 = v20;
    goto LABEL_11;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v14);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              this[19],
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v21,
              0,
              &v19,
              &v20) >= 0 )
  {
    v16 = v20;
    v17 = v19;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      (unsigned int)this[19],
      v19,
      v20,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)&v24,
      (__int64)&v26);
    v24 = 1;
LABEL_11:
    WdLogSingleEntry3(4LL, *((_QWORD *)a4 + 1), v17, *v12);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, *((_QWORD *)a4 + 1), v17);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, v17, *v12);
    if ( v24 )
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        (unsigned int)this[19],
        v17,
        v16,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)&v24,
        (__int64)&v26);
    v10 = (struct _KTHREAD **)(v4 + 296);
    goto LABEL_14;
  }
  _InterlockedIncrement(&dword_1C00768D8);
  WdLogSingleEntry1(6LL, 2978LL);
  DxgkLogInternalTriageEvent(v15, 262145LL);
LABEL_15:
  ExReleasePushLockExclusiveEx(v4 + 504, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v10);
  return v9;
}
