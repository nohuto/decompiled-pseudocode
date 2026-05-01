/*
 * XREFs of ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1803498DC
 * Callers:
 *     ?OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180347960 (-OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Ap.c)
 *     ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180347B60 (-OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E98 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180282514 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_41f914f7491f79820808224ba980f32b___ @ 0x1803452FC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_41f914f7491f79820808224ba980f32b.c)
 *     ?StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ @ 0x180348CD0 (-StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18034960C (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::WindowManagerWatcherConnected(WindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  void *v4; // rdx
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    if ( *((_BYTE *)this + 64) )
    {
      *((_BYTE *)this + 256) = 1;
      v8 = this;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_41f914f7491f79820808224ba980f32b___(
        v3,
        CurrentThreadId,
        &v8);
      wil::details::SetEvent(*((wil::details **)this + 33), v4);
    }
    else
    {
      started = WindowManagerBridge::StartAppViewWatcher(this);
      if ( started < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          703LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)started);
        JUMPOUT(0x180349954LL);
      }
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
