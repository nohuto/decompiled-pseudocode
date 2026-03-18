/*
 * XREFs of NtUserPrintWindow @ 0x1C01FB1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v6;
      HMLockObject(v6);
      if ( (a3 & 3) == a3 )
        v8 = xxxPrintWindow(v9, a2, a3);
      else
        UserSetLastError(87LL, v10);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
