/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0039EBC
 * Callers:
 *     xxxConsoleControl @ 0x1C003C5E8 (xxxConsoleControl.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = 0LL;
  v3 = ValidateHwnd(v2);
  v4 = v3;
  if ( v3 && (v5 = *(_QWORD *)(v3 + 24)) != 0 )
  {
    *(_OWORD *)(v5 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v5 + 160) = *((_QWORD *)a1 + 2);
    ThreadLock(v4, &v10);
    xxxWindowEvent(0x800Bu, 4);
    ThreadUnlock1(v7, v6, v8);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
