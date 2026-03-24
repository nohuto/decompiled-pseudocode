/*
 * XREFs of NtUserPrintWindow @ 0x1C0200470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01E82D0 (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v6;
      HMLockObject(v6);
      if ( (a3 & 3) == a3 )
        v8 = xxxPrintWindow(v9, a2, a3);
      else
        UserSetLastError(87LL, v10, v11);
      ThreadUnlock1(v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
