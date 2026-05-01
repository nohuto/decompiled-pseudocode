/*
 * XREFs of ?GetNavigationLevelForView@WindowManagerBridge@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4NavigationLevel@ViewManagerInterop@Shell@56@@Z @ 0x180347860
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8088ac128f6a40b740480a4497e5982c___ @ 0x1803453E8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8088ac128f6a40b740480a4497e5982c.c)
 */

__int64 __fastcall WindowManagerBridge::GetNavigationLevelForView(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v7; // [rsp+48h] [rbp+10h] BYREF
  enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  *(_DWORD *)a3 = 0;
  *(_QWORD *)&v6 = &v7;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8088ac128f6a40b740480a4497e5982c___(
           v4,
           CurrentThreadId,
           &v6);
}
