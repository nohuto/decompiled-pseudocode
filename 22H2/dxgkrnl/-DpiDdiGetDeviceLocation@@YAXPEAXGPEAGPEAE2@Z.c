/*
 * XREFs of ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0058A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C005104C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0051174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00590E0 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C0231A2C (DxgkDdiGetDeviceLocation.c)
 */

void __fastcall DpiDdiGetDeviceLocation(
        void *a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  void *v6; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]

  v6 = 0LL;
  DpiGetVirtualGpuType(a1, &v6);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, v6, 0LL, 1);
  if ( v9 >= 0 )
    DxgkDdiGetDeviceLocation(*(void **)(v8 + 3896), (__int64)a4, (__int64)a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
}
