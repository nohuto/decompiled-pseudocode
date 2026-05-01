/*
 * XREFs of ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802F977C
 * Callers:
 *     ?add_TabTransferCanceled@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA400 (-add_TabTransferCanceled@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU.c)
 *     ?add_TabTransferCompleted@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA450 (-add_TabTransferCompleted@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEA.c)
 *     ?add_TabTransferReceiving@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA4A0 (-add_TabTransferReceiving@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEA.c)
 *     ?add_TabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA4F0 (-add_TabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050CD0 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802F8A04 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@Composab_ea_1802F8A04.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::ShellTabId>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        _QWORD *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v7; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::ShellTabId>>(
         a2,
         (__int64 *)&v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1,
             v8,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v7;
}
