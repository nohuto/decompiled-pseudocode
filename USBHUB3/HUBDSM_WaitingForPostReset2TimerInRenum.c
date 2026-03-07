__int64 __fastcall HUBDSM_WaitingForPostReset2TimerInRenum(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1544LL), -320000LL, 0LL, 0LL);
  return 1000LL;
}
