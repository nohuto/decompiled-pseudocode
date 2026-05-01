/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C1EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800C1D68 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotif.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vector deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
