/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C1F00
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801658E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_1801658E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801658F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_1801658F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180165900 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_180165900.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180165910 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_180165910.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180165920 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_180165920.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180165930 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShel_ea_180165930.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009534C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 64);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
