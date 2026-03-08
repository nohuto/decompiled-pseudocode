/*
 * XREFs of ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0014578
 * Callers:
 *     NtUserGetDCompositionHwndBitmap @ 0x1C0014480 (NtUserGetDCompositionHwndBitmap.c)
 * Callees:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0014674 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall GetWindowCompositionVisualBitmap(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int WindowCompositionVisualBitmap; // ebx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v4;
    HMLockObject(v4);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 424LL) )
    {
      WindowCompositionVisualBitmap = _GetWindowCompositionVisualBitmap(v6, a2);
    }
    else
    {
      WindowCompositionVisualBitmap = -1073741811;
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v8, v7, v10);
  }
  else
  {
    WindowCompositionVisualBitmap = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return WindowCompositionVisualBitmap;
}
