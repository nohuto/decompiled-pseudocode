/*
 * XREFs of DxgkDdiQueryVirtualFunctionLuid @ 0x1C0366104
 * Callers:
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00651D0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C0394B74 (DpiMitigatedRangeUpdate.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C036452C (-QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUAL.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionLuid(_QWORD *a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int VirtualFunctionLuid; // ebx
  int v9; // [rsp+28h] [rbp-20h]
  _DWORD v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v10[1] = 0;
  v10[0] = a3;
  v6 = a1[366];
  v11 = a4;
  VirtualFunctionLuid = ADAPTER_RENDER::QueryVirtualFunctionLuid(v6, a2, v10);
  if ( bTracingEnabled )
  {
    v9 = a3;
    VgpuTrace(1, VirtualFunctionLuid, a1, L"DxgkDdiQueryVirtualFunctionLuid", (wchar_t *)L"%d", v9);
  }
  return VirtualFunctionLuid;
}
