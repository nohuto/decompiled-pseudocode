/*
 * XREFs of ??$DoInvoke@V_lambda_e6e0eff2c801ccf50926d67388532b90_@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_e6e0eff2c801ccf50926d67388532b90_@@@Z @ 0x1800464BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___::Run @ 0x180046430 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___--Run.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_e6e0eff2c801ccf50926d67388532b90_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_e6e0eff2c801ccf50926d67388532b90_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18003ACB0 (--$InvokeDelegates@V_lambda_e6e0eff2c801ccf50926d67388532b90_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A21F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_e6e0eff2c801ccf50926d67388532b90_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // esi
  volatile int *v6; // rbx
  volatile int *v7; // r10
  volatile int *v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v5 = 0;
  v6 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
    v6 = v7;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v6 )
  {
    v10 = *a2;
    v5 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_e6e0eff2c801ccf50926d67388532b90_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
           (_QWORD **)&v10,
           v6,
           (__int64)a1);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 3), v8) )
    {
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v5;
}
