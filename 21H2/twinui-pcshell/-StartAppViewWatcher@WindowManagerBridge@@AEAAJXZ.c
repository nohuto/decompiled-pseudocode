/*
 * XREFs of ?StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ @ 0x180348CD0
 * Callers:
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1803498DC (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea8b004af850712ada260145121a0cb1___ @ 0x1803457A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ea8b004af850712ada260145121a0cb1.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18034924C (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::StartAppViewWatcher(WindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ea8b004af850712ada260145121a0cb1___(
         v2,
         CurrentThreadId,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
