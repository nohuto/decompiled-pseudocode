__int64 __fastcall DpiIovGetVirtualizationFlags(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  int VirtualGpuType; // esi
  void *v7; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-E8h]
  int VirtualGpuProfile; // [rsp+48h] [rbp-E0h]
  unsigned int v11[44]; // [rsp+50h] [rbp-D8h] BYREF

  *a3 = 0;
  if ( a2 )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  else
  {
    v7 = 0LL;
    VirtualGpuType = DpiGetVirtualGpuType(a1, &v7);
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, v7, 0LL, 1, 0);
    v4 = VirtualGpuProfile;
    if ( VirtualGpuProfile >= 0 )
    {
      memset(v11, 0, 0xA8uLL);
      VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile(*(ADAPTER_RENDER ***)(v9 + 3912), VirtualGpuType, v11);
      v4 = VirtualGpuProfile;
      if ( VirtualGpuProfile >= 0 )
        *a3 = v11[1];
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
  }
  return v4;
}
