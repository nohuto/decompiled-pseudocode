/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00E77D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8028 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDBD0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SaveResourceCB(
        VIDMM_SEGMENT *this,
        struct _VIDMM_LOCAL_ALLOC **a2,
        bool *a3,
        void *a4)
{
  VIDMM_GLOBAL *v6; // rcx
  __int64 v7; // r8
  struct _VIDMM_LOCAL_ALLOC *v8; // rbx
  struct _VIDMM_LOCAL_ALLOC *v9; // rdi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((struct _VIDMM_GLOBAL_ALLOC *)a2) )
  {
    WdLogSingleEntry1(4LL, a2);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2 + 63, 0LL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 37));
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)v6, &EventVidMmSaveResource, v7, a2);
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v6, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    v8 = a2[15];
    v9 = a2[16];
    VIDMM_MEMORY_SEGMENT::TransferToSystem(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 1u, a2[11], 1);
    a2[25] = v8;
    a2[24] = v9;
  }
  return 0LL;
}
