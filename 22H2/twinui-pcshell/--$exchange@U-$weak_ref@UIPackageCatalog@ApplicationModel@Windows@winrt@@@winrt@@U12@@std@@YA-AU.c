/*
 * XREFs of ??$exchange@U?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@U12@@std@@YA?AU?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180119BA4
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801291D0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18008A204 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 *__fastcall std::exchange<winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>,winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, a3);
  return a1;
}
