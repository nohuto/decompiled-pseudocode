__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // r14
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  __int64 v11; // [rsp+28h] [rbp-60h]
  char v12; // [rsp+98h] [rbp+10h] BYREF
  int v13; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v13 = 276;
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
  v7 = UsbhAcquireApiLock(a1, 0xF00D0012, &v12);
  if ( (v7 & 0xC0000000) != 0xC0000000 )
  {
    v7 = UsbhIoctlValidateParameters(a1, 0, 4);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      *(_DWORD *)&MasterIrp->Type = 0;
      v8 = 0;
      if ( (v6[640] & 0x8000) != 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        v8 = 1;
      }
      if ( (v6[640] & 0x80u) != 0 )
      {
        v8 |= 8u;
        *(_DWORD *)&MasterIrp->Type = v8;
      }
      if ( (v6[640] & 0x10000) != 0 )
      {
        v8 |= 4u;
        *(_DWORD *)&MasterIrp->Type = v8;
      }
      v9 = v6[640];
      if ( (v9 & 0x8001) == 0x8001 || (v9 & 0x40) != 0 )
      {
        v8 |= 2u;
        *(_DWORD *)&MasterIrp->Type = v8;
      }
      if ( (v6[640] & 0x80000) != 0 )
      {
        v8 |= 0x20u;
        *(_DWORD *)&MasterIrp->Type = v8;
      }
      if ( (v6[640] & 1) != 0 )
        *(_DWORD *)&MasterIrp->Type = v8 | 0x10;
      Irp->IoStatus.Information = 4LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v11);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    UsbhException(a1, 0, 91, (int)&v13, 4, v7, 0, usbfile_ioctl_c, 700, 0);
  if ( v12 )
    UsbhReleaseApiLock(a1, 4027383826LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
