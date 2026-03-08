/*
 * XREFs of ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D3F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapRenderStrategy::IsReadyToDraw(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *a4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct CDrawingContext *))(**((_QWORD **)a2 + 13) + 56LL))(
          *((_QWORD *)a2 + 13),
          42LL,
          a3) )
    return 1;
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 13) + 104LL);
  if ( v6 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  return v5 != 0;
}
