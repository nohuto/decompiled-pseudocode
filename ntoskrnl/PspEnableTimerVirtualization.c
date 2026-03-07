__int64 __fastcall PspEnableTimerVirtualization(__int64 a1)
{
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 0x12u);
  return 0LL;
}
