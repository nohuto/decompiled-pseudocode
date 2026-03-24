/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C001C698
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C001B014 (ApplyPathModalityToCdsRegistryStore.c)
 * Callees:
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C001B168 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     UpdateMonitorDevices @ 0x1C001CE40 (UpdateMonitorDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00297C0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  int v5; // r15d
  unsigned int v9; // r14d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  __int64 v11; // rdx
  unsigned __int16 *v12; // rbp
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  __int64 v20; // rdx
  unsigned __int16 *v21; // r12
  int v22; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+70h] [rbp+28h]

  v5 = -1073741823;
  v24 = -1073741823;
  v9 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                a1,
                                                                v9,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL,
                                                                v22);
      v12 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v24 = DrvWriteDisplayDriverParameters(a1, v11, RegistryHandleFromDeviceMap, a2, a3);
        v5 = v24;
        ZwClose(v12);
      }
      if ( v5 >= 0 )
        break;
      if ( v9 != 2 )
        goto LABEL_6;
      v9 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices();
      v17 = 0LL;
      if ( *((_DWORD *)a1 + 54) )
      {
        do
        {
          v18 = *((_QWORD *)a1 + 28);
          if ( (*(_BYTE *)(v18 + 20 * v17) & 3) == 3 )
          {
            v19 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              a1,
                                              v9,
                                              v18 + 4 * (5 * v17 + 1),
                                              0LL,
                                              0,
                                              0LL,
                                              v22);
            v21 = (unsigned __int16 *)v19;
            if ( v19 )
            {
              DrvWriteDisplayDriverParameters(a1, v20, v19, a2, a3);
              ZwClose(v21);
            }
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *((_DWORD *)a1 + 54) );
        v5 = v24;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
      return (unsigned int)v5;
    return 0LL;
  }
  *((_DWORD *)a1 + 65) = a3 == 0;
  if ( (*((_DWORD *)a1 + 40) & 8) == 0 || !a2 )
    return 0LL;
  v14 = *((_QWORD *)a1 + 34);
  v15 = a2->dmDriverExtra + a2->dmSize;
  if ( v14 )
  {
    Win32FreePool(v14);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  v16 = PALLOCMEM2(v15);
  *((_QWORD *)a1 + 34) = v16;
  if ( v16 )
  {
    *(_OWORD *)v16 = *(_OWORD *)a2->dmDeviceName;
    *(_OWORD *)(v16 + 16) = *(_OWORD *)&a2->dmDeviceName[8];
    *(_OWORD *)(v16 + 32) = *(_OWORD *)&a2->dmDeviceName[16];
    *(_OWORD *)(v16 + 48) = *(_OWORD *)&a2->dmDeviceName[24];
    *(_OWORD *)(v16 + 64) = *(_OWORD *)&a2->dmSpecVersion;
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v16 + 80) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
    *(_OWORD *)(v16 + 96) = *(_OWORD *)&a2->dmYResolution;
    *(_OWORD *)(v16 + 112) = *(_OWORD *)&a2->dmFormName[5];
    *(_OWORD *)(v16 + 128) = *(_OWORD *)&a2->dmFormName[13];
    *(_OWORD *)(v16 + 144) = *(_OWORD *)&a2->dmFormName[21];
    *(_OWORD *)(v16 + 160) = *(_OWORD *)&a2->dmFormName[29];
    *(_OWORD *)(v16 + 176) = *(_OWORD *)&a2->dmPelsHeight;
    *(_OWORD *)(v16 + 192) = *(_OWORD *)&a2->dmICMIntent;
    *(_QWORD *)(v16 + 208) = *(_QWORD *)&a2->dmReserved2;
    *(_DWORD *)(v16 + 216) = a2->dmPanningHeight;
    memmove((void *)(*((_QWORD *)a1 + 34) + 220LL), &a2[1], a2->dmDriverExtra);
    return 0LL;
  }
  return 3221225495LL;
}
