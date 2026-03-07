__int64 __fastcall HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFFB);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*(_QWORD *)v1);
  return 3013LL;
}
