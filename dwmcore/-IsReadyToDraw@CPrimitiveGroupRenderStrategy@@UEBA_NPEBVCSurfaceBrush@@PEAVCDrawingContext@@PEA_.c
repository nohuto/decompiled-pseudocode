/*
 * XREFs of ?IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800192E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CPrimitiveGroupRenderStrategy::IsReadyToDraw(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  *a4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 13) + 192LL))(*((_QWORD *)a2 + 13));
  return 1;
}
