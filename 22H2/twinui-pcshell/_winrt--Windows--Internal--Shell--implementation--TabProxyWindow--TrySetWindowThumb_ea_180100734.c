/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$6 @ 0x180100734
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1968) = *(_QWORD *)(a2 + 2048) + 760LL;
  winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 1968));
}
