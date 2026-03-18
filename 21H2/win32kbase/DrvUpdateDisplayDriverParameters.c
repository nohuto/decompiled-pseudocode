/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C00756BC
 * Callers:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0075D00 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C00757A4 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  unsigned int v7; // esi
  int v8; // r12d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v10; // edx
  unsigned __int16 *v11; // r15
  int v12; // r14d
  int dmSize; // esi
  int dmDriverExtra; // eax
  void *v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rdx
  const unsigned __int16 *v22; // rax
  unsigned int v23; // edx
  unsigned __int16 *v24; // r14
  int v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-30h]
  int v29; // [rsp+80h] [rbp+28h]

  v7 = -1073741823;
  v8 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v8,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL);
      v11 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v12 = DrvWriteDisplayDriverParameters(a1, v10, RegistryHandleFromDeviceMap, a2, a3, v25);
        ZwClose(v11);
        v7 = v12;
        if ( v12 >= 0 )
          break;
      }
      if ( v8 != 2 )
        goto LABEL_5;
      v8 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices(0);
      v20 = 0LL;
      if ( *((_DWORD *)a1 + 54) )
      {
        v29 = v12;
        do
        {
          v21 = *((_QWORD *)a1 + 28);
          if ( (*(_BYTE *)(v21 + 20 * v20) & 3) == 3 )
          {
            v22 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v8,
                                              (unsigned int *)(v21 + 4 * (5 * v20 + 1)),
                                              0LL,
                                              0,
                                              0LL);
            v24 = (unsigned __int16 *)v22;
            if ( v22 )
            {
              DrvWriteDisplayDriverParameters(a1, v23, v22, a2, a3, v26);
              ZwClose(v24);
            }
          }
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (unsigned int)v20 < *((_DWORD *)a1 + 54) );
        v7 = v29;
      }
    }
LABEL_5:
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
      return v7;
    return 0LL;
  }
  *((_DWORD *)a1 + 65) = a3 == 0;
  if ( (*((_DWORD *)a1 + 40) & 8) == 0 || !a2 )
    return 0LL;
  dmSize = a2->dmSize;
  dmDriverExtra = a2->dmDriverExtra;
  v16 = (void *)*((_QWORD *)a1 + 34);
  v17 = dmDriverExtra + dmSize;
  if ( v16 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v16);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  if ( v17 )
    v18 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            260LL,
            v17,
            1936876615);
  else
    v18 = 0LL;
  *((_QWORD *)a1 + 34) = v18;
  if ( v18 )
  {
    *(_OWORD *)v18 = *(_OWORD *)a2->dmDeviceName;
    *(_OWORD *)(v18 + 16) = *(_OWORD *)&a2->dmDeviceName[8];
    *(_OWORD *)(v18 + 32) = *(_OWORD *)&a2->dmDeviceName[16];
    *(_OWORD *)(v18 + 48) = *(_OWORD *)&a2->dmDeviceName[24];
    *(_OWORD *)(v18 + 64) = *(_OWORD *)&a2->dmSpecVersion;
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v18 + 80) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
    *(_OWORD *)(v18 + 96) = *(_OWORD *)&a2->dmYResolution;
    v19 = v18 + 128;
    *(_OWORD *)(v19 - 16) = *(_OWORD *)&a2->dmFormName[5];
    *(_OWORD *)v19 = *(_OWORD *)&a2->dmFormName[13];
    *(_OWORD *)(v19 + 16) = *(_OWORD *)&a2->dmFormName[21];
    *(_OWORD *)(v19 + 32) = *(_OWORD *)&a2->dmFormName[29];
    *(_OWORD *)(v19 + 48) = *(_OWORD *)&a2->dmPelsHeight;
    *(_OWORD *)(v19 + 64) = *(_OWORD *)&a2->dmICMIntent;
    *(_QWORD *)(v19 + 80) = *(_QWORD *)&a2->dmReserved2;
    *(_DWORD *)(v19 + 88) = a2->dmPanningHeight;
    memmove((void *)(*((_QWORD *)a1 + 34) + 220LL), &a2[1], a2->dmDriverExtra);
    return 0LL;
  }
  return 3221225495LL;
}
