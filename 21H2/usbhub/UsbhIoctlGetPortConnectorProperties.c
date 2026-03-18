/*
 * XREFs of UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C0029C60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F800 (memset.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C003D610 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040730 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040958 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0040CE8 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetPortConnectorProperties(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  _DWORD *v9; // r13
  unsigned int v10; // edi
  unsigned int v11; // ebp
  __int64 Type; // r15
  _DWORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int16 v16; // ax
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v19; // [rsp+28h] [rbp-60h]
  char v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Bu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v21 = 278;
  v6 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Cu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0014, &v20);
  v11 = v10 >> 30;
  if ( v10 >> 30 != 3 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 4, 18);
    v11 = v10 >> 30;
    if ( v10 >> 30 != 3 )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      memset(MasterIrp, 0, v8);
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18;
      if ( UsbhGetPortData(a1, Type) )
      {
        v13 = FdoExt(a1);
        Log(a1, 4, 1967604816, (__int64)(v13 + 1056), 0LL);
        if ( (*(_DWORD *)(v15 + 2560) & 1) != 0 )
        {
          v17 = *(__int64 (__fastcall **)(_QWORD))(v14 + 304);
          if ( v17 )
            v16 = v17(*(_QWORD *)(v14 + 8));
          else
            v16 = 0;
        }
        else
        {
          v16 = 0;
        }
        if ( v16 == (_WORD)Type )
          LODWORD(MasterIrp->MdlAddress) |= 2u;
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 377) + 4 * Type) & 0x10) == 0 )
          LODWORD(MasterIrp->MdlAddress) |= 1u;
      }
      Irp->IoStatus.Information = 18LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Du,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v19);
  }
  if ( v11 == 3 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, (int)&v21, 4, v10, 0, usbfile_ioctl_c, 913, 0);
  if ( v20 )
    UsbhReleaseApiLock(a1, 4027383828LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return v10;
}
