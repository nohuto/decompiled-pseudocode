/*
 * XREFs of ?ShutdownImWorker@@YAJXZ @ 0x1C00D4710
 * Callers:
 *     <none>
 * Callees:
 *     ImpShutdownWorker @ 0x1C008D758 (ImpShutdownWorker.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00DC8F8 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall ShutdownImWorker(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(a1, a2, a3) && gbImInitialized )
    return ImpShutdownWorker();
  else
    return 0LL;
}
