/*
 * XREFs of ?HasApprovedCustomDuration@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C1AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HasApprovedCustomDuration(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 4);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 280LL))(v1);
  return result;
}
