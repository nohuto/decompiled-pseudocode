/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800D2078
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1800D029C (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1803D7EA0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)v7 = *(_QWORD *)a2;
  v8 = v2;
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(v3, v7, &v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x91B,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
