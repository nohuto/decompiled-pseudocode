/*
 * XREFs of ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x1803EDD4C
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x1803ED320 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1803ED7CC (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1803EDCC8 (-_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_EnsureForegroundRight(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  HWND ForegroundWindow; // rax
  CMultitaskingViewServiceProvider *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow
    && GetWindowThreadProcessId(ForegroundWindow, &dwProcessId)
    && dwProcessId == GetCurrentProcessId()
    && !a2
    || (v6 = ForegroundStaging::SetActive((CMultitaskingViewServiceProvider *)((char *)this + 240)), v7 = v6, v6 >= 0) )
  {
    CMultitaskingViewServiceProvider::_DismissContextMenuIfPresent(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
