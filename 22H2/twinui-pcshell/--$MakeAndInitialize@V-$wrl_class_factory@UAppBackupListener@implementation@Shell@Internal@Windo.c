/*
 * XREFs of ??$MakeAndInitialize@V?$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180117D24
 * Callers:
 *     ??$CreateClassFactory@V?$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180117AB0 (--$CreateClassFactory@V-$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096EFC (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::AppBackupListener>,winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::AppBackupListener>,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v3;
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::`vftable';
    v6 = 0LL;
    ((void (__fastcall *)(_DWORD *))*(&winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::`vftable'
                                    + 1))(v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return v1;
}
