/*
 * XREFs of ??1?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEAA@XZ @ 0x1800CEB60
 * Callers:
 *     ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x1800CEB88 (--1-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ.c)
 *     ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x18011B7BC (--1folder_change_reader_state@details@wil@@QEAA@XZ.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801249E0 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C310C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$20 @ 0x1803C36C5 (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$22 @ 0x1803C36D1 (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$24 @ 0x1803C36DD (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::~function<void (enum wil::FolderChangeEvent,unsigned short const *)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
