/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::catch$109 @ 0x18011CE82
 * Callers:
 *     <none>
 * Callees:
 *     ?code@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180101028 (-code@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1801172CC (--$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEA.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x18026434C (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_2_::_1_::catch_109(
        __int64 a1,
        __int64 a2)
{
  const unsigned __int16 *v3; // rax
  const unsigned __int16 *v4; // rax
  const unsigned __int16 *v5; // rax
  _DWORD *v6; // rax

  v3 = winrt::hstring::c_str((winrt::hstring *)(*(_QWORD *)(a2 + 880) + 472LL));
  *(_QWORD *)(a2 + 608) = *(_QWORD *)(a2 + 880) + 280LL;
  *(_QWORD *)(a2 + 616) = v3;
  **(_QWORD **)(a2 + 608) = *(_QWORD *)(a2 + 616);
  v4 = winrt::hstring::c_str((winrt::hstring *)(*(_QWORD *)(a2 + 880) + 464LL));
  *(_QWORD *)(a2 + 624) = *(_QWORD *)(a2 + 880) + 288LL;
  *(_QWORD *)(a2 + 632) = v4;
  **(_QWORD **)(a2 + 624) = *(_QWORD *)(a2 + 632);
  v5 = winrt::hstring::c_str((winrt::hstring *)(*(_QWORD *)(a2 + 880) + 456LL));
  *(_QWORD *)(a2 + 640) = *(_QWORD *)(a2 + 880) + 296LL;
  *(_QWORD *)(a2 + 648) = v5;
  **(_QWORD **)(a2 + 640) = *(_QWORD *)(a2 + 648);
  *(_QWORD *)(a2 + 664) = *(_QWORD *)(a2 + 880) + 280LL;
  *(_QWORD *)(a2 + 672) = *(_QWORD *)(a2 + 880) + 288LL;
  *(_QWORD *)(a2 + 680) = *(_QWORD *)(a2 + 880) + 296LL;
  *(_QWORD *)(a2 + 656) = *(_QWORD *)(a2 + 880) + 304LL;
  v6 = winrt::hresult_error::code(*(_QWORD *)(a2 + 832), *(_DWORD **)(a2 + 656));
  CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
    (__int64)L"Event-driven App Backup failed with error.",
    v6,
    *(__int64 **)(a2 + 680),
    *(__int64 **)(a2 + 672),
    *(__int64 **)(a2 + 664));
  return &loc_18011CB43;
}
