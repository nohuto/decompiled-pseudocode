/*
 * XREFs of UsbhIoctlGetHubCapsEx @ 0x1C003E8F4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C0029C60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C003D610 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040730 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040958 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0040CE8 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // r14
  _DWORD *v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  int v9; // ecx
  int v10; // edx
  __int64 v12; // [rsp+28h] [rbp-60h]
  char v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v14 = 276;
  v4 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = v4;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x16u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v7 = UsbhAcquireApiLock(a1, 0xF00D0012, &v13);
  v8 = v7 >> 30;
  if ( v7 >> 30 != 3 )
  {
    v7 = UsbhIoctlValidateParameters(a1, 0, 4);
    v8 = v7 >> 30;
    if ( v7 >> 30 != 3 )
    {
      *(_DWORD *)&MasterIrp->Type = 0;
      v9 = 0;
      v10 = v6[640];
      if ( (v10 & 0x8000) != 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        v9 = 1;
        v10 = v6[640];
      }
      if ( (v10 & 0x80u) != 0 )
      {
        v9 |= 8u;
        *(_DWORD *)&MasterIrp->Type = v9;
        v10 = v6[640];
      }
      if ( (v10 & 0x10000) != 0 )
      {
        v9 |= 4u;
        *(_DWORD *)&MasterIrp->Type = v9;
        v10 = v6[640];
      }
      if ( (v10 & 0x8001) == 0x8001 || (v10 & 0x40) != 0 )
      {
        v9 |= 2u;
        *(_DWORD *)&MasterIrp->Type = v9;
        v10 = v6[640];
      }
      if ( (v10 & 0x80000) != 0 )
      {
        v9 |= 0x20u;
        *(_DWORD *)&MasterIrp->Type = v9;
        v10 = v6[640];
      }
      if ( (v10 & 1) != 0 )
        *(_DWORD *)&MasterIrp->Type = v9 | 0x10;
      Irp->IoStatus.Information = 4LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v12);
  }
  if ( v8 == 3 && !Usb_Disconnected(v7) )
    UsbhException(a1, 0, 91, (int)&v14, 4, v7, 0, usbfile_ioctl_c, 700, 0);
  if ( v13 )
    UsbhReleaseApiLock(a1, 4027383826LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v7;
}
