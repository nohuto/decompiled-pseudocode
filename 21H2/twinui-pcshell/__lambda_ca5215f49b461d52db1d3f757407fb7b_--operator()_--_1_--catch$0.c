/*
 * XREFs of __lambda_ca5215f49b461d52db1d3f757407fb7b_::operator()_::_1_::catch$0 @ 0x18011BADC
 * Callers:
 *     <none>
 * Callees:
 *     ??$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x180117994 (--$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall _lambda_ca5215f49b461d52db1d3f757407fb7b_::operator()_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = (_DWORD *)winrt::to_hresult(a2 + 56);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
    v3,
    v2,
    v4);
  return 0LL;
}
