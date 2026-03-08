/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C002C900
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[62](this, a2);
}
