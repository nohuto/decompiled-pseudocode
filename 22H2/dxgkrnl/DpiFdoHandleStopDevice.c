/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C039BCA0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C039B860 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C039C0D0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiRequestIoPowerState @ 0x1C01F0CB0 (DpiRequestIoPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F1460 (DpiFdoStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C020667C (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DxgkStartPnPTransition @ 0x1C021989C (DxgkStartPnPTransition.c)
 *     DpiPnpEnableVga @ 0x1C021B690 (DpiPnpEnableVga.c)
 *     DxgkCompletePnPTransition @ 0x1C02235A4 (DxgkCompletePnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BA418 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0313778 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C039A7D8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoCloseDeviceFileObject @ 0x1C039B0A8 (DpiFdoCloseDeviceFileObject.c)
 *     DpiFdoStopAdapter @ 0x1C039D274 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C03A8B64 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  PVOID v4; // rdi
  NTSTATUS v5; // r15d
  void *started; // r14
  char v7; // r12
  PVOID DeviceExtension; // rbx
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
  DeviceExtension = a1->DeviceExtension;
  v20[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 5;
  LOBYTE(v20[6]) = -1;
  v19[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v19, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( !*((_DWORD *)DeviceExtension + 126) || *((_BYTE *)DeviceExtension + 508) )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
      v4 = DeviceExtension;
  }
  else
  {
    v10 = *((_QWORD *)DeviceExtension + 341);
    if ( v10 )
      v4 = *(PVOID *)(v10 + 64);
  }
  if ( *((_DWORD *)DeviceExtension + 60) == 2 )
  {
    v7 = 1;
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 59) - 5) <= 1 )
    {
      started = DxgkStartPnPTransition(0LL, 0x200000000uLL);
      if ( !started )
        WdLogSingleEntry1(6LL, -1073741670LL);
    }
  }
  if ( *((_DWORD *)DeviceExtension + 59) == 6 && v4 )
  {
    if ( *((_BYTE *)v4 + 480) )
    {
      if ( *((_DWORD *)v4 + 1000) != 3 )
      {
        v11 = (DXGADAPTER *)*((_QWORD *)v4 + 489);
        if ( v11 )
        {
          if ( *((_DWORD *)v11 + 50) != 2 && *((_DWORD *)v11 + 50) != 4 )
            DXGADAPTER::Stop(v11, 0, 0);
          Global = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *((_DWORD *)v4 + 1000) = 3;
        }
      }
    }
    else
    {
      DpiRequestIoPowerState(*((_QWORD *)v4 + 3), 3, v9, 0);
    }
  }
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( *((_DWORD *)DeviceExtension + 60) == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  DpiFdoCloseDeviceFileObject((__int64)DeviceExtension);
  v13 = (void *)*((_QWORD *)DeviceExtension + 161);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)DeviceExtension + 161) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    *((_DWORD *)DeviceExtension + (*((_DWORD *)DeviceExtension + 69) & 7) + 61) = *((_DWORD *)DeviceExtension + 60);
    v14 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v14;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  WdLogSingleEntry1(4LL, a1);
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    v15 = *((_BYTE *)DeviceExtension + 1152);
    if ( v7 )
    {
      if ( v15 )
      {
        AcquireMiniportListMutex();
        if ( dword_1C01407F0 == 2 )
          DpiEnableMsBddFallbackDriver((__int64)v20);
        if ( (struct _DEVICE_OBJECT *)qword_1C0140740 == a1 )
          qword_1C0140740 = 0LL;
        _InterlockedExchange64(&qword_1C01404D8, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      if ( v4 && *((_BYTE *)v4 + 2743) )
        DxgkCompletePnPTransition(started);
      else
        DpiPnpEnableVga(1u, 0, (__int64)started, (__int64)v20);
    }
    else if ( v15 )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C0140740 == a1 )
        qword_1C0140740 = 0LL;
      _InterlockedExchange64(&qword_1C01404D8, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    Irp->IoStatus.Status = 0;
    v5 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  if ( v4 )
    v17 = *((_QWORD *)v4 + 489);
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
