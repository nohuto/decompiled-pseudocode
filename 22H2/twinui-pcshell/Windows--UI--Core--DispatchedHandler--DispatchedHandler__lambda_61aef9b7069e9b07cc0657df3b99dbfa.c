/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_61aef9b7069e9b07cc0657df3b99dbfa___ @ 0x18037E328
 * Callers:
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180381640 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035C898 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0 @ 0x18037EDD8 (_lambda_61aef9b7069e9b07cc0657df3b99dbfa_--_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_61aef9b7069e9b07cc0657df3b99dbfa___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v7; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (_QWORD *)lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0(&v7, a2);
    *v4 = &off_18064BE48;
    lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa__0(a1 + 6, v5);
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
  }
  a1[37] = v4;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return a1;
}
