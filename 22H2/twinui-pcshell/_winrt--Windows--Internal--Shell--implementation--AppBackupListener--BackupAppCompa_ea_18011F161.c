/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch$21 @ 0x18011F161
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH$$QEAPEBG@Z @ 0x1801178C0 (--$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD **)(a2 + 64);
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  *(_QWORD *)(a2 + 64) = v2;
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 72) + 12LL);
  *(_DWORD *)(a2 + 40) = v3;
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 40),
    (__int64 *)(a2 + 64));
  return 0LL;
}
