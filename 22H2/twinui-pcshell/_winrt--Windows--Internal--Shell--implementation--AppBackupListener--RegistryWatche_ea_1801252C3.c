/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch$28 @ 0x1801252C3
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$Callback_Error@AEAY0CL@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1801174F0 (--$Callback_Error@AEAY0CL@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CB.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221AE4 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch_28(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 72) = WINRT_WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 48), 0LL);
  v3 = (_DWORD *)winrt::to_hresult(a2 + 184);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[43],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 72));
  return 0LL;
}
