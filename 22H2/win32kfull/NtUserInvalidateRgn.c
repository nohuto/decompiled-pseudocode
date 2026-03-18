/*
 * XREFs of NtUserInvalidateRgn @ 0x1C00A2D00
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
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
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    v11 = xxxRedrawWindow(v12, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
