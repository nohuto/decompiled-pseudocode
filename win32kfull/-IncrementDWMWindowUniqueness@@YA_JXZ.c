__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13248LL));
}
