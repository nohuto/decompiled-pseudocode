__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  *a3 = 0;
  MonitorIsUsingSimulatedMonitor(a1);
  MonitorGetNumConnectedMonitor(a1, &v5);
  return 0LL;
}
