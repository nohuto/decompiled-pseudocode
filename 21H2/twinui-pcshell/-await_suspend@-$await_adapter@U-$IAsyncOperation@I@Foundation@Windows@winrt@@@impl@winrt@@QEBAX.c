/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D5244
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1500 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1500.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1804D0C48 (--$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA-AU-$com_ptr@UICon.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_suspend(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+18h] BYREF

  winrt::capture<winrt::impl::IContextCallback,int (*)(winrt::guid const &,void * *),>((LPVOID *)&v12);
  v4 = *a1;
  v10 = a2;
  v5 = v12;
  v12 = 0LL;
  v11 = v5;
  v13 = &v10;
  v6 = operator new(0x20uLL);
  v6[1] = v10;
  v7 = v11;
  v11 = 0LL;
  v6[2] = v7;
  *((_DWORD *)v6 + 6) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>,_lambda_6db4ebbdf38e00e5e14b8dc39eeb8db6_>::`vftable';
  v13 = v6;
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v4 + 48LL))(*v4, v6);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
}
