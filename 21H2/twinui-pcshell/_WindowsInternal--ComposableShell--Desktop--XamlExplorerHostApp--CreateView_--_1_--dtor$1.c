/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x180360987
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 32));
}
