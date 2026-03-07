__int64 __fastcall HUBDSM_WaitingForPostReset2ExtendedTimerInRenum(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1544LL), -1000000LL, 0LL, 0LL);
  return 1000LL;
}
