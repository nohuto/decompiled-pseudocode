/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___1_IInspectable___IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___ @ 0x18014E8E0
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___ @ 0x18014E7EC (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____lambda_f55151fab6cd.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008BB98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler@PEAUIInspectable@@@Fo.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___1_IInspectable___IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>((__int64)v4);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = a2[1];
    *v5 = off_180508F08;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
