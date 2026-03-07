__int64 __fastcall GetgSystemAnsiCodePage(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 18744LL;
}
