/*
 * XREFs of ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800AA600
 * Callers:
 *     ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1800A7C54 (-IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801B0FD8 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::Throw_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details::ReportFailure_Win32(this, 161LL, "internal\\shellcommonshell\\inc\\Helpers\\UserHelpers.h");
}
