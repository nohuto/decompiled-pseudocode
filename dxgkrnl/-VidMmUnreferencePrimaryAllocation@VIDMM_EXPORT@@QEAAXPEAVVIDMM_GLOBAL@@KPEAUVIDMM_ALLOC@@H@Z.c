/*
 * XREFs of ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00519FC
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C019ECA0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_ALLOC *a4)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, struct VIDMM_ALLOC *, _QWORD))(*((_QWORD *)this + 1) + 424LL))(
    a2,
    a3,
    a4,
    0LL);
}
