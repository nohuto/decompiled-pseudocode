/*
 * XREFs of ?RecordStats@CCompositionSurfaceBitmap@@UEAAX_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DA590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::RecordStats(
        CCompositionSurfaceBitmap *this,
        __int64 a2,
        const struct CMILMatrix *a3,
        __int64 a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, const struct CMILMatrix *, __int64))(*(_QWORD *)v4 + 224LL))(
      v4,
      a2,
      a3,
      a4);
}
