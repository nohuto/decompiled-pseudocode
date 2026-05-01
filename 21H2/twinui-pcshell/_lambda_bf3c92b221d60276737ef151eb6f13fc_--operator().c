/*
 * XREFs of _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180364D68
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_::Invoke @ 0x1803653D0 (Platform--Details--__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18035EAC8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x1803651DC (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bf3c92b221d60276737ef151eb6f13fc_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  XamlExplorerHostWindow *v8; // rcx
  RTL_SRWLOCK *v9; // rbx

  v5 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v6 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, 0LL);
  if ( v7 < 0 )
  {
    __abi_WinRTraiseException(v7);
    __debugbreak();
  }
  XamlExplorerHostWindow::ChangeVisibilityHelper(v8, 1);
  v9 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 96LL);
  AcquireSRWLockShared(v9);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 64LL));
  if ( v9 )
    ReleaseSRWLockShared(v9);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
