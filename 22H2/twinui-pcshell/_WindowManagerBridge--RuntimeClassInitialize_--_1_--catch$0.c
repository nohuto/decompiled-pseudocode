/*
 * XREFs of _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x180348821
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180282364 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBB18 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize_::_1_::catch_0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  CCriticalFailureHandler *v4; // rcx
  const char *v5; // r9
  char v6; // al
  unsigned __int64 *v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(v3 + 288) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL);
  wil::details::SetEvent(*(wil::details **)(v3 + 264), (void *)a2);
  v5 = (const char *)*(unsigned int *)(v3 + 288);
  *(_DWORD *)(a2 + 48) = (_DWORD)v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)(a2 + 48));
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v5 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v5 >= 0 )
    goto LABEL_9;
  if ( (_DWORD)v5 != -2147024882 && (_DWORD)v5 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v4,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      0x5Eu,
      v8,
      v9);
    v5 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v5 >= 0 )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( !v6 )
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 120),
      94LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      v5);
  return 0LL;
}
