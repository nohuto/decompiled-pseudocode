/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1800C1538
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C3010 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDeskto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x70uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_10e014a2_a194_445e_9cb0_667ae070d5d9;
  v5[2] = GUID_00000038_0000_0000_c000_000000000046;
  v5[3] = GUID_51d5421c_6190_4c6b_93bb_a45a990dddbe;
  v5[4] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v5[5] = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  v5[6] = GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9;
  *a2 = 7;
  *a3 = v5;
  return 0LL;
}
