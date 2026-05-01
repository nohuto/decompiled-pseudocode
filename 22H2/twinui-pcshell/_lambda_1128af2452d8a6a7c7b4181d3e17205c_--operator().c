/*
 * XREFs of _lambda_1128af2452d8a6a7c7b4181d3e17205c_::operator() @ 0x1800C87A8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1800C9240 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1800C9240.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800C78A0 (_lambda_fa229aea017a19cbc9cb3db68405d883_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1802BB094 (--$try_query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA-A.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1128af2452d8a6a7c7b4181d3e17205c_::operator()(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  unsigned int v5; // edi
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v9 = 0;
  if ( a3 != 1 )
  {
    v8 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v6(a2, &GUID_00000036_0000_0000_c000_000000000046, &v8);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(*a1, &v8);
  if ( v8 )
    v5 = lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
           (struct wil::details::IFailureCallback *)(*a1 + 16LL),
           *(_QWORD *)(*a1 + 8LL),
           v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return v5;
}
