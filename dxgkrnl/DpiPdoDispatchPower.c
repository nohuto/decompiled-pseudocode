/*
 * XREFs of DpiPdoDispatchPower @ 0x1C001A100
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PVOID DeviceExtension; // rsi
  ULONG Options; // eax
  POWER_STATE v7; // ebx
  unsigned int EaLength; // r12d
  NTSTATUS v9; // ebp
  NTSTATUS v10; // edi
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
      goto LABEL_13;
    v10 = 0;
    goto LABEL_12;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( Options != 1 )
  {
    v10 = 0;
    if ( Options )
      goto LABEL_13;
    *((POWER_STATE *)DeviceExtension + 70) = v7;
    goto LABEL_12;
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( v7.SystemState > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, v7);
    v9 = DpiPdoSetDevicePower(
           DeviceObject,
           (unsigned int)v7.SystemState,
           CurrentStackLocation->Parameters.Create.EaLength);
  }
  else if ( v7.SystemState >= *((_DWORD *)DeviceExtension + 71) )
  {
    v9 = 0;
  }
  else
  {
    EaLength = CurrentStackLocation->Parameters.Create.EaLength;
    if ( EaLength == 3 )
    {
      if ( (WORD1(CurrentStackLocation->Parameters.CreatePipe.SecurityContext) & 0xF) == 2
        || (WORD1(CurrentStackLocation->Parameters.CreatePipe.SecurityContext) & 0xF) == 3
        || (WORD1(CurrentStackLocation->Parameters.CreatePipe.SecurityContext) & 0xF) == 4 )
      {
        EaLength = 2;
        WdLogSingleEntry1(4LL, DeviceObject);
      }
      else if ( (WORD1(CurrentStackLocation->Parameters.CreatePipe.SecurityContext) & 0xF) == 5 )
      {
        WdLogSingleEntry1(4LL, DeviceObject);
      }
      else
      {
        WdLogSingleEntry1(2LL, DeviceObject);
      }
    }
    v9 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v7.SystemState, EaLength);
    PoSetPowerState(DeviceObject, DevicePowerState, v7);
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  v10 = v9;
  if ( v9 != -1073741637 )
LABEL_12:
    Irp->IoStatus.Status = v10;
LABEL_13:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
