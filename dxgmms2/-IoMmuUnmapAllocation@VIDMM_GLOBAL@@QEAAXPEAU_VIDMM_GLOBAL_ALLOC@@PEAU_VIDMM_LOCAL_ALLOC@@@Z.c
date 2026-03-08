/*
 * XREFs of ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00E43A4
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086BA0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008CF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::IoMmuUnmapAllocation(VIDMM_GLOBAL *this, void **a2, struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _MDL *FullMDL; // rdi
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( ((_DWORD)a2[9] & 0x400) == 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)a2, a3);
    v6 = *(_DWORD *)a2[67];
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
      LogicalAddress,
      FullMDL,
      (v6 & 0x10) != 0);
  }
}
