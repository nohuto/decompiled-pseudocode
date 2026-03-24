/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x1C0231944
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C94B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0040104 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C022FCEC (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  v6 = ADAPTER_RENDER::DestroyVirtualGpu(a1[338], a2, a3, a4);
  if ( bTracingEnabled )
  {
    v8 = *a3;
    VgpuTrace(1, v6, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v8);
  }
  return v6;
}
