/*
 * XREFs of ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x1800C15DC
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78D4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDesktopNotifications@ShellFeeds@TwinUI@@VIShellFeedsDesktopExperienceView@56@UIImmersiveWindowMessageNotification@@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800C1498 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIShellFeedsDeskt.c)
 *     ??0ShellFeedsDesktopExperienceView@@QEAA@XZ @ 0x1800C1BA0 (--0ShellFeedsDesktopExperienceView@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C55E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800C56EC (-RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellFeedsDesktopExperienceView,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IServiceProvider * &,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification * &>(
        _QWORD *a1,
        struct IServiceProvider **a2,
        struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification **a3)
{
  void *v6; // rax
  int v7; // edi
  ShellFeedsDesktopExperienceView *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  ShellFeedsDesktopExperienceView *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = ShellFeedsDesktopExperienceView::ShellFeedsDesktopExperienceView((ShellFeedsDesktopExperienceView *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = ShellFeedsDesktopExperienceView::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>>(
             (__int64)v8,
             &GUID_51d5421c_6190_4c6b_93bb_a45a990dddbe,
             a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v8);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return (unsigned int)v7;
}
