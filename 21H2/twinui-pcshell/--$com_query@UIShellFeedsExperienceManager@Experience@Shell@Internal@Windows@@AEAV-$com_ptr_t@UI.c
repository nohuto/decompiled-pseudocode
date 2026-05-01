/*
 * XREFs of ??$com_query@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x180102200
 * Callers:
 *     ?NotifyApplyUserSizePreference@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJH@Z @ 0x180102920 (-NotifyApplyUserSizePreference@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windo.c)
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1801029D0 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@.c)
 *     ?NotifyNewLockscreenContent@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRING__@@@Z @ 0x180102A80 (-NotifyNewLockscreenContent@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@W4ShellFeedsButtonInteraction@9456@PEAUHSTRING__@@@Z @ 0x180102B30 (-NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRING__@@@Z @ 0x180102C00 (-Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRIN.c)
 *     ?PrelaunchTimerTicked@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180102CB0 (-PrelaunchTimerTicked@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@.c)
 *     ?SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@URect@Foundation@6@@Z @ 0x180104FE0 (-SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*a2 + 24LL))(
         *a2,
         &GUID_ffd43d83_d648_426a_a559_f402d64882b3,
         a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18010224ALL);
  }
  return a1;
}
