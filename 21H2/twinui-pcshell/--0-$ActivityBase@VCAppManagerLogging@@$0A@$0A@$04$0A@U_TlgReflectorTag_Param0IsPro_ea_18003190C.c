/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18003190C
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18002EA40 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0 @ 0x1801D6800 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x1801DAB10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1801DAB10.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1801DC178 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801E24B8 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _lambda_119a9763b6a8c971f47739bbe9fd0d71_::_lambda_119a9763b6a8c971f47739bbe9fd0d71_ @ 0x1801F87B8 (_lambda_119a9763b6a8c971f47739bbe9fd0d71_--_lambda_119a9763b6a8c971f47739bbe9fd0d71_.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801FA6F0 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180013C78 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18002DBB0 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1801D66E8 (--$create@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy_ea_1801D66E8.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1801D7790 (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsP_ea_1801D7790.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *Local; // rcx
  volatile signed __int32 **v6; // rbx
  volatile signed __int32 **v7; // r14
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v10; // rsi

  v2 = a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(a1, 1);
  else
    Local = 0LL;
  *(_QWORD *)v2 = Local;
  if ( Local )
  {
    *(_QWORD *)(v2 + 16) = *Local;
    *Local = v2;
    *(_DWORD *)(v2 + 24) = GetCurrentThreadId();
  }
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  memset_0((void *)(a1 + 136), 0, 0x90uLL);
  *(_QWORD *)(a1 + 296) = 0LL;
  v6 = (volatile signed __int32 **)(a1 + 304);
  *(_QWORD *)(a1 + 304) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v2);
  v7 = (volatile signed __int32 **)(a2 + 38);
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( *v6 )
    {
      if ( _InterlockedExchangeAdd(*v6, 0xFFFFFFFF) == 1 )
      {
        v10 = *v6;
        if ( *v6 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v10 + 2);
          operator delete((void *)v10, (const struct std::nothrow_t *)0x100);
        }
      }
      *v6 = 0LL;
    }
    v8 = *v7;
    *v6 = *v7;
    if ( v8 )
      _InterlockedIncrement(v8);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               a1 + 304,
                               a2 + 7) )
  {
    *(_QWORD *)(a1 + 48) = (unsigned __int64)(*v6 + 2) & -(__int64)(*v6 != 0LL);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 38,
      a1 + 304);
    a2[6] = *(_QWORD *)(a1 + 48);
    a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
