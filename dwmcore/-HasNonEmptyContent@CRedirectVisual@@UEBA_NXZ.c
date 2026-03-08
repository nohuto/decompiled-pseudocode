/*
 * XREFs of ?HasNonEmptyContent@CRedirectVisual@@UEBA_NXZ @ 0x18001F1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CRedirectVisual::HasNonEmptyContent(CRedirectVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 32);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 192LL))(v1) == 0;
}
