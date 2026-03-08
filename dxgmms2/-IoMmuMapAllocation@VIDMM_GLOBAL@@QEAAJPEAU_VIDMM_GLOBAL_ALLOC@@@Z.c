/*
 * XREFs of ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E42FC
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F690 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FDE0C (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

int __fastcall VIDMM_GLOBAL::IoMmuMapAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *FullMDL; // rsi
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    return 0;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  if ( FullMDL )
  {
    v6 = **((_DWORD **)a2 + 67);
    LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a2 + 66));
    return SysMmMapIommuRange(
             *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
             LogicalAddress,
             FullMDL,
             (v6 & 0x10) != 0);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return -1073741801;
  }
}
