/*
 * XREFs of ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     DrvSetMonitorBrightness @ 0x1C00AF20C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00AF3F4 (DrvSetMonitorsDimState.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AF590 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z @ 0x1C00AFA48 (-DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z.c)
 *     PruneModesByDisplayDeviceCaps @ 0x1C0190E0C (PruneModesByDisplayDeviceCaps.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0192D10 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C0194628 (DrvPVPGetFirstActiveMonitor.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0195000 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     <none>
 */

void __fastcall EnsureMonitorDevices::GetMonitorDevice(
        EnsureMonitorDevices *this,
        unsigned int a2,
        struct tagVIDEO_MONITOR_DEVICE *a3)
{
  int v3; // r9d

  *(_DWORD *)a3 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 1) != 0 )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 2) == 0 )
  {
    v3 |= 2u;
    *(_DWORD *)a3 = v3;
  }
  if ( *(int *)(*((_QWORD *)this + 2) + 20LL * a2) >= 0 )
  {
    v3 |= 0x80000000;
    *(_DWORD *)a3 = v3;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 0x40000000) == 0 )
    *(_DWORD *)a3 = v3 | 0x40000000;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2 + 4);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 20LL * a2 + 8);
  *((_BYTE *)a3 + 16) = *(_BYTE *)(*((_QWORD *)this + 2) + 20LL * a2 + 16);
}
