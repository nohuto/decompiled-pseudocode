__int64 __fastcall GetgSystemOemCodePage(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 18746LL;
}
