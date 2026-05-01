/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$7 @ 0x180100763
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1976) = *(_QWORD *)(a2 + 2048) + 768LL;
  winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 1976));
}
