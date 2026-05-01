/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBU02@@Z @ 0x18021D7F8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C380 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(
        winrt::param::hstring *this,
        const struct winrt::hstring *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  return this;
}
