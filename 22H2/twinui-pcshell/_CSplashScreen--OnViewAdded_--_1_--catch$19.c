/*
 * XREFs of _CSplashScreen::OnViewAdded_::_1_::catch$19 @ 0x180175252
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSplashScreen::OnViewAdded_::_1_::catch_19(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x37,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return 0LL;
}
