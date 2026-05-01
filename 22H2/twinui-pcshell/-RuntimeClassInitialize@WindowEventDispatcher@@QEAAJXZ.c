/*
 * XREFs of ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x18032827C
 * Callers:
 *     ??$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18031F1B4 (--$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800910C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF1D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x18031F28C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBB18 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::RuntimeClassInitialize(void **this)
{
  int v2; // eax
  int v3; // eax
  CCriticalFailureHandler *v4; // rcx
  void *v5; // rcx
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WindowEventDispatcher *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
  if ( dword_18065336C > v2 )
  {
    Init_thread_header(&dword_18065336C);
    if ( dword_18065336C == -1 )
    {
      xmmword_180652D40 = SID_WindowEventDispatcher;
      xmmword_180652D50 = 0LL;
      xmmword_180652D60 = (__int128)SID_ViewEventDispatcher;
      xmmword_180652D70 = 0LL;
      xmmword_180652D80 = xmmword_1805B2D48;
      xmmword_180652D90 = 0LL;
      xmmword_180652DA0 = (__int128)SID_ForegroundViewManager;
      xmmword_180652DB0 = 0LL;
      Init_thread_footer(&dword_18065336C);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)(this + 16),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180652D40,
           4LL);
    LODWORD(v13) = v3;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v3 = (int)v13;
    }
    if ( v3 < 0 && v3 != -2147024882 && v3 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x41u,
        v10,
        v11);
      v3 = (int)v13;
    }
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
    v13 = (WindowEventDispatcher *)this;
    v5 = this[39];
    this[39] = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
           this + 39,
           &v13);
    LODWORD(v13) = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = (int)v13;
    }
    if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x47u,
        v10,
        v11);
      v6 = (int)v13;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
