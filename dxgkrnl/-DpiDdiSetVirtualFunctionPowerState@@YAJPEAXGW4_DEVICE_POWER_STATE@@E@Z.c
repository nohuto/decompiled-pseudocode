/*
 * XREFs of ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0064EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065114 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C0366460 (DxgkDdiSetVirtualFunctionPowerState.c)
 */

__int64 __fastcall DpiDdiSetVirtualFunctionPowerState(void *a1, __int64 a2, enum _DEVICE_POWER_STATE a3, char a4)
{
  unsigned int v5; // ebx
  void *v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, v7, 0LL, 1, 0);
  v5 = v10;
  if ( v10 >= 0 )
  {
    v5 = DxgkDdiSetVirtualFunctionPowerState(*(void **)(v9 + 3912), a4);
    v10 = v5;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
  return v5;
}
