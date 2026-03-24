/*
 * XREFs of DxgkDdiGetMmioRangeCount @ 0x1C0231B64
 * Callers:
 *     DpiIovGetMmioRangeCount @ 0x1C02D48C0 (DpiIovGetMmioRangeCount.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0040104 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@@Z @ 0x1C023064C (-GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@.c)
 */

__int64 __fastcall DxgkDdiGetMmioRangeCount(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int MmioRangeCount; // ebx
  unsigned int v7; // [rsp+28h] [rbp-10h]

  MmioRangeCount = ADAPTER_RENDER::GetMmioRangeCount(a1[338], a2, a3);
  if ( bTracingEnabled )
  {
    v7 = *a3;
    VgpuTrace(1, MmioRangeCount, a1, L"DxgkDdiGetMmioRangeCount", (wchar_t *)L"%d", v7);
  }
  return MmioRangeCount;
}
