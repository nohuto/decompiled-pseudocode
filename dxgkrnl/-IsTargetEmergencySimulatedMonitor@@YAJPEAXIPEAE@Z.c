__int64 __fastcall IsTargetEmergencySimulatedMonitor(void *a1, __int64 a2, unsigned __int8 *a3)
{
  int MonitorHandle; // ebx
  struct HDXGMONITOR__ *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(a1, a2, 0LL, 1296650308LL, &v7);
  if ( MonitorHandle >= 0 )
  {
    MonitorHandle = MonitorGetMonitorType(v7);
    if ( MonitorHandle >= 0 )
      *a3 = 0;
    MonitorReleaseMonitorHandle(a1, v7, 1296650308LL);
  }
  return (unsigned int)MonitorHandle;
}
