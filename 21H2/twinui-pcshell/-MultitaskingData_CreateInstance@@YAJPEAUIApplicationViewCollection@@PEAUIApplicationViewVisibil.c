/*
 * XREFs of ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FB6A0
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F86A8 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1803FB254 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FB678 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall MultitaskingData_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        MultitaskingData *a14)
{
  MultitaskingData *v14; // rdi
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  MultitaskingData *v20; // rcx
  MultitaskingData *v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF
  __int64 v25; // [rsp+98h] [rbp+28h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+38h] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v24 = a1;
  v14 = a14;
  a14 = 0LL;
  *(_QWORD *)v14 = 0LL;
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a14);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,enum SwitchItemFilterBehavior &>(
          &a14,
          &v24,
          &v25,
          &v26,
          &v27,
          &a5,
          &a6,
          &a7,
          &a8,
          &a9,
          &a10,
          &a11,
          &a12);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = (unsigned int)v15;
    v18 = 184LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
      (const char *)v17);
    goto LABEL_11;
  }
  *(_QWORD *)v14 = 0LL;
  if ( InlineIsEqualGUID(&GUID_992fd7b2_d760_49b8_ad16_359613ec2ae2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v21 = a14;
    *(_QWORD *)v14 = a14;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v21 + 8LL))(v21);
    v16 = 0;
  }
  else if ( InlineIsEqualGUID(v19, v19) )
  {
    v20 = a14;
    v16 = 0;
    *(_QWORD *)v14 = a14;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v20 + 8LL))(v20);
  }
  else
  {
    v16 = -2147467262;
  }
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 186LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a14);
  return (unsigned int)v16;
}
