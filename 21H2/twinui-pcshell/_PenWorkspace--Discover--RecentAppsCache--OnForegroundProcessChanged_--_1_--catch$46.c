/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged_::_1_::catch$46 @ 0x180174769
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged_::_1_::catch_46(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0xA9,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    a4);
  return 0LL;
}
