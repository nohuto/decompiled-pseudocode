/*
 * XREFs of __anonymous_namespace_::TryGetTargetDisplayInformation_::_1_::catch$60 @ 0x1801442BA
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryGetTargetDisplayInformation_::_1_::catch_60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x137,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
