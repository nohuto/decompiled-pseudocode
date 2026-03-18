/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1C01CF9B0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01BAC28 (xxxForceWindowToDpiForTest.c)
 */

__int64 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct tagWND *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v4;
      HMLockObject(v4);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL) & 0xF) == 2
        && IsTopLevelWindow((__int64)v10)
        && (unsigned int)GetDpiCacheSlot(a2) != -1 )
      {
        v9 = xxxForceWindowToDpiForTest(v10, a2);
      }
      else
      {
        UserSetLastError(87);
      }
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
