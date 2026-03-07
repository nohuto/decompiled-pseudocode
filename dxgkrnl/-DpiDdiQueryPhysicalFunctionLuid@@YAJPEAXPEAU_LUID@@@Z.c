__int64 __fastcall DpiDdiQueryPhysicalFunctionLuid(void *a1, struct _LUID *a2)
{
  unsigned int v2; // ebx
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  void *v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v4, v7, 0LL, 1, 0);
  v2 = v6;
  if ( v6 >= 0 )
  {
    DxgkDdiQueryPhysicalFunctionLuid(*(void **)(v5 + 3912));
    v2 = 0;
    v6 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v4);
  return v2;
}
