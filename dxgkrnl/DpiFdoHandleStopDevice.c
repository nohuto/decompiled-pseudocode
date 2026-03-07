__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 v4; // rdi
  NTSTATUS v5; // r15d
  void *started; // r14
  char v7; // r12
  __int64 DeviceExtension; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  DXGGLOBAL *Global; // rax
  void *v13; // rcx
  int v14; // eax
  char v15; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v17; // rcx
  union _LARGE_INTEGER v19[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v20[10]; // [rsp+60h] [rbp-98h] BYREF

  memset(v20, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v20[1]);
  v4 = 0LL;
  v5 = 0;
  started = 0LL;
  v7 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  v20[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 5;
  LOBYTE(v20[6]) = -1;
  v19[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v19, 0x82u);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
  {
    if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
      v4 = DeviceExtension;
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 2728);
    if ( v10 )
      v4 = *(_QWORD *)(v10 + 64);
  }
  if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    v7 = 1;
    if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 236) - 5) <= 1 )
    {
      started = DxgkStartPnPTransition(0LL, 0x200000000uLL);
      if ( !started )
        WdLogSingleEntry1(6LL, -1073741670LL);
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 236) == 6 && v4 )
  {
    if ( *(_BYTE *)(v4 + 480) )
    {
      if ( *(_DWORD *)(v4 + 4000) != 3 )
      {
        v11 = *(DXGADAPTER **)(v4 + 3912);
        if ( v11 )
        {
          if ( *((_DWORD *)v11 + 50) != 2 && *((_DWORD *)v11 + 50) != 4 )
            DXGADAPTER::Stop(v11, 0, 0);
          Global = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *(_DWORD *)(v4 + 4000) = 3;
        }
      }
    }
    else
    {
      DpiRequestIoPowerState(*(_QWORD *)(v4 + 24), 3, v9, 0);
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 504) )
  {
    DpiLdaStopAllAdaptersInChain(a1, v20);
  }
  else if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  DpiFdoCloseDeviceFileObject(DeviceExtension);
  v13 = *(void **)(DeviceExtension + 1288);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(DeviceExtension + 1288) = 0LL;
  }
  if ( *(_DWORD *)(DeviceExtension + 236) != 4 )
  {
    *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
    v14 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    *(_DWORD *)(DeviceExtension + 240) = v14;
    *(_DWORD *)(DeviceExtension + 236) = 4;
  }
  WdLogSingleEntry1(4LL, a1);
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 5) <= 1 )
  {
    v15 = *(_BYTE *)(DeviceExtension + 1152);
    if ( v7 )
    {
      if ( v15 )
      {
        AcquireMiniportListMutex();
        if ( dword_1C013B7F0 == 2 )
          DpiEnableMsBddFallbackDriver((__int64)v20);
        if ( (struct _DEVICE_OBJECT *)qword_1C013B740 == a1 )
          qword_1C013B740 = 0LL;
        _InterlockedExchange64(&qword_1C013B4D8, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      if ( v4 && *(_BYTE *)(v4 + 2743) )
        DxgkCompletePnPTransition(started);
      else
        DpiPnpEnableVga(1u, 0, (__int64)started, (__int64)v20);
    }
    else if ( v15 )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C013B740 == a1 )
        qword_1C013B740 = 0LL;
      _InterlockedExchange64(&qword_1C013B4D8, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    a2->IoStatus.Status = 0;
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  if ( v4 )
    v17 = *(_QWORD *)(v4 + 3912);
  else
    v17 = 0LL;
  DxgkLogInternalTriageEvent(
    v17,
    131078,
    -1,
    (__int64)L"Adapter StopDevice has completed with status %1",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v5;
}
