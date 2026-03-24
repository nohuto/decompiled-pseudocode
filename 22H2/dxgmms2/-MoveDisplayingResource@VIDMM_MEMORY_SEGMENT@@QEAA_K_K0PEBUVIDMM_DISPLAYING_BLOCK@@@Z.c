/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C3A98
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C3560 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006090 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000613C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2A20 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B45B4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00C4968 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CD260 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00CD498 (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        struct VIDMM_GLOBAL **this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v9; // r14
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r13
  VIDMM_LINEAR_POOL *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r15d
  unsigned __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v26; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v29[5]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+90h] [rbp+17h]
  __int64 v31; // [rsp+98h] [rbp+1Fh]
  char v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v33 = 0;
  v9 = *(_QWORD *)(v4 + 16) + v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 472, 0LL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 312));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v10, (struct _VIDMM_GLOBAL_ALLOC *)v4);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)this[1] + 1762) & 0x40000) == 0 )
  {
    v13 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v13 + 32) = *((_QWORD *)a4 + 2);
    WdLogEvent5_WdEvent(v13);
    VidMmiMoveAndFlipDisplayingAllocation(
      this[1],
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      *((_QWORD *)a4 + 1),
      *((_QWORD *)a4 + 2));
LABEL_13:
    **(_QWORD **)(v4 + 144) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(v4 + 136) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(*(_QWORD *)(v4 + 496) + 32LL) = (char *)this[3] + *((_QWORD *)a4 + 2);
    v9 = *((_QWORD *)a4 + 2) + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (VIDMM_SEGMENT **)v4);
    goto LABEL_14;
  }
  v14 = *(_QWORD *)(v4 + 16);
  v26 = 0LL;
  v27 = 0LL;
  v15 = 0;
  v29[0] = a2;
  v29[3] = *(unsigned int *)(v4 + 32);
  v29[4] = VidMmiIsSaveableResource;
  v30 = *((_QWORD *)a4 + 2);
  v31 = v14 + v30;
  v29[2] = v14;
  v16 = this[19];
  v29[1] = a3;
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v16,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v29,
              1,
              &v26,
              &v27) >= 0 )
  {
    v22 = v26;
    v21 = v27;
LABEL_11:
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
    v23[3] = *((_QWORD *)a4 + 1);
    v23[4] = v22;
    v23[5] = *((_QWORD *)a4 + 2);
    WdLogEvent5_WdEvent(v23);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, *((_QWORD *)a4 + 1), v22);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, v22, *((_QWORD *)a4 + 2));
    if ( v15 )
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        (unsigned int)this[19],
        v22,
        v21,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)v28,
        (__int64)&v33);
    goto LABEL_13;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v18);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              this[19],
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v29,
              0,
              &v26,
              &v27) >= 0 )
  {
    v21 = v27;
    v22 = v26;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      (unsigned int)this[19],
      v26,
      v27,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)v28,
      (__int64)&v33);
    v15 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_1C00507B8);
  v20 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v20 + 24) = 2963LL;
  WdLogEvent5_WdLowResource(v20);
LABEL_14:
  ExReleasePushLockExclusiveEx(v4 + 472, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 312), v24);
  return v9;
}
