/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18035FAD0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x180120FAC (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_180120FAC.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$9 @ 0x1801215E9 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1801215E9.c)
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$2 @ 0x18036016F (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$2.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x1803606B7 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$1.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$12 @ 0x180361376 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_180361376.c)
 *     _Concurrency::details::_Task_impl_unsigned_char_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x1803961DD (_Concurrency--details--_Task_impl_unsigned_char_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x1803963BD (_Concurrency--details--_Task_impl_bool_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$0 @ 0x180397158 (_Concurrency--details--_CancellationTokenState--_DeregisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_RegisterCallback_::_1_::dtor$0 @ 0x180397776 (_Concurrency--details--_CancellationTokenState--_RegisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor$1 @ 0x1803980A2 (_Concurrency--details--_Task_impl_bool_--_SetUnwrappedAsyncOp_--_1_--dtor$1.c)
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x1803987C0 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
