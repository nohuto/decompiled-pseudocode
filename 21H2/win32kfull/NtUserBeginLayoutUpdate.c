/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C01310B0
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C00088D0 (GreWindowBeginLayoutUpdate.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = v3;
  if ( v3 && (v4 = *(_QWORD *)(v3 + 40), (((*(_WORD *)(v4 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v3;
    HMLockObject(v3);
    if ( !(unsigned int)IsTopLevelWindow(v5) && *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v9 = *(_QWORD *)(TopLevelWindow + 40);
        v6 = *(_WORD *)(v9 + 42) & 0x2FFF;
        if ( (_DWORD)v6 != 669 && *(char *)(v9 + 25) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v6);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
