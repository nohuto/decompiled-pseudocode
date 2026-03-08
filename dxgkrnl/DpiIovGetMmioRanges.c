/*
 * XREFs of DpiIovGetMmioRanges @ 0x1C039EE90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065114 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRanges @ 0x1C03658A0 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0366054 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRanges(
        _DWORD *a1,
        struct _LUID a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v5; // r15d
  int VirtualGpuType; // esi
  unsigned int MmioRanges; // ebx
  __int64 v9; // rdi
  unsigned __int16 v11; // [rsp+30h] [rbp-40h] BYREF
  void *v12; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-20h]
  _DWORD v16[4]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]
  struct _LUID v18; // [rsp+A8h] [rbp+38h] BYREF

  v18 = a2;
  v5 = a3;
  v12 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v12);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v13, v12, 0LL, 1, 0);
  MmioRanges = v15;
  if ( v15 >= 0 )
  {
    v9 = v14;
    if ( *(_QWORD *)(v14 + 5264) )
    {
      v11 = 0;
      v15 = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v14 + 3912), VirtualGpuType, &v18, &v11);
      MmioRanges = v15;
      if ( v15 >= 0 )
      {
        v16[3] = 0;
        v16[1] = v5;
        v17 = a5;
        v16[2] = a4 / 0x18;
        v16[0] = v11;
        MmioRanges = DxgkDdiGetMmioRanges(*(_QWORD **)(v9 + 3912), VirtualGpuType, (__int64)v16);
        v15 = MmioRanges;
      }
    }
    else
    {
      MmioRanges = -1073741811;
      v15 = -1073741811;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v13);
  return MmioRanges;
}
