/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140
 * Callers:
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x18005E0B0 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x180066E50 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 *     _lambda_465f2d06aab28da044c16147e08ff178_::operator() @ 0x180147D38 (_lambda_465f2d06aab28da044c16147e08ff178_--operator().c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180153F98 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x180155840 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18015726C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1801D30E0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1801D8378 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x1801E5300 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180207200 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18020C6F0 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18020C984 (-EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18020D43C (-GetMDMStartLayoutPolicyWithFlags@TaskbarLayoutPolicyManager@@AEAAJW4PMPolicyRequestedDataFlags@.c)
 *     ?SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x180212E30 (-SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x180212E90 (-SetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x180212EE0 (-SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x180212F40 (-SetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x18028A970 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x18028AD80 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?GetIdentifier@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x180294710 (-GetIdentifier@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z.c)
 *     ?GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x180294940 (-GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z.c)
 *     ?LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ @ 0x180295D18 (-LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ.c)
 *     ?SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z @ 0x180297F00 (-SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z @ 0x180297F60 (-SetDesktopLinkPath@PWSLayoutItem@@UEAAJPEBG@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1802D00B0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1802D0B78 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1802ED550 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18038ADCC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x1803B43C8 (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x180403FB0 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x180408D60 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x18040E52C (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z @ 0x180416740 (-GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z @ 0x1804225E0 (-GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z @ 0x18042C010 (-GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z @ 0x18042F8B0 (-GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18043F1F8 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1804885F8 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x180489BE0 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x18048B5C4 (-RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x18049C74C (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x18049D0A4 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18049DE4C (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18049E350 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804A4350 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$CoTa.c)
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804A4570 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$Co.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1804B0E00 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1804B10FC (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x1804D8668 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 *     ?GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2345@@Z @ 0x1804D88F0 (-GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1804E1900 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x1804ED0C0 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180039990 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        LPVOID *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  int v9; // ebp
  _WORD *v10; // rax
  _WORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int16 v14; // cx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  LPVOID v20; // rax

  if ( !a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
    return 0LL;
  }
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(a2 + 2 * v6) );
  if ( a3 == -1LL )
  {
    a3 = v6;
    v5 = v6;
  }
  else if ( a3 < v6 )
  {
    v5 = a3;
  }
  else
  {
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
  }
  v7 = a3 + 1;
  if ( a3 + 1 < a3 )
    return 2147942934LL;
  v8 = (unsigned __int64)a1[2];
  v9 = 0;
  if ( v8 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v8 = (unsigned __int64)a1[1] + 1;
    else
      v8 = 0LL;
    a1[2] = (LPVOID)v8;
  }
  if ( !v8 )
  {
    if ( is_mul_ok(v7, 2uLL) )
    {
      v10 = CoTaskMemAlloc(2 * v7);
      if ( v10 )
      {
        a1[2] = (LPVOID)v7;
        *a1 = v10;
        *v10 = 0;
      }
      else
      {
        v9 = -2147024882;
      }
      goto LABEL_13;
    }
    return 2147942934LL;
  }
  if ( v7 <= v8 )
    goto LABEL_13;
  v16 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    return 2147942934LL;
  v17 = v8;
  v18 = v8 + 2048;
  v19 = v7;
  if ( v17 <= 0x800 )
    v18 = v16;
  if ( v7 <= v18 )
    v19 = v18;
  v20 = CoTaskMemRealloc(*a1, 2 * v19);
  if ( v20 )
  {
    a1[2] = (LPVOID)v19;
    *a1 = v20;
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_13:
  if ( v9 >= 0 )
  {
    v11 = *a1;
    if ( v7 - 1 > 0x7FFFFFFE )
    {
      if ( !v7 )
        goto LABEL_23;
    }
    else if ( v5 <= 0x7FFFFFFE )
    {
      v12 = v5 - v7;
      v13 = a2 - (_QWORD)v11;
      while ( v12 + v7 )
      {
        v14 = *(_WORD *)((char *)v11 + v13);
        if ( !v14 )
          break;
        *v11++ = v14;
        if ( !--v7 )
          goto LABEL_20;
      }
      if ( !v7 )
LABEL_20:
        --v11;
    }
    *v11 = 0;
LABEL_23:
    a1[1] = (LPVOID)v5;
  }
  return (unsigned int)v9;
}
