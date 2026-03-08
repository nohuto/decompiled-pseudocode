/*
 * XREFs of VidMmTryCloseAllocation @ 0x1C00178D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A2440 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 */

__int64 __fastcall VidMmTryCloseAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _KEVENT **a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  return VIDMM_GLOBAL::CloseAllocation(a1, a2, 1u, 0LL, a4, a3);
}
