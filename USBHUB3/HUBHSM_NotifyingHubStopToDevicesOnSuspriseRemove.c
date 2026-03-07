__int64 __fastcall HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove(__int64 a1)
{
  HUBMUX_QueueStopAfterSuspendToAllDSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
