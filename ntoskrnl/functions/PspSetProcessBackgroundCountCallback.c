__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, __int64 a2)
{
  return PspSetProcessIoPriorityLimitCallback(a1, a2 + 4);
}
