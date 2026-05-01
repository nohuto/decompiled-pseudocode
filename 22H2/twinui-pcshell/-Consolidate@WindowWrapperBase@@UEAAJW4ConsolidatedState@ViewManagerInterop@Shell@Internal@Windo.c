/*
 * XREFs of ?Consolidate@WindowWrapperBase@@UEAAJW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18034E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dfc07bd0e0e493ac674bd395c585ee89___ @ 0x18034CEB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dfc07bd0e0e493ac674bd395c585ee89.c)
 */

__int64 __fastcall WindowWrapperBase::Consolidate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)v7 = a1 - 8;
  *(_QWORD *)&v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dfc07bd0e0e493ac674bd395c585ee89___(
         v3,
         CurrentThreadId,
         (__int128 *)v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        727LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2DB,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
