/*
 * XREFs of DxgkDdiGetMmioRangeCount @ 0x1C03657D4
 * Callers:
 *     DpiIovGetMmioRangeCount @ 0x1C039ED70 (DpiIovGetMmioRangeCount.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@@Z @ 0x1C03639D4 (-GetMmioRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGECOUNT@@.c)
 */

__int64 __fastcall DxgkDdiGetMmioRangeCount(_QWORD *a1, int a2, unsigned int *a3)
{
  __int64 MmioRangeCount; // rbx
  unsigned __int64 v6; // rdi
  unsigned int *v7; // r14
  unsigned int v9; // [rsp+28h] [rbp-40h]

  MmioRangeCount = (int)ADAPTER_RENDER::GetMmioRangeCount(a1[366], a2, a3);
  if ( bTracingEnabled )
  {
    v9 = *a3;
    VgpuTrace(1, MmioRangeCount, a1, L"DxgkDdiGetMmioRangeCount", (wchar_t *)L"%d", v9);
    v6 = 0LL;
    v7 = a3 + 1;
    do
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196616,
        *a3,
        (__int64)L"The driver has reported that BAR %1 has %2 MMIO ranges, returning %3",
        v6++,
        *v7++,
        MmioRangeCount,
        0LL,
        0LL);
    while ( v6 < 6 );
  }
  return (unsigned int)MmioRangeCount;
}
