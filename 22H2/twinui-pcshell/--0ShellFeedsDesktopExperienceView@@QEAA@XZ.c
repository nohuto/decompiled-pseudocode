/*
 * XREFs of ??0ShellFeedsDesktopExperienceView@@QEAA@XZ @ 0x1800C1B80
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x1800C15BC (--$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFe.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

ShellFeedsDesktopExperienceView *__fastcall ShellFeedsDesktopExperienceView::ShellFeedsDesktopExperienceView(
        ShellFeedsDesktopExperienceView *this)
{
  ShellFeedsDesktopExperienceView *result; // rax

  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `TwinUI::ShellFeeds::IShellFeedsDesktopNotifications'};
  *((_QWORD *)this + 2) = &ShellFeedsDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ShellFeedsDesktopExperienceView::`vftable';
  *((_QWORD *)this + 1) = &ShellFeedsDesktopExperienceView::`vftable'{for `TwinUI::ShellFeeds::IShellFeedsDesktopNotifications'};
  *((_QWORD *)this + 2) = &ShellFeedsDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 3) = &ShellFeedsDesktopExperienceView::`vftable'{for `TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 4) = &ShellFeedsDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 5) = &ShellFeedsDesktopExperienceView::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 6) = &ShellFeedsDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_OWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  result = this;
  *((_DWORD *)this + 38) = 3;
  *((_WORD *)this + 78) = 0;
  *((_BYTE *)this + 158) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  *((_DWORD *)this + 45) = 82;
  *(GUID *)((char *)this + 184) = GUID_NULL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_DWORD *)this + 53) = 56;
  *(GUID *)((char *)this + 216) = GUID_NULL;
  *((_QWORD *)this + 29) = 0LL;
  *((_BYTE *)this + 240) = 0;
  *((_DWORD *)this + 61) = 57;
  *(GUID *)((char *)this + 248) = GUID_NULL;
  *((_QWORD *)this + 33) = 0LL;
  return result;
}
