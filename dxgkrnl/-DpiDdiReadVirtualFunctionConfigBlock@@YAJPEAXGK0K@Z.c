__int64 __fastcall DpiDdiReadVirtualFunctionConfigBlock(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int VirtualFunctionConfigBlock; // ebx
  void *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, 1, 0);
  VirtualFunctionConfigBlock = v11;
  if ( v11 >= 0 )
  {
    VirtualFunctionConfigBlock = DxgkDdiReadVirtualFunctionConfigBlock(*(void **)(v10 + 3912), a4, a5);
    v11 = VirtualFunctionConfigBlock;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return VirtualFunctionConfigBlock;
}
