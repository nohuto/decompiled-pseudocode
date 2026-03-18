/*
 * XREFs of DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C036AB04
 * Callers:
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0065D60 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     DpiIovGetBackingResource @ 0x1C03A34E0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C03A3650 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C03A3770 (DpiIovGetMmioRanges.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005B17C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0368018 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionIndexByLuid(_QWORD *a1, int a2, struct _LUID *a3, _WORD *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v8; // ebx
  LONG HighPart; // [rsp+30h] [rbp-18h]
  DWORD LowPart; // [rsp+38h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[366], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v8 = 0;
    *a4 = *((_WORD *)VirtualGpuByLuid + 12);
  }
  else
  {
    WdLogSingleEntry1(3LL, 1284LL);
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v8, a1, L"DxgkDdiQueryVirtualFunctionIndexByLuid", (wchar_t *)L"%d %d %d\n", a4, HighPart, LowPart);
  }
  return v8;
}
