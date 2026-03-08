/*
 * XREFs of ?GenerateDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F6C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GenerateDrawList(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           this,
           a2,
           a3,
           a4);
}
