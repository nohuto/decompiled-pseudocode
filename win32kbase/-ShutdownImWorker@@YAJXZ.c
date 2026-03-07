__int64 __fastcall ShutdownImWorker(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(a1, a2, a3) && gbImInitialized )
    return ImpShutdownWorker();
  else
    return 0LL;
}
