/*
 * XREFs of ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0089D40
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086BA0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F690 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B3F58 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C0032E8C (McTemplateK0x_EtwWriteTransfer.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0089DFC (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C008A90C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  int v6; // eax
  struct _VIDMM_MDL *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v3 = a3;
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 4) == 0 || (**((_DWORD **)a2 + 67) & 0x4000) != 0 )
  {
    v6 = *((_DWORD *)a2 + 18);
    if ( (v6 & 0x400) == 0 && (v6 & 0x2000) == 0 )
    {
      if ( !a3 )
        v3 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
      v7 = (struct _VIDMM_MDL *)*((_QWORD *)a2 + 12);
      if ( v7 )
      {
        VidMmiUnlockAllocation(v7);
        *((_QWORD *)a2 + 12) = 0LL;
      }
      if ( --*((_DWORD *)a2 + 91) < 0 )
        DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a2, 0LL, 0LL, 1);
      if ( !*((_DWORD *)a2 + 91) )
      {
        VIDMM_GLOBAL::UnlockAllocation(this, v3, 0LL, *((_QWORD *)a2 + 1), 0, 1);
        if ( bTracingEnabled )
        {
          if ( (byte_1C00769C1 & 0x10) != 0 )
            McTemplateK0x_EtwWriteTransfer(v10, v9, v11, a2);
        }
      }
    }
  }
}
