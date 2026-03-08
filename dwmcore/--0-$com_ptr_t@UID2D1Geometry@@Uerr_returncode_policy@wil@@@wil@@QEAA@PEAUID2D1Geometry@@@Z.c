/*
 * XREFs of ??0?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801F3060
 * Callers:
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x180202078 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
