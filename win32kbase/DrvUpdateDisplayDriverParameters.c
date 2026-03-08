/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C001F108
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C00C8B74 (ApplyPathModalityToCdsRegistryStore.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0024194 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  int v5; // esi
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v10; // edx
  unsigned __int16 *v11; // r12
  int v12; // esi
  int dmSize; // esi
  int dmDriverExtra; // eax
  void *v16; // rdx
  unsigned int v17; // esi
  _OWORD *v18; // rdx
  char *v19; // rdx
  unsigned int v20; // r12d
  const unsigned __int16 *v21; // rax
  unsigned int v22; // edx
  unsigned __int16 *v23; // rsi
  unsigned int v25; // [rsp+30h] [rbp-40h]
  _BYTE v27[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+48h] [rbp-28h]
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+60h] [rbp-10h]

  v5 = a3;
  v7 = -1073741823;
  v8 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(a1, v8, 0LL, 0LL, 0);
      v11 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v12 = DrvWriteDisplayDriverParameters(a1, v10, RegistryHandleFromDeviceMap, a2, v5, 0);
        ZwClose(v11);
        v7 = v12;
        if ( v12 >= 0 )
        {
          if ( a4 )
          {
            v28 = 0;
            P = 0LL;
            EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v27, a1);
            v20 = 0;
            if ( v28 )
            {
              v25 = v12;
              do
              {
                v31 = 0;
                v30 = 0LL;
                EnsureMonitorDevices::GetMonitorDevice(
                  (EnsureMonitorDevices *)v27,
                  v20,
                  (struct tagVIDEO_MONITOR_DEVICE *)&v30);
                if ( (v30 & 3) == 3 )
                {
                  v21 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(a1, v8, (char *)&v30 + 4, 0LL, 0);
                  v23 = (unsigned __int16 *)v21;
                  if ( v21 )
                  {
                    DrvWriteDisplayDriverParameters(a1, v22, v21, a2, a3, 0);
                    ZwClose(v23);
                  }
                }
                ++v20;
              }
              while ( v20 < v28 );
              v7 = v25;
            }
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
LABEL_5:
          if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
            return v7;
          return 0LL;
        }
        v5 = a3;
      }
      if ( v8 != 2 )
        goto LABEL_5;
      v8 = 0;
    }
  }
  *((_DWORD *)a1 + 63) = a3 == 0;
  if ( (*((_DWORD *)a1 + 40) & 8) == 0 || !a2 )
    return 0LL;
  dmSize = a2->dmSize;
  dmDriverExtra = a2->dmDriverExtra;
  v16 = (void *)*((_QWORD *)a1 + 33);
  v17 = dmDriverExtra + dmSize;
  if ( v16 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
    *((_QWORD *)a1 + 33) = 0LL;
  }
  if ( v17 )
    v18 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v17, 0x73726447u);
  else
    v18 = 0LL;
  *((_QWORD *)a1 + 33) = v18;
  if ( v18 )
  {
    *v18 = *(_OWORD *)a2->dmDeviceName;
    v18[1] = *(_OWORD *)&a2->dmDeviceName[8];
    v18[2] = *(_OWORD *)&a2->dmDeviceName[16];
    v18[3] = *(_OWORD *)&a2->dmDeviceName[24];
    v18[4] = *(_OWORD *)&a2->dmSpecVersion;
    v18[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
    v18[6] = *(_OWORD *)&a2->dmYResolution;
    v19 = (char *)(v18 + 8);
    *((_OWORD *)v19 - 1) = *(_OWORD *)&a2->dmFormName[5];
    *(_OWORD *)v19 = *(_OWORD *)&a2->dmFormName[13];
    *((_OWORD *)v19 + 1) = *(_OWORD *)&a2->dmFormName[21];
    *((_OWORD *)v19 + 2) = *(_OWORD *)&a2->dmFormName[29];
    *((_OWORD *)v19 + 3) = *(_OWORD *)&a2->dmPelsHeight;
    *((_OWORD *)v19 + 4) = *(_OWORD *)&a2->dmICMIntent;
    *((_QWORD *)v19 + 10) = *(_QWORD *)&a2->dmReserved2;
    *((_DWORD *)v19 + 22) = a2->dmPanningHeight;
    memmove((void *)(*((_QWORD *)a1 + 33) + 220LL), &a2[1], a2->dmDriverExtra);
    return 0LL;
  }
  return 3221225495LL;
}
