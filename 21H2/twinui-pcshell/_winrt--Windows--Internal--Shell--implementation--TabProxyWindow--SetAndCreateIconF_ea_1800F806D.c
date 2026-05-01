/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$57 @ 0x1800F806D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__ResumeCoro_2_::_1_::catch_57(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 776),
    (void *)0x1AD,
    (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
    a4);
  return &loc_1800F7C93;
}
