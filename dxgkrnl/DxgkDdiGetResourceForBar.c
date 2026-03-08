/*
 * XREFs of DxgkDdiGetResourceForBar @ 0x1C03659D8
 * Callers:
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0064AB0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     DpiIovGetBackingResource @ 0x1C039EC00 (DpiIovGetBackingResource.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetResourceForBar@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x1C0363C04 (-GetResourceForBar@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETRESOURCEFORBAR@@.c)
 */

__int64 __fastcall DxgkDdiGetResourceForBar(_QWORD *a1, int a2, unsigned __int16 a3, unsigned __int16 a4, __int64 a5)
{
  int v5; // esi
  __int64 v7; // rcx
  int v8; // ebp
  unsigned int ResourceForBar; // ebx
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  unsigned int v13[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v5 = a3;
  v7 = a1[366];
  v13[0] = a3;
  v8 = a4;
  v13[1] = a4;
  v14 = a5;
  ResourceForBar = ADAPTER_RENDER::GetResourceForBar(v7, a2, v13);
  if ( bTracingEnabled )
  {
    v12 = v8;
    v11 = v5;
    VgpuTrace(1, ResourceForBar, a1, L"DxgkDdiGetResourceForBar", (wchar_t *)L"%d %d", v11, v12);
  }
  return ResourceForBar;
}
