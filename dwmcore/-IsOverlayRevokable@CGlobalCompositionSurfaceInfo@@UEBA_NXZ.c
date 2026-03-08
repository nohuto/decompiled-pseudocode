/*
 * XREFs of ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180257F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRevokable(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 26);
  result = 1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 80LL))(v1);
  return result;
}
