/*
 * XREFs of _ViewGroupManager::OnGroupWindowTemplateApplied_::_1_::catch$2 @ 0x1802FBB12
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewGroupManager::OnGroupWindowTemplateApplied_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0xE9,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
    a4);
  return 0LL;
}
