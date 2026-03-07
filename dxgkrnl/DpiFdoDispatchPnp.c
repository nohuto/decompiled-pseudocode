__int64 __fastcall DpiFdoDispatchPnp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // [rsp+30h] [rbp-68h]
  char v4; // [rsp+38h] [rbp-60h]
  int Status; // [rsp+3Ch] [rbp-5Ch]
  UCHAR MinorFunction; // [rsp+40h] [rbp-58h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+48h] [rbp-50h]
  POWER_STATE State; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+54h] [rbp-44h]
  unsigned int v10; // [rsp+58h] [rbp-40h]
  POWER_STATE v11; // [rsp+5Ch] [rbp-3Ch]
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+78h] [rbp-20h]

  v12 = 0LL;
  Status = -1073741637;
  v4 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v12 = *(_QWORD *)(DeviceExtension + 40);
  if ( CurrentStackLocation->MinorFunction < 0x18u
    && *(_QWORD *)(DeviceExtension + 8LL * CurrentStackLocation->MinorFunction + 288) )
  {
    return (*(unsigned int (__fastcall **)(struct _DEVICE_OBJECT *, IRP *))(DeviceExtension
                                                                          + 8LL * CurrentStackLocation->MinorFunction
                                                                          + 288))(
             a1,
             a2);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  switch ( MinorFunction )
  {
    case 0u:
      memset(&State, 0, sizeof(State));
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      State.SystemState = PowerSystemWorking;
      *(_DWORD *)(DeviceExtension + 284) = 1;
      *(_DWORD *)(DeviceExtension + 280) = 1;
      v11.SystemState = PoSetPowerState(a1, DevicePowerState, State).SystemState;
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 2;
      Status = 0;
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
      KeLeaveCriticalRegion();
      break;
    case 1u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C013B491 && !*(_BYTE *)(DeviceExtension + 481) || *(_BYTE *)(DeviceExtension + 480) )
      {
        v4 = 1;
        Status = -1073741823;
        WdLogSingleEntry3(2LL, a1, (unsigned __int8)byte_1C013B491, *(unsigned __int8 *)(DeviceExtension + 480));
      }
      else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
      {
        Status = 0;
      }
      else
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 4 )
          WdLogSingleEntry4(0LL, 275LL, 21LL, DeviceExtension, -1073741823LL);
        if ( DeviceExtension
          && *(_DWORD *)(DeviceExtension + 16) == 1953656900
          && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
        {
          DpiFdoCloseDeviceFileObject(DeviceExtension);
        }
        *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
        ++*(_DWORD *)(DeviceExtension + 276);
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
        *(_DWORD *)(DeviceExtension + 236) = 5;
        Status = 0;
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 3u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v4 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 )
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 5 )
        {
          *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
          v10 = *(_DWORD *)(DeviceExtension + 276) - 1;
          *(_DWORD *)(DeviceExtension + 276) = v10;
          *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v10 % 8) + 244);
          if ( DeviceExtension
            && *(_DWORD *)(DeviceExtension + 16) == 1953656900
            && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
          {
            Status = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
            if ( Status < 0 )
              WdLogSingleEntry1(2LL, Status);
          }
        }
        else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
        {
          *(_BYTE *)(DeviceExtension + 232) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
        }
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 4u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 4;
      Status = 0;
      WdLogSingleEntry1(4LL, a1);
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 5u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C013B491 && !*(_BYTE *)(DeviceExtension + 481) || *(_BYTE *)(DeviceExtension + 480) )
      {
        v4 = 1;
        Status = -1073741823;
      }
      else
      {
        v4 = 1;
        Status = -1073741808;
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 6u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v4 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 && *(_DWORD *)(DeviceExtension + 236) == 3 )
      {
        *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
        v9 = *(_DWORD *)(DeviceExtension + 276) - 1;
        *(_DWORD *)(DeviceExtension + 276) = v9;
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v9 % 8) + 244);
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 9u:
      if ( DeviceExtension
        && *(_DWORD *)(DeviceExtension + 16) == 1953656900
        && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
      {
        v4 = 1;
        IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
        Status = a2->IoStatus.Status;
        qmemcpy((void *)(DeviceExtension + 1296), CurrentStackLocation->Parameters.Create.SecurityContext, 0x40uLL);
      }
      break;
    case 0x14u:
      v4 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 || Status == -1073741637 )
      {
        if ( DeviceExtension
          && *(_DWORD *)(DeviceExtension + 16) == 1953656900
          && *(_DWORD *)(DeviceExtension + 20) == 4 )
        {
          Status = 0;
          a2->IoStatus.Information |= 2uLL;
        }
        else
        {
          if ( *(_BYTE *)(DeviceExtension + 232) == 1 )
          {
            Status = 0;
            a2->IoStatus.Information |= 4uLL;
          }
          else if ( *(_BYTE *)(DeviceExtension + 480) )
          {
            Status = 0;
            a2->IoStatus.Information |= 0x22uLL;
          }
          if ( DeviceExtension )
          {
            if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
            {
              v13 = DeviceExtension;
              if ( *(_BYTE *)(DeviceExtension + 5388) )
                a2->IoStatus.Information |= 0x100uLL;
            }
          }
        }
      }
      break;
    case 0x17u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 6;
      Status = 0;
      WdLogSingleEntry1(4LL, a1);
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
LABEL_81:
      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
      KeLeaveCriticalRegion();
      break;
  }
  if ( v4 || Status < 0 && Status != -1073741637 )
  {
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 1);
  }
  else
  {
    if ( Status != -1073741637 )
      a2->IoStatus.Status = Status;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  return (unsigned int)Status;
}
