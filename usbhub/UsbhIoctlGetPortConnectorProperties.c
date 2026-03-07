__int64 __fastcall UsbhIoctlGetPortConnectorProperties(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r15
  _DWORD *v9; // r13
  int v10; // ebx
  __int64 Type; // rbp
  _DWORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  __int16 v15; // ax
  __int64 (__fastcall *v16)(_QWORD); // rax
  __int64 v18; // [rsp+28h] [rbp-60h]
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Bu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v20 = 278;
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
  v10 = UsbhAcquireApiLock(a1, 0xF00D0014, &v19);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 4, 18);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      memset(MasterIrp, 0, v8);
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18;
      if ( UsbhGetPortData(a1, Type) )
      {
        v12 = FdoExt(a1);
        Log(a1, 4, 1967604816, (__int64)(v12 + 1056), 0LL);
        if ( (*(_DWORD *)(v14 + 2560) & 1) != 0 )
        {
          v16 = *(__int64 (__fastcall **)(_QWORD))(v13 + 304);
          if ( v16 )
            v15 = v16(*(_QWORD *)(v13 + 8));
          else
            v15 = 0;
        }
        else
        {
          v15 = 0;
        }
        if ( v15 == (_WORD)Type )
          LODWORD(MasterIrp->MdlAddress) |= 2u;
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 377) + 4 * Type) & 0x10) == 0 )
          LODWORD(MasterIrp->MdlAddress) |= 1u;
      }
      Irp->IoStatus.Information = 18LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Du,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v18);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, (int)&v20, 4, v10, 0, usbfile_ioctl_c, 913, 0);
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027383828LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
