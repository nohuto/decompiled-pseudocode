__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  const struct tagWND *v2; // rdx
  char v4; // cl
  const struct tagWND *v5; // rcx
  const struct tagWND *v6; // rcx

  DesktopWindow = GetDesktopWindow(a1);
  if ( *((_QWORD *)v2 + 13) != DesktopWindow )
    return 6LL;
  v4 = *(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL);
  if ( (v4 & 0x20) != 0 )
    return 5LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  if ( IsVerticallyMaximized(v2) )
    return 1LL;
  if ( IsLeftSemiMaximized(v5) )
    return 2LL;
  return 4 - (unsigned int)IsRightSemiMaximized(v6);
}
