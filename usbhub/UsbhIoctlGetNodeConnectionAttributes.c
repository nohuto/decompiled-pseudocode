/*
 * XREFs of UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C002A630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C003DE98 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040FD4 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0041218 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C00415A8 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionAttributes(__int64 a1, PIRP Irp, __int64 a3)
{
  _IRP *MasterIrp; // r14
  size_t v7; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 PortData; // rbp
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF

  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x26u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v16 = 272;
  Log(a1, 32, 1768898145, (__int64)Irp, (__int64)MasterIrp);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185, 1);
  if ( v9 )
  {
    v10 = UsbhAcquireApiLock(a1, 0xF00D000A, &v15);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = UsbhIoctlValidateParameters(a1, 4, 12);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        v10 = -1073741811;
      }
      else
      {
        PortData = UsbhGetPortData(a1, MasterIrp->Type);
        memset(MasterIrp, 0, v7);
        if ( PortData )
        {
          v10 = 0;
          *(_DWORD *)&MasterIrp->Type = *(unsigned __int16 *)(PortData + 4);
          *(_QWORD *)(&MasterIrp->Size + 1) = *(unsigned int *)(PortData + 428);
          Irp->IoStatus.Information = 12LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  Log(a1, 32, 1768897633, (__int64)Irp, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x27u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v14);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, (int)&v16, 4, v10, 0, usbfile_ioctl_c, 1852, 0);
  if ( v15 )
    UsbhReleaseApiLock(a1, 4027383818LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v12, v9);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
