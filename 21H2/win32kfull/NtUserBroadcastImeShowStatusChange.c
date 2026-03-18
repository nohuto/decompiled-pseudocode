/*
 * XREFs of NtUserBroadcastImeShowStatusChange @ 0x1C01F16D0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01DE204 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserBroadcastImeShowStatusChange(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v4;
    HMLockObject(v4);
    v10 = *(_WORD *)(*((_QWORD *)v7 + 5) + 42LL) & 0x2FFF;
    if ( (_DWORD)v10 == 681 )
    {
      LOBYTE(v6) = a2 != 0;
      HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v6;
      xxxNotifyImeShowStatus(v7);
    }
    ThreadUnlock1(v10, v8, v9);
    v6 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
