__int64 __fastcall NtUserRegisterSystemThread(char a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = (_DWORD *)(gptiCurrent + 488LL);
  if ( (a1 & 1) != 0 )
    *v3 |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *v3 |= 0x80u;
    if ( *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v2) + 58) + 56LL)
      || *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v4) + 58) + 48LL) )
    {
      zzzJournalAttach(gptiCurrent, 0);
      zzzJournalAttach(gptiCurrent, 1);
    }
  }
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
