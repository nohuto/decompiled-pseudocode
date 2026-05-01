/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x18035FFC4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$12 @ 0x18011A8F7 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_18011A8F7.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$3 @ 0x18035FBB6 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_18035FBB6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
