__int64 __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, char a2)
{
  __int64 result; // rax

  result = KiSetClockTimer(a1, KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement, KeMinimumIncrement, 1, 1, 0);
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, KiClockOwnerOneShotRequest, 0, 2, 1, 0);
  }
  return result;
}
