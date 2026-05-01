/*
 * XREFs of wistd::__function::__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__clone @ 0x1801B1710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl__SEB_EVENT_HEADER_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_180500738;
  *a2 = &off_180500738;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
