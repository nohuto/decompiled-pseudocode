/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@WRL@Microsoft@@@Details@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803129D0
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWeakReferenceSource@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180312BF0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIViewEventDisp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_f3305f7e_8b9b_41f2_be95_4e832447c357;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_73d6c545_9771_4aba_bb8c_713133ed635a;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_030de2aa_3f4c_47de_9c7b_0bada6462586;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_4637e79c_de03_4aef_8a87_e796659e5e8d;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
