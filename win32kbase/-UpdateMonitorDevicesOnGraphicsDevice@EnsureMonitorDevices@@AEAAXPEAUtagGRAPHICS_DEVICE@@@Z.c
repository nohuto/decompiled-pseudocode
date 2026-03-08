/*
 * XREFs of ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     DrvSetMonitorBrightness @ 0x1C00AF20C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00AF3F4 (DrvSetMonitorsDimState.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AF590 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00AF980 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     PruneModesByDisplayDeviceCaps @ 0x1C0190E0C (PruneModesByDisplayDeviceCaps.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0192D10 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C0194628 (DrvPVPGetFirstActiveMonitor.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0195000 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
        EnsureMonitorDevices *this,
        struct tagGRAPHICS_DEVICE *a2)
{
  __int64 *v2; // rbx
  void *v4; // rcx
  struct _DEVICE_OBJECT *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *v2 = 0LL;
  }
  *((_DWORD *)this + 2) = 0;
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 17);
  if ( v6 )
  {
    if ( (int)GreDeviceIoControlImpl(v6, 0x23201Bu, 0LL, 0, v2, 8u, &v10, 1u, 1) >= 0 )
    {
      v7 = *v2;
      if ( *v2 )
      {
        v8 = *((unsigned int *)this + 2);
        if ( _bittest((const signed __int32 *)(v7 + 20 * v8), 0x1Du) )
        {
          do
          {
            v9 = (unsigned int)(v8 + 1);
            *((_DWORD *)this + 2) = v9;
            LODWORD(v8) = v8 + 1;
          }
          while ( _bittest((const signed __int32 *)(v7 + 20 * v9), 0x1Du) );
        }
      }
    }
  }
}
