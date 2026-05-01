/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x1804A20A4
 * Callers:
 *     ?VirtualDesktopNameChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1804A30B0 (-VirtualDesktopNameChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1804A1CB8 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1804A2360 (--$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification2,IVirtualDesktop *,HSTRING__ *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        HSTRING a4)
{
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  HSTRING string[2]; // [rsp+20h] [rbp-20h] BYREF
  HSTRING v12; // [rsp+30h] [rbp-10h] BYREF
  HSTRING v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  *(_OWORD *)string = 0LL;
  v12 = a4;
  v13 = (HSTRING)a3;
  v7 = AddRefCountWrappers<IVirtualDesktop *,HSTRING__ *>(&v12, (__int64)string);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12 = string[0];
    string[0] = 0LL;
    v13 = string[1];
    string[1] = 0LL;
    v9 = ____QueueNotification2_UIVirtualDesktopNotification2__PEAUIVirtualDesktop__PEAUHSTRING______ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification2__EAAJPEAUIVirtualDesktop__PEAUHSTRING_____ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_23__std___Z(
           a1,
           v8,
           &v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string[1]);
  WindowsDeleteString(string[0]);
  return v9;
}
