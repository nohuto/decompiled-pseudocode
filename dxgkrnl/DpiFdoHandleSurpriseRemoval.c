NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  char v12; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  *(_BYTE *)(DeviceExtension + 1163) = 1;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v6 = *(_DWORD *)(DeviceExtension + 236);
  if ( v6 != 6 )
  {
    v7 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v7 = DeviceExtension;
    }
    else
    {
      v8 = *(_QWORD *)(DeviceExtension + 2728);
      if ( v8 )
        v7 = *(_QWORD *)(v8 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && (v6 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && ((v6 - 3) & 0xFFFFFFFD) == 0) )
    {
      v12 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v12);
      if ( IsDevicePresent < 0
        || !v12
        && (*(_BYTE *)(DeviceExtension + 1161) = 1, v7)
        && (IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                                *(_QWORD *)(DeviceExtension + 40),
                                *(_QWORD *)(DeviceExtension + 48),
                                v7,
                                1LL),
            IsDevicePresent < 0) )
      {
        *(_BYTE *)(DeviceExtension + 1162) = 1;
        WdLogSingleEntry5(
          0LL,
          275LL,
          25LL,
          2LL - (*(_BYTE *)(DeviceExtension + 1152) != 0),
          *(unsigned int *)(DeviceExtension + 1124),
          *(unsigned int *)(DeviceExtension + 1128));
      }
    }
    if ( v7 == DeviceExtension )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 3808), 1u);
      *(_DWORD *)(v7 + 4LL * (*(_DWORD *)(v7 + 276) & 7) + 244) = *(_DWORD *)(v7 + 240);
      v9 = *(_DWORD *)(v7 + 236);
      ++*(_DWORD *)(v7 + 276);
      *(_DWORD *)(v7 + 240) = v9;
      *(_DWORD *)(v7 + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v7 + 3808));
      KeLeaveCriticalRegion();
    }
    else
    {
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v10 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v10;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  WdLogSingleEntry1(4LL, a1);
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
