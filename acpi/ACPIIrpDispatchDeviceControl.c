__int64 __fastcall ACPIIrpDispatchDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  KPROCESSOR_MODE RequestorMode; // dl
  ULONG_PTR v5; // rsi
  unsigned int v6; // eax
  KIRQL v7; // al
  __int64 v8; // rdi
  unsigned int Status; // edi
  unsigned int LowPart; // ebp
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RequestorMode = Irp->RequestorMode;
  v5 = BugCheckParameter3;
  if ( RequestorMode )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (Irp->Flags & 0x400000) != 0 )
    {
      if ( LowPart != 3325956 && LowPart != 3325952 )
      {
        v14 = LowPart - 3325976;
        if ( (unsigned int)v14 > 0x30 )
          return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
        BugCheckParameter3 = 0x1111100011111LL;
        if ( !_bittest64((const __int64 *)&BugCheckParameter3, v14) )
          return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
      }
    }
    else if ( !RootDeviceExtension
           || BugCheckParameter3 != *(_QWORD *)(RootDeviceExtension + 768)
           || LowPart != 3325952
           || !SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
    {
      if ( LowPart == 3325956
        || LowPart == 3325952
        || (v12 = LowPart - 3325968, (unsigned int)v12 <= 0x38) && (v13 = 0x111110001111111LL, _bittest64(&v13, v12)) )
      {
        Status = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        goto LABEL_46;
      }
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v8 = *(_QWORD *)(v5 + 64);
      if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
        KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
LABEL_5:
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      if ( *(_QWORD *)(v8 + 776) )
      {
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 776), Irp);
      }
      Status = Irp->IoStatus.Status;
LABEL_46:
      IofCompleteRequest(Irp, 0);
      return Status;
    }
  }
  v6 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v6 < 0x32C000 )
  {
LABEL_3:
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v8 = *(_QWORD *)(v5 + 64);
    if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
    goto LABEL_5;
  }
  switch ( v6 )
  {
    case 0x32C000u:
    case 0x32C01Cu:
    case 0x32C040u:
    case 0x32C048u:
      Status = ACPIIoctlAsyncEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C004u:
    case 0x32C018u:
    case 0x32C03Cu:
    case 0x32C044u:
      Status = ACPIIoctlEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C008u:
      Status = ACPIIoctlRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C00Cu:
      Status = ACPIIoctlUnRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C010u:
      Status = ACPIIoctlAcquireGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C014u:
      Status = ACPIIoctlReleaseGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C020u:
      Status = ACPIIoctlEnumChildren(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C024u:
      Status = ACPIIoctlQueryDeviceBiosName(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C028u:
      Status = ACPIIoctlGetDeviceInformation(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C02Cu:
      Status = ACPIIoctlTranslateBiosResources(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C030u:
      Status = ACPIIoctlRegisterDeviceFirmwareLock(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C034u:
      Status = ACPIIoctlUnregisterDeviceFirmwareLockHandler(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C038u:
      Status = ACPIIoctlGetDeviceSpecificData(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C04Cu:
      Status = ACPIIoctlEvaluateUsb4Osc(v5, Irp);
      break;
    case 0x32C050u:
      Status = ACPIIoctlQueryDeviceBiosNameEx(v5, Irp, CurrentStackLocation);
      break;
    default:
      goto LABEL_3;
  }
  return Status;
}
