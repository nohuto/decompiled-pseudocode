/*
 * XREFs of ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0251AB0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     IsVisible @ 0x1C00A66A0 (IsVisible.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C0251AFC (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall EnumPwndDlgChildProc(struct tagWND *a1, struct tagWND **a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  struct tagWND *v4; // r9
  __int64 v5; // r10

  if ( a1 == *a2
    || !(unsigned int)IsVisible((__int64)a1)
    || !PtInRect((_DWORD *)(*(_QWORD *)(v2 + 40) + 88LL), *(_QWORD *)(v3 + 16)) )
  {
    return 1LL;
  }
  *(_QWORD *)(v5 + 8) = v4;
  return IsHelpParent(v4);
}
