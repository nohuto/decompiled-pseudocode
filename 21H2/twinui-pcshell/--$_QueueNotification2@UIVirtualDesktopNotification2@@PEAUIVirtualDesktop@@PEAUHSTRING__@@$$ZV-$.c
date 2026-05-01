/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1804A2360
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x1804A20A4 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUH.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002E810 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b319f3d3637979846fb79d489373d85___ @ 0x1804A1EF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b319f3d3637979846fb79d489373d85___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification2__PEAUIVirtualDesktop__PEAUHSTRING______ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification2__EAAJPEAUIVirtualDesktop__PEAUHSTRING_____ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_23__std___Z(
        __int64 a1,
        struct IObjectArray *a2,
        __int64 a3)
{
  int CallbackArray; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(__int64); // [rsp+20h] [rbp-20h] BYREF
  struct IObjectArray *v14; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IObjectArray *v18; // [rsp+68h] [rbp+28h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h]

  v19 = a3;
  v18 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v18);
  v6 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v13 =  ITabletModeController::`vcall'{72,{flat}};
    v14 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    string = *(HSTRING *)a3;
    *(_QWORD *)a3 = 0LL;
    v10 = (__int64 *)(a3 + 8);
    v16 = 0LL;
    if ( &v16 != (__int64 *)(a3 + 8) )
    {
      v16 = *v10;
      *v10 = 0LL;
    }
    v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_0b319f3d3637979846fb79d489373d85___(
            v9,
            v8,
            *(_DWORD *)(a1 + 104),
            &v13);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v6;
  }
  *(_QWORD *)a3 = 0LL;
  return result;
}
