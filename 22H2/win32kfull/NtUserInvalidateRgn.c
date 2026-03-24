/*
 * XREFs of NtUserInvalidateRgn @ 0x1C0115750
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v6;
    HMLockObject(v6);
    v8 = xxxRedrawWindow(v9, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v10);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
