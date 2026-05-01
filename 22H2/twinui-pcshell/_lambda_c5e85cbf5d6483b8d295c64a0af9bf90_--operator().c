/*
 * XREFs of _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator() @ 0x180147DAC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___::Invoke @ 0x180149F70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifica.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800E84DC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?Arguments@?$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801480B0 (-Arguments@-$consume_Windows_UI_Notifications_IToastActivatedEventArgs@UIToastActivatedEventArgs.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180282364 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator()(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  wil::details *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  char v10; // bl
  void *v11; // rdx
  __int64 v12; // rax
  char v13; // bl
  wil::details **v14; // rax
  __int16 v16; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  HSTRING v18[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF

  v18[1] = (HSTRING)a2;
  v18[2] = (HSTRING)a3;
  v6 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
  v7 = 0LL;
  if ( *a3 )
  {
    v19 = 0LL;
    v8 = (**v6)(
           v6,
           &winrt::impl::guid_storage<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::value,
           &v19);
    winrt::check_hresult(v8);
    v17 = v19;
  }
  else
  {
    v17 = 0LL;
  }
  v9 = winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
         &v17,
         v18);
  v10 = winrt::operator==(v9, L"allow");
  winrt::handle_type<winrt::impl::hstring_traits>::close(v18);
  if ( v10 )
  {
    v16 = 257;
  }
  else
  {
    v12 = winrt::impl::consume_Windows_UI_Notifications_IToastActivatedEventArgs<winrt::Windows::UI::Notifications::IToastActivatedEventArgs>::Arguments(
            &v17,
            v18);
    v13 = winrt::operator==(v12, L"deny");
    winrt::handle_type<winrt::impl::hstring_traits>::close(v18);
    if ( !v13 )
      goto LABEL_9;
    v16 = 256;
  }
  **(_WORD **)a1 = v16;
LABEL_9:
  v14 = *(wil::details ***)(a1 + 16);
  if ( v14 )
    v7 = *v14;
  wil::details::SetEvent(v7, v11);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a3);
}
