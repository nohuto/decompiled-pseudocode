/*
 * XREFs of VidMmBeginCPUAccess @ 0x1C0016F30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00B188C (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 */

__int64 __fastcall VidMmBeginCPUAccess(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  return VIDMM_GLOBAL::BeginCPUAccess(a1, a2, a3, a4, a5, a6, a7);
}
