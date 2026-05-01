/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$153 @ 0x18011F9DE
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompatInfoBackup_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CK@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x180117964 (--$CompatInfoBackup_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221AE4 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch_153(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v3 = a2 + 106;
  if ( (unsigned __int64)a2[109] >= 8 )
    v3 = (__int64 *)a2[106];
  a2[16] = (__int64)v3;
  v4 = (_DWORD *)winrt::to_hresult(a2 + 12);
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[42],winrt::hresult,unsigned short const *>(
    v5,
    v4,
    a2 + 16);
  return 0LL;
}
