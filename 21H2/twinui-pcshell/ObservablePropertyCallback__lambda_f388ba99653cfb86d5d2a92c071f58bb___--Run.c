/*
 * XREFs of ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x180403D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIVoiceAssistantPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801D04A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801D04A4.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x18040353C (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180404600 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 */

__int64 __fastcall ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  SwitchItemFilteredCollection *v4; // r10
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v6 = v2;
  if ( v2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IVoiceAssistantPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IInputHostLayoutChanges,IAppSwitcherNotification,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer>::InternalAddRef(
      v2,
      a2);
    SwitchItemFilteredCollection::_ApplyFilterToItem(v4, *(struct IObservableItem **)(v3 + 24), 0);
  }
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v6);
}
