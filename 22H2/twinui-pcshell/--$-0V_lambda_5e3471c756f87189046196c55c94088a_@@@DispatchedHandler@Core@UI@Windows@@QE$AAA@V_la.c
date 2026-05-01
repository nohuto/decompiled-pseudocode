/*
 * XREFs of ??$?0V_lambda_5e3471c756f87189046196c55c94088a_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_5e3471c756f87189046196c55c94088a_@@W4CallbackContext@Platform@@_N@Z @ 0x18036643C
 * Callers:
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x18036EFD4 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035C898 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v8[0] = (__int64)(a1 + 5);
  if ( a1 != (_QWORD *)-40LL )
  {
    v8[0] = *a2;
    v5 = v8[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    *v4 = &Platform::Details::__abi_FunctorCapture<_lambda_5e3471c756f87189046196c55c94088a_,void,>::`vftable';
    a1[6] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  a1[37] = v4;
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
