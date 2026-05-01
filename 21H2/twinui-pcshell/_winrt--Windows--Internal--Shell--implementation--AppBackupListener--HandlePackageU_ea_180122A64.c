/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch$59 @ 0x180122A64
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$Callback_Error@AEAY0DI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1801178F0 (--$Callback_Error@AEAY0DI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CB.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch_59(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 56) = WINRT_WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 32), 0LL);
  v3 = (_DWORD *)winrt::to_hresult(a2 + 168);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[56],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 56));
  return 0LL;
}
