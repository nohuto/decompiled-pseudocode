/*
 * XREFs of ?ShutdownImWorker@@YAJXZ @ 0x1C00C5340
 * Callers:
 *     <none>
 * Callees:
 *     ImpShutdownWorker @ 0x1C00C2890 (ImpShutdownWorker.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00CFFF4 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall ShutdownImWorker(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(a1, a2, a3) && gbImInitialized )
    return ImpShutdownWorker();
  else
    return 0LL;
}
