void __fastcall DpiDdiGetVendorAndDevice(void *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  void *v5; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  v5 = 0LL;
  DpiGetVirtualGpuType(a1, &v5);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, v5, 0LL, 1, 0);
  if ( v8 >= 0 )
    DxgkDdiGetVendorAndDevice(*(void **)(v7 + 3912), (__int64)a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
}
