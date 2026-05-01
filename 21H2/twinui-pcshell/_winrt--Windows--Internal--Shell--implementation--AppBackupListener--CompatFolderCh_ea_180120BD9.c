/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch$29 @ 0x180120BD9
 * Callers:
 *     <none>
 * Callees:
 *     ??$Callback_Error@AEAY0CO@$$CBGUhresult@winrt@@AEAPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@AEAPEBG@Z @ 0x180117704 (--$Callback_Error@AEAY0CO@$$CBGUhresult@winrt@@AEAPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch_29(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  v3 = (_DWORD *)winrt::to_hresult(a2 + 48);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const * &>(
    v4,
    v3,
    (__int64 *)(a2 + 56));
  return 0LL;
}
