/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C00EEB80
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C00161C4 (GreWindowBeginLayoutUpdate.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 TopLevelWindow; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v11;
      *((_QWORD *)&v11 + 1) = v2;
      HMLockObject(v2);
      if ( !IsTopLevelWindow(v5) && *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
      {
        TopLevelWindow = GetTopLevelWindow(v7);
        if ( TopLevelWindow )
        {
          v6 = *(_QWORD *)(TopLevelWindow + 40);
          v7 = *(_WORD *)(v6 + 42) & 0x2FFF;
          if ( (_DWORD)v7 != 669 && *(char *)(v6 + 25) < 0 )
            GreWindowBeginLayoutUpdate(*(Gre::Base **)TopLevelWindow, v6);
        }
      }
      ThreadUnlock1(v7, v6, v8);
      v4 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
