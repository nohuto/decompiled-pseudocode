__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 432);
  if ( v1 == 1 )
    return 1LL;
  if ( (v1 & 0xFFFFFFFD) == 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 4824LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 4824LL, 0LL, 0LL, 0LL, 0LL);
  return 3LL;
}
