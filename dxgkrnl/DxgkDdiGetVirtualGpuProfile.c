/*
 * XREFs of DxgkDdiGetVirtualGpuProfile @ 0x1C0365BEC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C039EF90 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0363FF8 (-GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPRO.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuProfile(ADAPTER_RENDER **a1, int a2, unsigned int *a3)
{
  unsigned __int64 v5; // rbx
  __int64 VirtualGpuProfile; // rbp
  __int64 *v7; // rdi
  int v9; // [rsp+28h] [rbp-30h]

  v5 = 0LL;
  VirtualGpuProfile = (int)ADAPTER_RENDER::GetVirtualGpuProfile(a1[366], a2, (__int64)a3);
  if ( bTracingEnabled )
  {
    v9 = *a3;
    VgpuTrace(1, VirtualGpuProfile, a1, L"DxgkDdiGetVirtualGpuProfile", (wchar_t *)L"%d", v9);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      131074,
      -1,
      (__int64)L"The GPU driver reported the profile for %1 partitions, with %2 virtualization flags and status %3",
      *a3,
      a3[1],
      VirtualGpuProfile,
      0LL,
      0LL);
    v7 = (__int64 *)(a3 + 10);
    do
    {
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        131074,
        -1,
        (__int64)L"The vGPU profile for capability %1 has min %2, max %3, optimal %4, and available %5 assignable slice units",
        v5++,
        *(v7 - 2),
        *(v7 - 1),
        *v7,
        *(v7 - 3));
      v7 += 5;
    }
    while ( v5 < 4 );
  }
  return (unsigned int)VirtualGpuProfile;
}
