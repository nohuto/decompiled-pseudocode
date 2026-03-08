/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800E6B6C
 * Callers:
 *     ?Draw@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A1F0 (-Draw@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, char *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(**((_QWORD **)this - 11) + 88LL))(
           *((_QWORD *)this - 11),
           (char *)this - 200,
           a2,
           a3,
           a4);
}
