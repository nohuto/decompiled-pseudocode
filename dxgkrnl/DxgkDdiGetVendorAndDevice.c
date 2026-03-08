/*
 * XREFs of DxgkDdiGetVendorAndDevice @ 0x1C0365A70
 * Callers:
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0064B60 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C0363DE4 (-GetVendorAndDevice@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVENDORANDDEVICE.c)
 */

void __fastcall DxgkDdiGetVendorAndDevice(_QWORD *a1, int a2, unsigned __int16 a3, _WORD *a4, _WORD *a5)
{
  __int64 v6; // rcx
  int v8; // esi
  bool v9; // zf
  int v10; // ecx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v6 = a1[366];
  v8 = a3;
  v14 = a3;
  ADAPTER_RENDER::GetVendorAndDevice(v6, a2, (unsigned int *)&v14);
  v9 = bTracingEnabled == 0;
  v10 = HIWORD(v14);
  *a4 = WORD2(v14);
  *a5 = v10;
  if ( !v9 )
  {
    v13 = v10;
    v12 = (unsigned __int16)*a4;
    v11 = v8;
    VgpuTrace(1, 0, a1, L"DxgkDdiGetVendorAndDevice", (wchar_t *)L"%d %d %d", v11, v12, v13);
  }
}
