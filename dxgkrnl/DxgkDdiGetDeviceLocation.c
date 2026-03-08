/*
 * XREFs of DxgkDdiGetDeviceLocation @ 0x1C036563C
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0064A10 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C036378C (-GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@.c)
 */

void __fastcall DxgkDdiGetDeviceLocation(_QWORD *a1, int a2, unsigned __int16 a3, _WORD *a4, _BYTE *a5, _BYTE *a6)
{
  __int64 v7; // rcx
  int v9; // ebp
  bool v10; // zf
  int v11; // eax
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF

  v7 = a1[366];
  v9 = a3;
  v16 = 0LL;
  LODWORD(v16) = a3;
  ADAPTER_RENDER::GetDeviceLocation(v7, a2, (unsigned int *)&v16);
  v10 = bTracingEnabled == 0;
  *a4 = WORD2(v16);
  *a5 = BYTE8(v16);
  v11 = BYTE12(v16);
  *a6 = BYTE12(v16);
  if ( !v10 )
  {
    v15 = v11;
    v14 = (unsigned __int8)*a5;
    v13 = (unsigned __int16)*a4;
    v12 = v9;
    VgpuTrace(1, 0, a1, L"DxgkDdiGetDeviceLocation", (wchar_t *)L"%d %d %d %d", v12, v13, v14, v15);
  }
}
