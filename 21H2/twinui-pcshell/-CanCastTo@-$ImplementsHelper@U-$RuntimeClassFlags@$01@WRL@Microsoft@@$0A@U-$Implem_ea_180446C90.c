/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180446C90
 * Callers:
 *     ??$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180446B8C (--$MakeAndInitialize@VCDesktopPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?CanCastTo@?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CC5C (-CanCastTo@-$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@W.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800479EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabbingAwarePositione.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r8

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = a1;
LABEL_6:
    result = 0LL;
    goto LABEL_20;
  }
  v5 = a1 + 40;
  if ( *a2 == -428157847
    && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = v5;
    goto LABEL_6;
  }
  v6 = v5 + 8;
  if ( *a2 == 1834041537
    && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *a3 = v6;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
LABEL_20:
  if ( (_DWORD)result != -2147467262 )
    return result;
  v7 = a1 + 104;
  if ( *a2 == 2018553963
    && a2[1] == *(_DWORD *)&GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data2
    && a2[2] == *(_DWORD *)GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data4
    && a2[3] == *(_DWORD *)&GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa.Data4[4]
    || *a2 == 684124641
    && a2[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
    && a2[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
    && a2[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
  {
    *a3 = v7;
    return 0LL;
  }
  if ( *a2 == -2146612166
    && a2[1] == *(_DWORD *)&GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data2
    && a2[2] == *(_DWORD *)GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data4
    && a2[3] == *(_DWORD *)&GUID_800d4c3a_a217_4177_b228_04cfef8c1dc3.Data4[4]
    || *a2 == 684124641
    && a2[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
    && a2[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
    && a2[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
  {
    *a3 = v7 + 8;
    return 0LL;
  }
  result = Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             v7 + 16,
             a2,
             a3);
  if ( (int)result < 0 )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::CanCastTo(
             v9 + 8,
             v8,
             v10);
  return result;
}
