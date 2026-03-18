/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1C01F3490
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E0AE0 (xxxForceWindowToDpiForTest.c)
 */

__int64 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  ShellWindowManagement *v7; // rdi
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
  v7 = (ShellWindowManagement *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 5) + 288LL) & 0xF) == 2
        && IsTopLevelWindow((__int64)v7)
        && (unsigned int)GetDpiCacheSlot(a2) != -1 )
      {
        v6 = xxxForceWindowToDpiForTest(v7, a2);
      }
      else
      {
        UserSetLastError(87LL, v8);
      }
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
