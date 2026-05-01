/*
 * XREFs of _lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x180369B28
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9_____lambda_e7233f2d7fbbc8c446f08901eacadde9___ @ 0x180367C10 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180369F60 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_180369F60.c)
 */

__int64 __fastcall lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a2 + 8);
  *v4 = 0LL;
  if ( v4 != v5 )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 16));
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 56));
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 64));
  v6 = (_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( a1 + 72 != a2 + 72 )
  {
    *(_QWORD *)(a1 + 72) = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 80));
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 88));
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 96));
  *(_QWORD *)(a1 + 96) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
