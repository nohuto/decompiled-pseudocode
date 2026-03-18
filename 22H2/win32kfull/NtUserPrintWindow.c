/*
 * XREFs of NtUserPrintWindow @ 0x1C01D88A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  v12 = (struct tagWND *)v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v7 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v17;
      *((_QWORD *)&v17 + 1) = v6;
      HMLockObject(v6);
      if ( (a3 & 3) == a3 )
        v11 = xxxPrintWindow(v12, a2, a3);
      else
        UserSetLastError(87);
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
