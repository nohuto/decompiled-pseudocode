__int64 __fastcall DpiSetPartitionVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3, unsigned int a4)
{
  void **DeviceExtension; // rbp
  unsigned int v7; // ebx
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225506LL;
  }
  else
  {
    DeviceExtension = (void **)a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1, a2, 0, 0);
      v7 = v9;
      if ( v9 >= 0 )
      {
        DpiFdoGetVirtualGpuType(a2);
        v7 = DxgkDdiSetVirtualGpuVmBus(DeviceExtension[489]);
        v9 = v7;
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
    }
    else
    {
      v7 = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
    }
    return v7;
  }
}
