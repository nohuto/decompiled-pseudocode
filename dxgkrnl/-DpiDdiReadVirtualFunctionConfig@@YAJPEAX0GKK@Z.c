__int64 __fastcall DpiDdiReadVirtualFunctionConfig(void *a1, void *a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int VirtualFunctionConfig; // ebx
  void *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, 1, 0);
  VirtualFunctionConfig = v11;
  if ( v11 >= 0 )
  {
    VirtualFunctionConfig = DxgkDdiReadVirtualFunctionConfig(*(void **)(v10 + 3912), a4, a5);
    v11 = VirtualFunctionConfig;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return VirtualFunctionConfig;
}
