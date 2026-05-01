/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802F8804
 * Callers:
 *     ?add_TabDropped@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA340 (-add_TabDropped@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU-$ITypedE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180078D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C0F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1802C0F80.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::FtmBase___lambda_731a26e664f686db69b200d2b1fe26bc___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs_____lambda_731a26e664f686db69b200d2b1fe26bc___ @ 0x1802F8D74 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F8D74.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int AgileReference; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+58h] [rbp+38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v15 = &v14;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v15);
  AgileReference = 0;
  v6 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_2e0ae249_7e8f_569a_a07f_b1a7e235f536, a1, v6);
  }
  else
  {
    v7 = (__int64 *)*v4;
    v16 = 0LL;
    *v6 = 0LL;
    v15 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  if ( AgileReference >= 0 )
  {
    v8 = v14;
    v14 = 0LL;
    v16 = v8;
    v9 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::FtmBase___lambda_731a26e664f686db69b200d2b1fe26bc___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs_____lambda_731a26e664f686db69b200d2b1fe26bc___(
                      &v15,
                      &v16);
    v11 = *v9;
    *v9 = 0LL;
    v12 = v15;
    v17 = v11;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
        (__int64)v12,
        v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v11 )
    {
      v17 = 0LL;
      *a2 = v11;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)AgileReference;
}
