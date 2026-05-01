/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18006B6D8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003FB90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExpe.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@67@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@67@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180276458 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180276458.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r10
  unsigned int v4; // r8d
  __int64 v5; // r11
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _QWORD *v8; // r10
  __int64 v9; // r11

  v3 = a3;
  if ( *a2 == -189734543
    && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = 0;
    v5 = a1 + 8;
    if ( *a2 == -1572387332
      && a2[1] == *(_DWORD *)&GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data2
      && a2[2] == *(_DWORD *)GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data4
      && a2[3] == *(_DWORD *)&GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data4[4]
      || InlineIsEqualGUID(a2, &GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7)
      || (v5 += 8LL, *v7 == 1337586361)
      && v7[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
      && v7[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
      && v7[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
    {
      *v3 = v5;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9) )
    {
      *v8 = v9 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v4;
  }
}
