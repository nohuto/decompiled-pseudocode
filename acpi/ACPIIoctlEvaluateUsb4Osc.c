/*
 * XREFs of ACPIIoctlEvaluateUsb4Osc @ 0x1C0030B4C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIIoctlEvaluateUsb4Osc(ULONG_PTR BugCheckParameter3, PIRP Irp, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  _IRP *MasterIrp; // rbx
  ULONG_PTR BugCheckParameter4; // rbp
  int v9; // r8d
  int v10; // ecx
  int v12[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  int MdlAddress_high; // [rsp+48h] [rbp-30h]

  v3 = *(_DWORD *)(a3 + 16);
  Irp->IoStatus.Information = 0LL;
  ExAcquirePushLockExclusiveEx(&Usb4FeatureControlPushLock, 0LL);
  if ( v3 >= 0x18 )
  {
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1432569153 && MasterIrp->AllocationProcessorNumber )
    {
      if ( (HIDWORD(MasterIrp->MdlAddress) & AcpiUsb4FeatureControlGranted) == AcpiUsb4FeatureControlGranted )
      {
        v13[0] = LOBYTE(MasterIrp->Reserved);
        v13[1] = MasterIrp->MdlAddress;
        MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
        BugCheckParameter4 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
        *(_OWORD *)v12 = SB_OSC_USB4_UUID;
        v6 = ACPIAmliEvaluateOsc(*(_QWORD *)(BugCheckParameter4 + 760), (int)v12, v9, 3, v13);
        if ( v6 >= 0 )
        {
          v10 = HIDWORD(MasterIrp->MdlAddress);
          *((_BYTE *)&MasterIrp->Flags + 5) = Usb4OscReEvaluated;
          *((_BYTE *)&MasterIrp->Flags + 6) = Usb4ControlRetained;
          *((_BYTE *)&MasterIrp->Flags + 4) = 1;
          if ( (MdlAddress_high | v10) != v10 )
            KeBugCheckEx(0xA3u, 2uLL, 0x131368uLL, *(_QWORD *)(BugCheckParameter4 + 768), BugCheckParameter4);
          if ( !LOBYTE(MasterIrp->Reserved) )
            AcpiUsb4FeatureControlGranted = MdlAddress_high;
          MasterIrp->Flags = MdlAddress_high;
        }
        else
        {
          *((_BYTE *)&MasterIrp->Flags + 4) = 0;
        }
      }
      else
      {
        v6 = -1073741823;
      }
    }
    else
    {
      v6 = -1072431089;
    }
  }
  else
  {
    v6 = -1073741820;
  }
  ExReleasePushLockEx(&Usb4FeatureControlPushLock, 0LL);
  Irp->IoStatus.Status = v6;
  Irp->IoStatus.Information = 24LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
