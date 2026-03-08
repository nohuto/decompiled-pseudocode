/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C00396E0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0095DD0 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AA580 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C0039774 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 376;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
