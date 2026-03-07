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
