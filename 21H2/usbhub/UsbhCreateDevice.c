/*
 * XREFs of UsbhCreateDevice @ 0x1C0019118
 * Callers:
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C00192F4 (UsbhLinkPdoDeviceHandle.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C002EC44 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x1C00389F4 (UsbhGetDeviceHandle.c)
 *     UsbhGetTtDeviceHandle @ 0x1C0038FD8 (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C003BA9C (Usbh_HubRemoveUsbDevice.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005C608 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  _DWORD *v9; // rdi
  _DWORD *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  unsigned int i; // edx
  int v16; // eax
  int v17; // edi
  unsigned int TtDeviceHandle; // r14d
  int v20; // eax
  int v21; // [rsp+20h] [rbp-B9h]
  void *v22; // [rsp+38h] [rbp-A1h]
  int v23; // [rsp+48h] [rbp-91h]
  unsigned __int16 v24[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v25; // [rsp+54h] [rbp-85h]
  __int64 DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v27; // [rsp+60h] [rbp-79h] BYREF
  void *v28; // [rsp+68h] [rbp-71h]
  __int64 v29; // [rsp+70h] [rbp-69h]
  int v30[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v28 = (void *)a2;
  v7 = a4;
  v25 = a3;
  memset(&v30[1], 0, 0x50uLL);
  v29 = v4;
  DeviceHandle = 0LL;
  v24[0] = 0;
  v8 = (unsigned int)v4;
  Log(a1, 4, 1668441412, (unsigned int)v4, v7);
  v9 = FdoExt(a1);
  v10 = PdoExt(a2);
  v11 = 0xFEFEFEFEFEFEFEFEuLL;
  v27 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
    goto LABEL_2;
  if ( (v9[640] & 0x40) != 0 )
  {
    Log(a1, 4, 1668441137, v8, v7);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    v24[0] = v7;
    Log(a1, 4, 1668441138, DeviceHandle, v7);
    v12 = DeviceHandle;
    if ( !DeviceHandle )
    {
      LOBYTE(v23) = 0;
      v17 = -1073741823;
      UsbhException(a1, (unsigned __int16)v7, 5, 0, 0, -1073741823, -1, usbfile_bus_c, 6285, v23);
      return (unsigned int)v17;
    }
LABEL_3:
    if ( *((_QWORD *)v9 + 532) )
    {
      v30[0] = 1;
      if ( *((_WORD *)v9 + 2113) < 7u )
      {
        LOWORD(v21) = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, int, int *, unsigned __int16))v9 + 532))(
                *((_QWORD *)v9 + 529),
                &v27,
                v12,
                v25,
                v21,
                v30,
                v24[0]);
      }
      else
      {
        v13 = v10 + 672;
        v10[673] = *((unsigned __int16 *)v9 + 2604);
        v14 = v10 + 674;
        *(_OWORD *)(v10 + 674) = 0LL;
        v10[678] = 0;
        if ( *((_WORD *)v9 + 2604) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v20 = *((unsigned __int16 *)v9 + i + 2604);
            if ( !(_WORD)v20 )
              break;
            *v14++ = v20;
          }
        }
        else
        {
          i = 0;
        }
        *v13 = i + 1;
        v22 = v28;
        v13[i + 1] = v7;
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, _DWORD *, int *, unsigned __int16, void *, _DWORD *))v9
               + 561))(
                *((_QWORD *)v9 + 529),
                &v27,
                DeviceHandle,
                v25,
                v10 + 672,
                v30,
                v24[0],
                v22,
                v10 + 668);
      }
      v17 = v16;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 1212445810LL);
      if ( (v17 & 0xC0000000) == 0xC0000000 )
      {
        if ( v30[1] == 5 )
          v10[705] = v30[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v8, v7);
        LOBYTE(v23) = 0;
        UsbhException(a1, (unsigned __int16)v7, 4, (int)v30, 84, v17, -1, usbfile_bus_c, 6405, v23);
        UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE, (unsigned int)v7, v30, 84);
        v27 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v11 = v27;
      }
      if ( v17 >= 0 )
      {
        v17 = UsbhLinkPdoDeviceHandle(a1, v28, v11);
        if ( (v17 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v27, v7);
          Usbh_HubRemoveUsbDevice(a1, v27);
        }
      }
    }
    else
    {
      v17 = -1073741822;
      if ( v12 )
        Usbh_HubDerefDeviceHandle(a1, v12, a1, 1212445810LL);
    }
    return (unsigned int)v17;
  }
  Log(a1, 4, 1668441139, v8, v7);
  TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, v24);
  Log(a1, 4, 1668441140, DeviceHandle, v24[0]);
  if ( (TtDeviceHandle & 0xC0000000) != 0xC0000000 )
  {
    v8 = v29;
LABEL_2:
    v12 = DeviceHandle;
    goto LABEL_3;
  }
  LOBYTE(v23) = 0;
  UsbhException(a1, (unsigned __int16)v7, 104, 0, 0, TtDeviceHandle, -1, usbfile_bus_c, 6304, v23);
  return TtDeviceHandle;
}
