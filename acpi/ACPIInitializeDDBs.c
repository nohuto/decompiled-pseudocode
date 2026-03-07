__int64 ACPIInitializeDDBs()
{
  int v0; // ebx
  __int64 *i; // rdi

  v0 = 0;
  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        22,
        38,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    for ( i = (__int64 *)AcpiDynamicDataBlockTableList; i != &AcpiDynamicDataBlockTableList; i = (__int64 *)*i )
    {
      v0 = ACPIInitializeDDB((__int64)i);
      if ( v0 < 0 )
        return (unsigned int)v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return (unsigned int)v0;
}
