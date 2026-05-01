/*
 * XREFs of ?OnAppViewRemoved@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewChangedEventArgs@3456@@Z @ 0x18007F160
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ad2649c1bd26c54604c8d00330738ee___ @ 0x18007F19C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8ad2649c1bd26c54604c8d00330738ee.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewRemoved(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = this;
  v6[0] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ad2649c1bd26c54604c8d00330738ee___(
           v4,
           CurrentThreadId,
           v6);
}
