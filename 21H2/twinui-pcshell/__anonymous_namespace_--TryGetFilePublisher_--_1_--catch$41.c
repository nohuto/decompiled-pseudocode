/*
 * XREFs of __anonymous_namespace_::TryGetFilePublisher_::_1_::catch$41 @ 0x1801433B9
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryGetFilePublisher_::_1_::catch_41(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x1E9,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  return 0LL;
}
