__int64 NtUserWaitMessage()
{
  int v0; // eax
  __int64 v1; // rcx
  int v2; // ebx

  EnterCrit(0LL, 0LL);
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    v0 = ClientWaitMessageExMPH(15615, 0);
  else
    v0 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0LL);
  v2 = v0;
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
