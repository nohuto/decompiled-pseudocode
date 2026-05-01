/*
 * XREFs of _AppViewIconLoader::IconLoadedInternal_::_1_::catch$3 @ 0x1803ACCAF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewIconLoader::IconLoadedInternal_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x3E,
                            (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewIconFactory.h",
                            a4);
  return 0LL;
}
