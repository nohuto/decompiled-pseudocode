/*
 * XREFs of NtUserShowScrollBar @ 0x1C0142340
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxShowScrollBar @ 0x1C0142434 (xxxShowScrollBar.c)
 */

__int64 __fastcall NtUserShowScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      if ( a2 > 3 )
        UserSetLastError(87LL, v8);
      else
        v6 = xxxShowScrollBar(v7);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
