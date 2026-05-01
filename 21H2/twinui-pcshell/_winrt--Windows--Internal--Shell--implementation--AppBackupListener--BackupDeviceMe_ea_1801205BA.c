/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$64 @ 0x1801205BA
 * Callers:
 *     <none>
 * Callees:
 *     ?code@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180101198 (-code@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ??$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z @ 0x180117CDC (--$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_2_::_1_::catch_64(
        __int64 a1,
        _QWORD *a2)
{
  int *v2; // rax

  a2[51] = a2[76] + 160LL;
  v2 = winrt::hresult_error::code(a2[70], (_DWORD *)a2[51]);
  CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(
    (__int64)L"Event-driven App DeviceMetaData Backup failed with error.",
    v2);
  return &loc_180120292;
}
