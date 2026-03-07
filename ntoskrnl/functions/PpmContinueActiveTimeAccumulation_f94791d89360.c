char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  PpmUpdateTimeAccumulation(a1, a2, 1);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
