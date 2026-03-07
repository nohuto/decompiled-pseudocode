__int64 __fastcall DpiDdiGetResourceForBar(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  unsigned int ResourceForBar; // ebx
  void *v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, v7, 0LL, 1, 0);
  ResourceForBar = v10;
  if ( v10 >= 0 )
  {
    ResourceForBar = DxgkDdiGetResourceForBar(*(void **)(v9 + 3912), (__int64)a4);
    v10 = ResourceForBar;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
  return ResourceForBar;
}
