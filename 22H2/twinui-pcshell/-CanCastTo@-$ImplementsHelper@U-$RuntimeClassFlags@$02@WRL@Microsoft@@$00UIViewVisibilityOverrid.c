/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180043090
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrap.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180312118 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VVi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803121AC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1803121AC.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@5Desktop@678@UIViewResourcePolicies@5678@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180349E90 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManag.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r10d
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r11
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  int v10; // r10d

  v3 = *a2;
  if ( *a2 == 2062002469
    && a2[1] == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data2
    && a2[2] == *(_DWORD *)GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4
    && a2[3] == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4[4]
    || (a1 += 8LL, v3 == 905012364)
    && a2[1] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data2
    && a2[2] == *(_DWORD *)GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4
    && a2[3] == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4[4]
    || (a1 += 8LL, v3 == 1935131509)
    && a2[1] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data2
    && a2[2] == *(_DWORD *)GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4
    && a2[3] == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(a2, &GUID_71a3f425_a716_4859_b1a4_1d9044e6a055)
         || InlineIsEqualGUID(v5, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20)
         || InlineIsEqualGUID(v8, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
         || v10 == 3
         && v9[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
         && v9[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
         && v9[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *v6 = v7;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
