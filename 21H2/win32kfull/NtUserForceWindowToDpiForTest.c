/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1C01F8B90
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C006152C (GetDpiCacheSlot.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E669C (xxxForceWindowToDpiForTest.c)
 */

__int64 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v12;
      *((_QWORD *)&v12 + 1) = v4;
      HMLockObject(v4);
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2
        && (unsigned int)IsTopLevelWindow(v7)
        && (unsigned int)GetDpiCacheSlot(a2) != -1 )
      {
        v6 = xxxForceWindowToDpiForTest((struct tagWND *)v7, a2);
      }
      else
      {
        UserSetLastError(87LL, v8, v9);
      }
      ThreadUnlock1(v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
