bool __fastcall CheckDpcWatchdogTimerExpireSoon(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (unsigned __int8)DpcWatchdogTimerRemainsMoreThan(a1, a2, a3) == 0;
}
