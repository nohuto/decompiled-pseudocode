__int64 __fastcall UsbhIoctlCyclePort(__int64 a1, PIRP Irp)
{
  int v4; // r14d
  _IRP *MasterIrp; // r15
  _DWORD *v6; // rax
  _QWORD *v7; // r12
  int v8; // ebx
  __int64 v9; // rbp
  char IsAdmin; // al
  __int64 v11; // r8
  char v12; // bl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+54h] [rbp-44h] BYREF
  char v19; // [rsp+A8h] [rbp+10h] BYREF
  char v20; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0;
  v17 = 0;
  v19 = 0;
  v4 = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v18 = 7;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v6 = FdoExt(a1);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v6 + 434), (__int64)Irp, 1430414185, 1);
  if ( v7 )
  {
    v8 = UsbhAcquireApiLock(a1, 0xF00D0002, &v20);
    if ( (v8 & 0xC0000000) != 0xC0000000 )
    {
      v8 = UsbhIoctlValidateParameters(a1, 4, 8);
      if ( (v8 & 0xC0000000) != 0xC0000000 )
      {
        v9 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496F3034u);
        if ( v9 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          LOBYTE(v11) = 1;
          v12 = IsAdmin;
          UsbhUpdateUxdSettings(a1, v9, v11, &v19);
          if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || v19 || v12 )
          {
            v13 = UsbhCycleDevicePort(a1, v9, &v17);
            v4 = v17;
            v8 = v13;
          }
          else
          {
            v8 = -1073741637;
          }
          UsbhUnlatchPdo(a1, v9, (__int64)Irp, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v8 = -1073741667;
          v4 = -1073713152;
        }
        Irp->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v4;
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v16);
  }
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
    UsbhException(a1, 0, 91, (int)&v18, 4, v8, 0, usbfile_ioctl_c, 384, 0);
  if ( v20 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v14, v7);
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
