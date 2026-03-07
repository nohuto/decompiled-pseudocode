__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 3;
  PopPowerAggregatorSetCurrentState(a1, v3);
  PopPowerAggregatorStartNextSession(1LL, *(unsigned int *)(a1 + 24));
  return 0LL;
}
