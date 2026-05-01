/*
 * XREFs of ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x1803651DC
 * Callers:
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180364D68 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     Platform::Details::__abi_FunctorCapture__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8__void_::Invoke @ 0x1803653E0 (Platform--Details--__abi_FunctorCapture__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18035EAC8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHostWindow::ChangeVisibilityHelper(
        XamlExplorerHostWindow *this,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  char v4; // bp
  __int64 v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64 *); // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax

  v4 = a2;
  v5 = Windows::UI::Xaml::Window::Current::get((__int64)this, a2, a3, a4);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
  {
    v7 = __abi_winrt_cast_to(0, v6, (__int64)&_uuidof__AUIWindowPrivate_Xaml_UI_Windows__);
    v8 = __abi_winrt_ptr_ctor(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v9 = *(_QWORD *)v8;
    if ( v4 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 72))(v8);
      if ( v10 < 0 )
      {
        __abi_WinRTraiseException(v10);
        __debugbreak();
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(v9 + 64))(v8);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v6)[2])(v6);
}
