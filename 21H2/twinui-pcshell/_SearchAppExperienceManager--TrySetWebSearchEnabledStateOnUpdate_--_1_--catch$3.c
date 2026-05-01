/*
 * XREFs of _SearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::catch$3 @ 0x1800AAC64
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 712),
    (void *)0x9C1,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    a4);
  return 0LL;
}
