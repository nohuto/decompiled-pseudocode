/*
 * XREFs of _lambda_ff18a7cb999efe7aba419e7d47fa9918_::__lambda_ff18a7cb999efe7aba419e7d47fa9918_ @ 0x180013188
 * Callers:
 *     ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180012820 (-ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::_scalar_deleting_destructor_ @ 0x180013140 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180013140.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ff18a7cb999efe7aba419e7d47fa9918_::__lambda_ff18a7cb999efe7aba419e7d47fa9918_(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
