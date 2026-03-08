/*
 * XREFs of ?BeginNewStatsInstance@CCompositionSurfaceBitmap@@UEAAXPEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800E1F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::BeginNewStatsInstance(
        CCompositionSurfaceBitmap *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64, const struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)v2 + 208LL))(v2, a2);
}
