/*
 * XREFs of ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180370E98
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x180369AB8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x18036443C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ??$?0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@W4CallbackContext@Platform@@_N@Z @ 0x1803665A4 (--$-0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 *     ??$?0V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@W4CallbackContext@Platform@@_N@Z @ 0x180366A30 (--$-0V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@AnimationCompletedEventHandler@Switcher@Experi.c)
 *     ??0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z @ 0x180369D40 (--0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18037E28C (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall MonitorFrame::DismissAnimated(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  _QWORD *v9; // rbx
  const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+50h]
  RTL_SRWLOCK *v19; // [rsp+D0h] [rbp+58h]
  _QWORD *v20; // [rsp+D8h] [rbp+60h]

  v18 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v18 = v3;
  AcquireSRWLockExclusive(a1 + 23);
  v19 = a1 + 23;
  if ( a1[11].Ptr )
  {
    v17 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v20 = v4;
    v14[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    v14[1] = __abi_winrt_ptr_ctor(v3);
    v5 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler(
           v4,
           (const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)v14);
    v20 = v5;
    v6 = __abi_winrt_ptr_ctor((__int64)v5);
    v20 = (_QWORD *)v6;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v15[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v7 = __abi_winrt_ptr_ctor(v6);
    v15[1] = v7;
    v8 = Windows::UI::Xaml::IWindow::Dispatcher::get(a1[11].Ptr);
    v9 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
            (_lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)v16,
            (const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)v15);
    v11 = Windows::UI::Core::DispatchedHandler::DispatchedHandler(v9, v10);
    v12 = Windows::UI::Core::ICoreDispatcher::RunAsync(v8, 0LL, (__int64)v11);
    v13 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 16LL))(v11, v13);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v13);
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v13);
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))a1->Ptr + 2))(a1, v13);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  }
  if ( a1 != (RTL_SRWLOCK *)-184LL )
    ReleaseSRWLockExclusive(a1 + 23);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
