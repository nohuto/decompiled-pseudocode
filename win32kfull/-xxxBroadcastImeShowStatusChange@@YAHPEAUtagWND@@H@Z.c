__int64 __fastcall xxxBroadcastImeShowStatusChange(struct tagWND *a1, int a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A9 )
  {
    *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) = a2 != 0;
    xxxNotifyImeShowStatus(a1);
  }
  return 1LL;
}
