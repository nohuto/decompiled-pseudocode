/*
 * XREFs of ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0065140
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065114 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0366054 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionIndexByLuid(_DWORD *a1, struct _LUID a2, unsigned __int16 *a3)
{
  unsigned int VirtualFunctionIndexByLuid; // ebx
  _BYTE v5[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]
  void *v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, v8, 0LL, 1, 0);
  VirtualFunctionIndexByLuid = v7;
  if ( v7 >= 0 )
  {
    VirtualFunctionIndexByLuid = DxgkDdiQueryVirtualFunctionIndexByLuid(*(void **)(v6 + 3912));
    v7 = VirtualFunctionIndexByLuid;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return VirtualFunctionIndexByLuid;
}
