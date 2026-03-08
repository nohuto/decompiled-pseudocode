/*
 * XREFs of ?FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B3FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00E3324 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FlushPendingGPUAccess(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        int a3,
        unsigned __int8 a4)
{
  if ( ((_DWORD)this[10] & 0x10) == 0 )
    VIDMM_GLOBAL::FlushAllocationFromProcessorCache(this[1], a2, a3, a4);
}
