/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0108B84
 * Callers:
 *     xxxConsoleControl @ 0x1C007A708 (xxxConsoleControl.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  struct tagWND *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v11 = 0LL;
  v12 = 0LL;
  v3 = ValidateHwnd(v2);
  v5 = (struct tagWND *)v3;
  if ( v3 && (v6 = *(_QWORD *)(v3 + 24)) != 0 )
  {
    *(_OWORD *)(v6 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v6 + 160) = *((_QWORD *)a1 + 2);
    ThreadLock((__int64)v5, (__int64 *)&v11);
    xxxWindowEvent(0x800Bu, v5, -8, 0, 4);
    ThreadUnlock1(v8, v7, v9);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL, v4);
    return 0LL;
  }
}
