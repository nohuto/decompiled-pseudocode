__int64 NtUserHideCursorNoCapture()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterCrit(0LL, 0LL);
  v1 = *((_QWORD *)PtiCurrentShared(v0) + 54);
  if ( !*(_QWORD *)(v1 + 112) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x100) == 0 )
    {
      v1 = (unsigned int)gpdwCPUserPreferencesMask & 0x80010000;
      if ( (_DWORD)v1 == -2147418112 )
        zzzSetCursor(0LL);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return 0LL;
}
