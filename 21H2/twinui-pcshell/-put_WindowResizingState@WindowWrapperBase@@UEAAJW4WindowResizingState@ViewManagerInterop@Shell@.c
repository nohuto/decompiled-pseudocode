/*
 * XREFs of ?put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180072E70
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_59e865485dd6116eaaa4eee0212523ff___ @ 0x180072EC8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_59e865485dd6116eaaa4eee0212523ff.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::put_WindowResizingState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)v6 = a1 - 8;
  v7 = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_59e865485dd6116eaaa4eee0212523ff___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x475,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    __debugbreak();
    JUMPOUT(0x18019D674LL);
  }
  return 0LL;
}
