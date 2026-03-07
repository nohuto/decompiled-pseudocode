__int64 __fastcall HUBHSM_NotifyingHubResumeToDevices(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_QueuePowerUpEventToDSMs(v1, 4006LL);
  HUBFDO_SignalPnpPowerEvent(v1);
  return 1000LL;
}
