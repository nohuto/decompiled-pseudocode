/*
 * XREFs of ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA?AUIPackageCatalog@ApplicationModel@Windows@2@XZ @ 0x180128128
 * Callers:
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18011AE84 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x18011AEC4 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18011AEC4.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18011AF04 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18011AF04.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801291D0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_storage<winrt::Windows::ApplicationModel::IPackageCatalog>::value,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
