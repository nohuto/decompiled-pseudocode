/*
 * XREFs of ??$?0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@W4CallbackContext@Platform@@_N@Z @ 0x1803665A4
 * Callers:
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180370E98 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035CB68 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z @ 0x180369D40 (--0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z.c)
 *     ??0?$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@QEAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@@Z @ 0x18036A9EC (--0-$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler(
        _QWORD *a1,
        const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *a2)
{
  _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
           (_lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)v9,
           a2);
    v5 = Platform::Details::__abi_FunctorCapture<_lambda_0b0ea29adb38baec39914485464e8775_,void,>::__abi_FunctorCapture<_lambda_0b0ea29adb38baec39914485464e8775_,void,>(
           a1 + 5,
           v4);
  }
  a1[37] = v5;
  v6 = *((_QWORD *)a2 + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
