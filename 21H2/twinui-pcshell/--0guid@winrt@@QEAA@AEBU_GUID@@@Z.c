/*
 * XREFs of ??0guid@winrt@@QEAA@AEBU_GUID@@@Z @ 0x1800A0F40
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122E30 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122E30.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall winrt::guid::guid(struct _GUID *this, const struct _GUID *a2)
{
  *this = *a2;
  return this;
}
