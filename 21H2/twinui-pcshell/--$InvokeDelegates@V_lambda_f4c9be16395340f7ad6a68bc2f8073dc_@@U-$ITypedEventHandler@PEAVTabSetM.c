/*
 * XREFs of ??$InvokeDelegates@V_lambda_f4c9be16395340f7ad6a68bc2f8073dc_@@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_f4c9be16395340f7ad6a68bc2f8073dc_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180309700
 * Callers:
 *     ??$DoInvoke@V_lambda_f4c9be16395340f7ad6a68bc2f8073dc_@@@?$EventSource@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f4c9be16395340f7ad6a68bc2f8073dc_@@@Z @ 0x1803095A4 (--$DoInvoke@V_lambda_f4c9be16395340f7ad6a68bc2f8073dc_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051594 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800519A0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_f4c9be16395340f7ad6a68bc2f8073dc_,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>>(
        _QWORD **a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v5; // edi
  volatile int *v6; // rdx
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  struct IUnknown **i; // rsi
  unsigned int v10; // eax
  __int64 v11; // rcx
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v13; // eax
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v15, a2);
  v7 = (_QWORD *)v15[0];
  v8 = *(__int64 **)(v15[0] + 32);
  for ( i = *(struct IUnknown ***)(v15[0] + 16); i != (struct IUnknown **)v7[3]; ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
            *i,
            (**a1 + 120LL) & -(__int64)(**a1 != 0LL),
            *a1[1]);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled(v11) )
      {
        v15[1] = *v8;
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        v13 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v13 = v5;
        v5 = v13;
        v7 = (_QWORD *)v15[0];
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    ++v8;
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details *)((char *)v7 + 12),
                        v6) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 24LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
