/*
 * XREFs of NtUserRestoreWindowDpiChanges @ 0x1C0012FA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0013084 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRestoreWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v2;
      HMLockObject(v2);
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL) & 0xF) == 2 )
        v7 = xxxRestoreWindowFromDeferredStateIfNeeded(v8);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
