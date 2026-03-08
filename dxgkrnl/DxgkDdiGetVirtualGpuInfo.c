/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C0365B08
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C0363EF8 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(__int64 *a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v11; // [rsp+28h] [rbp-D0h]
  _BYTE v12[144]; // [rsp+30h] [rbp-C8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1)
    || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL) >= 0 )
  {
    VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[366], a2, a3, a4, a5);
    if ( bTracingEnabled )
    {
      v11 = *a3;
      VgpuTrace(1, VirtualGpuInfo, a1, L"DxgkDdiGetVirtualGpuInfo", (wchar_t *)L"%d", v11);
    }
  }
  else
  {
    VirtualGpuInfo = -1073741130;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  return VirtualGpuInfo;
}
