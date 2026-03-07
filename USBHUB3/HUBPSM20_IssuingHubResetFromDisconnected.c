__int64 __fastcall HUBPSM20_IssuingHubResetFromDisconnected(__int64 a1)
{
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(**(_QWORD **)(a1 + 960));
  return 1000LL;
}
