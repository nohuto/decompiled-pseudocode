/*
 * XREFs of ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180261164
 * Callers:
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FC0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C380 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18011F158 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2 @ 0x18011FD10 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180125AD8 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _lambda_465f2d06aab28da044c16147e08ff178_::operator() @ 0x180147D38 (_lambda_465f2d06aab28da044c16147e08ff178_--operator().c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1801483C4 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x18014A254 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     WINRT_WindowsCreateStringReference @ 0x180091442 (WINRT_WindowsCreateStringReference.c)
 */

HSTRING *__fastcall winrt::param::hstring::hstring(HSTRING *string, PCWSTR sourceString)
{
  __int64 v3; // rdx

  v3 = -1LL;
  do
    ++v3;
  while ( sourceString[v3] );
  WINRT_WindowsCreateStringReference(sourceString, v3, (HSTRING_HEADER *)(string + 1), string);
  return string;
}
