__int64 NtUserEndMenu()
{
  __int64 v0; // rcx
  unsigned __int64 MenuStateWindow; // rax
  __int64 v3; // rdx

  EnterCrit(0LL, 0LL);
  v0 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 608LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 0x1F3u, 0LL, 0LL);
    else
      *(_DWORD *)(v3 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
