/*
 * XREFs of NtUserShowWindowAsync @ 0x1C011A060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C011A14C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      if ( a2 > 0xB )
        UserSetLastError(87LL, v8);
      else
        v6 = _ShowWindowAsync(v7, 2LL, a2, 0LL);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
