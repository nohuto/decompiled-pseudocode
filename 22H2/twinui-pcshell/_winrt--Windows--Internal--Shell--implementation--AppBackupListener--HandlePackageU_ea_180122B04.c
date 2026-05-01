/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent_::_1_::catch$23 @ 0x180122B04
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$Callback_Error@AEAY0DF@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DF@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x180117638 (--$Callback_Error@AEAY0DF@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DF@$$CB.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221AE4 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent_::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 48) = WINRT_WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 32), 0LL);
  v3 = (_DWORD *)winrt::to_hresult(a2 + 136);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[53],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 48));
  return 0LL;
}
