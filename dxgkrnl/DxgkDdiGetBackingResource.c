/*
 * XREFs of DxgkDdiGetBackingResource @ 0x1C03655C4
 * Callers:
 *     DpiIovGetBackingResource @ 0x1C039EC00 (DpiIovGetBackingResource.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x1C0363674 (-GetBackingResource@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETBACKINGRESOURCE.c)
 */

__int64 __fastcall DxgkDdiGetBackingResource(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int BackingResource; // ebx
  unsigned int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  BackingResource = ADAPTER_RENDER::GetBackingResource(a1[366], a2, (unsigned int *)a3);
  if ( bTracingEnabled )
  {
    v8 = *(unsigned __int16 *)(a3 + 4);
    v7 = *(_DWORD *)a3;
    VgpuTrace(1, BackingResource, a1, L"DxgkDdiGetBackingResource", (wchar_t *)L"%d %d", v7, v8);
  }
  return BackingResource;
}
