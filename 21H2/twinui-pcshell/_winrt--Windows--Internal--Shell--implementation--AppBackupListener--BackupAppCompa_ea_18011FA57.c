/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$152 @ 0x18011FA57
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x180117B78 (--$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch_152(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v3 = a2 + 102;
  if ( (unsigned __int64)a2[105] >= 8 )
    v3 = (__int64 *)a2[102];
  a2[14] = (__int64)v3;
  v4 = (_DWORD *)winrt::to_hresult(a2 + 6);
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const *>(
    v5,
    v4,
    a2 + 14);
  return 0LL;
}
