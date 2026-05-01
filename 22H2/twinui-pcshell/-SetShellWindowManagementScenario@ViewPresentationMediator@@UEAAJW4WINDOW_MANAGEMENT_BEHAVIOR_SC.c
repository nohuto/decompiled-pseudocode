/*
 * XREFs of ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x180352B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x180351E68 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 */

__int64 __fastcall ViewPresentationMediator::SetShellWindowManagementScenario(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (unsigned int)a3 & a2;
  *(_DWORD *)(a1 + 200) = v4 | *(_DWORD *)(a1 + 200) & ~a2;
  v5 = ViewPresentationMediator::EnableShellWindowManagementBehavior((ViewPresentationMediator *)(a1 - 104), v4, a3);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
