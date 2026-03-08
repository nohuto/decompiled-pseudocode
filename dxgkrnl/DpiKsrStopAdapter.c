/*
 * XREFs of DpiKsrStopAdapter @ 0x1C03A1DF4
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01E2484 (DpiFdoHandleSystemPower.c)
 *     DxgkStopAdapters @ 0x1C0311630 (DxgkStopAdapters.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C03A4294 (DpiLdaStopAllAdaptersInChain.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D1DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DpiKsrStopAdapter(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  unsigned int v3; // edi
  _QWORD v7[10]; // [rsp+20h] [rbp-78h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  v3 = 0;
  if ( *(_BYTE *)(DeviceExtension + 1159)
    || *(_BYTE *)(DeviceExtension + 2692)
    || *(_BYTE *)(DeviceExtension + 2694)
    || *(_BYTE *)(DeviceExtension + 2695)
    || *(_BYTE *)(DeviceExtension + 1154)
    || *(_BYTE *)(DeviceExtension + 1155) )
  {
    return 3221225659LL;
  }
  memset(v7, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v7[1]);
  v7[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v7[3]) = 5;
  LOBYTE(v7[6]) = -1;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( *(_DWORD *)(DeviceExtension + 504) )
    DpiLdaStopAllAdaptersInChain(a1, v7);
  else
    DpiFdoStopAdapter(a1, (__int64)v7);
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    SysMmDestroyAdapter(*(struct SYSMM_ADAPTER **)(DeviceExtension + 5688));
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( a2 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  return v3;
}
