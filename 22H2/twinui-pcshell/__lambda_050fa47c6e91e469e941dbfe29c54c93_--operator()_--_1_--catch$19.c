/*
 * XREFs of __lambda_050fa47c6e91e469e941dbfe29c54c93_::operator()_::_1_::catch$19 @ 0x1800A1CF9
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator()_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 552),
    (void *)0x9B6,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    a4);
  return 0LL;
}
