/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800DA130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, CSurfaceBrush *, struct CDrawingContext *, bool *))this + 14))(
           *((_QWORD *)this + 14),
           this,
           a2,
           a3);
}
