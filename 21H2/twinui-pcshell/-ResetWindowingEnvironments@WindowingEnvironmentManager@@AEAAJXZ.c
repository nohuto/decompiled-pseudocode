/*
 * XREFs of ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x180354E44
 * Callers:
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180354F38 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z @ 0x180355570 (-v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___ @ 0x180353528 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8.c)
 *     ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x1803549C0 (-EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ.c)
 */

__int64 __fastcall WindowingEnvironmentManager::ResetWindowingEnvironments(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  WindowingEnvironmentManager::EnsureLockHeldExclusive(this + 18);
  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___(
         v3,
         CurrentThreadId,
         &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      296LL,
      (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return 0LL;
}
