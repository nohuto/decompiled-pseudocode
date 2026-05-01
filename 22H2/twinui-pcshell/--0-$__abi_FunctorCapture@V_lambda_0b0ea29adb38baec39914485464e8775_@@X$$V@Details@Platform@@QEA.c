/*
 * XREFs of ??0?$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@QEAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@@Z @ 0x18036A71C
 * Callers:
 *     ??$?0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@W4CallbackContext@Platform@@_N@Z @ 0x1803662D4 (--$-0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z @ 0x180369A70 (--0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_0b0ea29adb38baec39914485464e8775_,void,>::__abi_FunctorCapture<_lambda_0b0ea29adb38baec39914485464e8775_,void,>(
        _QWORD *a1,
        const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a1 = &Platform::Details::__abi_FunctorCapture<_lambda_0b0ea29adb38baec39914485464e8775_,void,>::`vftable';
  _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
    (_lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)(a1 + 1),
    a2);
  v4 = *((_QWORD *)a2 + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
