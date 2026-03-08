/*
 * XREFs of DpiIovGetVirtualizationFlags @ 0x1C039EF90
 * Callers:
 *     DpiGetVirtualizationFlags @ 0x1C03996E8 (DpiGetVirtualizationFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065114 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0365BEC (DxgkDdiGetVirtualGpuProfile.c)
 */

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
