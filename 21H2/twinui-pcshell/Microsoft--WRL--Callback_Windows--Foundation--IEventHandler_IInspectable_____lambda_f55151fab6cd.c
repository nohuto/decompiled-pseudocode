/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___ @ 0x18014E95C
 * Callers:
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180078C9C (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___1_IInspectable___IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___ @ 0x18014EA50 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_18014EA50.c)
 */

volatile int **__fastcall Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___(
        volatile int **a1)
{
  volatile int **v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile int **)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___1_IInspectable___IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      v4,
      v3);
  }
  return a1;
}
