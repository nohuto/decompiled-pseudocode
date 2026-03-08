/*
 * XREFs of UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C002A630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0001380 (UsbhUnlatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
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

__int64 __fastcall UsbhIoctlGetNodeConnectionDriverKeyName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 Type; // r15
  _IRP *MasterIrp; // r14
  size_t v8; // r13
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 DeviceProperty; // rbx
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rbx
  ULONG v15; // eax
  unsigned __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-70h]
  char v21; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  Type = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x36u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v23 = 264;
  Log(a1, 32, 1768898101, (__int64)Irp, (__int64)MasterIrp);
  ResultLength = 0;
  v9 = FdoExt(a1);
  v10 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v9 + 434), (__int64)Irp, 1430414185, 1);
  if ( !v10 )
  {
    LODWORD(DeviceProperty) = -1073741670;
    goto LABEL_20;
  }
  LODWORD(DeviceProperty) = UsbhAcquireApiLock(a1, 0xF00D0005, &v21);
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
  {
    LODWORD(DeviceProperty) = UsbhIoctlValidateParameters(a1, 4, 10);
    if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
    {
      Type = MasterIrp->Type;
      v12 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496C3035u);
      v13 = (struct _DEVICE_OBJECT *)v12;
      if ( !v12 )
      {
        LODWORD(DeviceProperty) = -1073741811;
        goto LABEL_20;
      }
      v14 = PdoExt(v12);
      if ( (v14[355] & 0x400) == 0 )
      {
        LODWORD(DeviceProperty) = -1073741436;
LABEL_19:
        UsbhUnlatchPdo(a1, (__int64)v13, (__int64)Irp, 0x496C3035u);
        goto LABEL_20;
      }
      memset(MasterIrp, 0, v8);
      *(_DWORD *)&MasterIrp->Type = *((unsigned __int16 *)v14 + 714);
      ResultLength = v8 - 10;
      DeviceProperty = IoGetDeviceProperty(
                         v13,
                         DevicePropertyDriverKeyName,
                         v8 - 10,
                         &MasterIrp->MdlAddress,
                         &ResultLength);
      Log(a1, 32, 1768383600, (__int64)Irp, DeviceProperty);
      if ( (_DWORD)DeviceProperty == -1073741789 )
      {
        LODWORD(DeviceProperty) = 0;
      }
      else if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
      {
        goto LABEL_19;
      }
      v15 = ResultLength + 10;
      *(_DWORD *)(&MasterIrp->Size + 1) = ResultLength + 10;
      if ( (unsigned int)v8 < v15 )
      {
        LOWORD(MasterIrp->MdlAddress) = 0;
        v16 = 10LL;
      }
      else
      {
        v16 = v15;
      }
      Irp->IoStatus.Information = v16;
      goto LABEL_19;
    }
  }
LABEL_20:
  Log(a1, 32, 1768897589, (__int64)Irp, (int)DeviceProperty);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(DeviceProperty) )
    {
      UsbhException(a1, Type, 91, (int)&v23, 4, DeviceProperty, v17, usbfile_ioctl_c, 2648, v17);
      LOWORD(v17) = 0;
    }
    if ( (unsigned int)v8 >= 0xA )
    {
      LOWORD(MasterIrp->MdlAddress) = v17;
      *(_DWORD *)(&MasterIrp->Size + 1) = 10;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v17 )
  {
    LODWORD(v20) = DeviceProperty;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x37u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v20);
  }
  if ( v21 )
    UsbhReleaseApiLock(a1, 4027383813LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v18, v10);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)DeviceProperty;
}
