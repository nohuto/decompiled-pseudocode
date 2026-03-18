/*
 * XREFs of UsbhIoctlValidateParameters @ 0x1C0041B64
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003ED54 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003F534 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003F868 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003FAE0 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003FDA4 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0040078 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0040308 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C00407B8 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040AF8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0040E0C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00410FC (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00413E4 (UsbhIoctlGetPortConnectorProperties.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlValidateParameters(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  _DWORD *v10; // rax
  int v11; // r11d
  unsigned int v12; // r14d
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned int v15; // ebx
  int *v16; // rsi
  __int64 v17; // r14
  __int64 v19; // [rsp+28h] [rbp-51h]
  int v20; // [rsp+48h] [rbp-31h]
  int v21[8]; // [rsp+50h] [rbp-29h] BYREF
  int v22; // [rsp+70h] [rbp-9h]

  v21[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x30u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v10 = FdoExt(a1);
  v11 = *(_DWORD *)(a4 + 16);
  v12 = *(_DWORD *)(a4 + 8);
  v21[1] = a2;
  v21[3] = v11;
  v21[2] = v12;
  v21[4] = a5;
  v21[5] = a6;
  v21[6] = v10[610];
  v21[7] = v10[640];
  v22 = 0;
  Log(a1, 32, 1768912433, a3, (__int64)v21);
  v15 = 0;
  if ( *(_DWORD *)(v14 + 2440) == 3 )
  {
    if ( (unsigned int)v13 >= a5 )
    {
      if ( v12 >= a6 )
      {
        if ( a5 >= 4 )
        {
          v16 = *(int **)(a3 + 24);
          v17 = v13;
          v21[0] = *v16;
          Log(a1, 32, 1768912437, (__int64)v16, v13);
          if ( !*v16 || *v16 > (unsigned int)*((unsigned __int8 *)FdoExt(a1) + 2938) )
          {
            Log(a1, 32, 1768912437, (__int64)v16, v17);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                2u,
                0x34u,
                (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
            }
            v15 = -1073741811;
            v22 = 2445;
          }
        }
      }
      else
      {
        Log(a1, 32, 1768912436, 0LL, v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            2u,
            0x33u,
            (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
        v15 = -1073741789;
        v22 = 2425;
      }
    }
    else
    {
      Log(a1, 32, 1768912435, 0LL, v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          2u,
          0x32u,
          (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
      v15 = -1073741811;
      v22 = 2416;
    }
  }
  else
  {
    Log(a1, 32, 1768912434, 0LL, v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0x31u,
        (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
    v15 = -1073741823;
    v22 = 2407;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
  {
    LOBYTE(v20) = 0;
    UsbhException(a1, 0, 90, (int)v21, 36, v15, 0, usbfile_ioctl_c, 2459, v20);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x35u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v19);
  }
  return v15;
}
