/*
 * XREFs of ??_EViewSizePreferencesChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x1800C8B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIWindowingEnvironmentSettingsInternal@@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B6BCC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces@UIWin.c)
 */

ViewSizePreferencesChangedEventArgsImpl *__fastcall ViewSizePreferencesChangedEventArgsImpl::`vector deleting destructor'(
        ViewSizePreferencesChangedEventArgsImpl *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
