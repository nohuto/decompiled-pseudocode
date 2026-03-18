/*
 * XREFs of UnlockChildPages @ 0x1C002CF9C
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0091D6C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0094EB0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnlockChildPages(ADAPTER_DISPLAY *a1)
{
  return DxgCoreInterface[94](a1, 0LL);
}
