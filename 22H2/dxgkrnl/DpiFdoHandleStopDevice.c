/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C02CABB0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C02CA780 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02CAFB0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C0175EA0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C01763B0 (DpiRequestIoPowerState.c)
 *     DxgkStartPnPTransition @ 0x1C019489C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C019BB04 (DxgkCompletePnPTransition.c)
 *     DpiPnpEnableVga @ 0x1C019E3B8 (DpiPnpEnableVga.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C026A6B4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C846C (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoCloseDeviceFileObject @ 0x1C02C9138 (DpiFdoCloseDeviceFileObject.c)
 *     DpiFdoStopAdapter @ 0x1C02CC414 (DpiFdoStopAdapter.c)
 *     DpiDestroyIoMmuContext @ 0x1C02D2278 (DpiDestroyIoMmuContext.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02D8964 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // ebx
  PVOID v5; // rsi
  void *started; // r15
  char v7; // r12
  PVOID DeviceExtension; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  DXGADAPTER *v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v27[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v28[10]; // [rsp+40h] [rbp-88h] BYREF

  memset(v28, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v4 = 0;
  v5 = 0LL;
  started = 0LL;
  v7 = 0;
  DeviceExtension = a1->DeviceExtension;
  v28[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 5;
  LOBYTE(v28[6]) = -1;
  v27[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v27, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( !*((_DWORD *)DeviceExtension + 126) || *((_BYTE *)DeviceExtension + 508) )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
      v5 = DeviceExtension;
  }
  else
  {
    v11 = *((_QWORD *)DeviceExtension + 341);
    if ( v11 )
      v5 = *(PVOID *)(v11 + 64);
  }
  if ( *((_DWORD *)DeviceExtension + 60) == 2 )
  {
    v7 = 1;
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 59) - 5) <= 1 )
    {
      started = DxgkStartPnPTransition(0LL, 0x200000000uLL);
      if ( !started )
      {
        v14 = WdLogNewEntry5_WdLowResource(v12, v9, v10, v13);
        *(_QWORD *)(v14 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v14);
      }
    }
  }
  if ( *((_DWORD *)DeviceExtension + 59) == 6 && v5 )
  {
    if ( *((_BYTE *)v5 + 480) )
    {
      if ( *((_DWORD *)v5 + 994) != 3 )
      {
        v15 = (DXGADAPTER *)*((_QWORD *)v5 + 487);
        if ( v15 )
        {
          if ( *((_DWORD *)v15 + 50) != 2 && *((_DWORD *)v15 + 50) != 4 )
            DXGADAPTER::Stop(v15, 0LL, 0);
          Global = DXGGLOBAL::GetGlobal((__int64)v15, v9);
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *((_DWORD *)v5 + 994) = 3;
        }
      }
    }
    else
    {
      DpiRequestIoPowerState(*((_QWORD *)v5 + 3), 3, v10, 0);
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
  if ( v5 )
    DpiDestroyIoMmuContext(v5);
  DpiFdoCloseDeviceFileObject((__int64)DeviceExtension);
  v18 = (void *)*((_QWORD *)DeviceExtension + 161);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)DeviceExtension + 161) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v18 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v18 + 61) = *((_DWORD *)DeviceExtension + 60);
    v19 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v19;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v20 = WdLogNewEntry5_WdEvent(v18, v17);
  *(_QWORD *)(v20 + 24) = a1;
  WdLogEvent5_WdEvent(v20);
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    v23 = *((_BYTE *)DeviceExtension + 1152);
    if ( v7 )
    {
      if ( v23 )
      {
        AcquireMiniportListMutex();
        if ( dword_1C00B2E68 == 2 )
          DpiEnableMsBddFallbackDriver((__int64)v28, v24);
        if ( (struct _DEVICE_OBJECT *)qword_1C00B2DB8 == a1 )
          qword_1C00B2DB8 = 0LL;
        _InterlockedExchange64(&qword_1C00B2B50, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      if ( v5 && *((_BYTE *)v5 + 2743) )
      {
        DxgkCompletePnPTransition(started, v21);
      }
      else
      {
        LOBYTE(v22) = 1;
        DpiPnpEnableVga(v22, 0LL, (__int64)started, (__int64)v28);
      }
    }
    else if ( v23 )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2DB8 == a1 )
        qword_1C00B2DB8 = 0LL;
      _InterlockedExchange64(&qword_1C00B2B50, 0LL);
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
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v4;
}
