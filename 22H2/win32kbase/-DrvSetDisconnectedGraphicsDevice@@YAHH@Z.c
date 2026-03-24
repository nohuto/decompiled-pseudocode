/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0020020
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001F350 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001BCCC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C007E954 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C007EA40 (DrvCleanupOneGraphicsDevice.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v2; // r15d
  __int64 v4; // rbx
  WCHAR v5; // ax
  WCHAR *v6; // rax
  WCHAR *v7; // rsi
  __int64 v8; // rax
  void *v9; // rax
  int v10; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  WCHAR ValueName[16]; // [rsp+48h] [rbp-28h] BYREF

  v2 = 0;
  v10 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  if ( a1 )
  {
    if ( gpLocalDiscGraphicsDevice )
      return 1LL;
  }
  else if ( gpRemoteDiscGraphicsDevice )
  {
    return 1LL;
  }
  v4 = PALLOCMEM2(0x138uLL);
  if ( !v4 )
    return v2;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString.Buffer, DestinationString.Length + 2);
  *(_OWORD *)v4 = *(_OWORD *)ValueName;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&ValueName[8];
  v5 = ValueName[12];
  *(_DWORD *)(v4 + 160) |= 0x2000000u;
  *(_WORD *)(v4 + 24) = v5;
  *(_WORD *)(v4 + 220) = -1;
  *(_DWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 224) = 0LL;
  v6 = (WCHAR *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int *))DrvGetRegistryHandleFromDeviceMap)(
                  v4,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  &v10);
  v7 = v6;
  if ( v10 >= 0 )
  {
    if ( v6 )
    {
      DrvGetDeviceConfigurationInformation((PVOID)v4, v6, 0);
      ZwClose(v7);
      v2 = 1;
    }
    if ( v10 >= 0 )
    {
      if ( !*(_QWORD *)(v4 + 208) )
      {
        v8 = PALLOCMEM2(0x20uLL);
        *(_QWORD *)(v4 + 208) = v8;
        if ( v8 )
        {
          v9 = (void *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, int, int *))DrvGetRegistryHandleFromDeviceMap)(
                         v4,
                         0LL,
                         0LL,
                         v8,
                         16,
                         &v10);
          if ( v9 )
            ZwClose(v9);
        }
        else
        {
          v10 = -1073741670;
        }
      }
      if ( v10 >= 0 )
      {
        swprintf_s((wchar_t *)(v4 + 64), 0x20uLL, L"WinDisc");
        *(_QWORD *)(v4 + 136) = 0LL;
        if ( gpGraphicsDeviceList )
          *((_QWORD *)gpGraphicsDeviceListLast + 16) = v4;
        else
          gpGraphicsDeviceList = (wchar_t *)v4;
        gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v4;
        if ( a1 )
          gpLocalDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
        else
          gpRemoteDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v4;
        if ( (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
          DrvAddAdapterLuid(*(struct _LUID *)(v4 + 248));
        return v2;
      }
    }
  }
  DrvCleanupOneGraphicsDevice(v4);
  return 0LL;
}
