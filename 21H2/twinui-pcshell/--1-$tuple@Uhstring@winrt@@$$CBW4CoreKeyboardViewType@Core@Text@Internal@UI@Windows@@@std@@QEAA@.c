/*
 * XREFs of ??1?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@XZ @ 0x18011AED0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2 @ 0x18011D490 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$2 @ 0x1803BAD11 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$4 @ 0x1803BAD1D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$6 @ 0x1803BAD29 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$8 @ 0x1803BAD35 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$8.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$10 @ 0x1803BAD41 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$10.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$12 @ 0x1803BAD4D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$12.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$14 @ 0x1803BAD59 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$14.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$16 @ 0x1803BAD65 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$16.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$18 @ 0x1803BAD71 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$18.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$20 @ 0x1803BAD7D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$20.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$22 @ 0x1803BAD89 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::~tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        HSTRING *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}
