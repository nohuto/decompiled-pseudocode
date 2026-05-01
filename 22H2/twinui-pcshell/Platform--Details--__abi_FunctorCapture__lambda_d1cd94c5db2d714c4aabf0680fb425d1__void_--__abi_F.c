/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_ @ 0x18038EB4C
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1___ @ 0x18038DE3C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0 @ 0x18038EADC (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *a1 = &off_18064D460;
  lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0(a1 + 1, a2);
  v4 = a2[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return a1;
}
