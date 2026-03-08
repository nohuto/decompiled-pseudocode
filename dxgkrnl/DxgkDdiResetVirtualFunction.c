/*
 * XREFs of DxgkDdiResetVirtualFunction @ 0x1C03662E8
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0064EB0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0364994 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 */

__int64 __fastcall DxgkDdiResetVirtualFunction(__int64 *a1, int a2, unsigned __int16 a3)
{
  int v5; // esi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  if ( bTracingEnabled )
  {
    v10 = a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiResetVirtualFunction", (wchar_t *)L"%d", v10);
  }
  v6 = a1[366];
  v11 = v5;
  v7 = ADAPTER_RENDER::ResetVirtualFunction(v6, a2, (unsigned int *)&v11);
  v8 = v7;
  if ( bTracingEnabled )
  {
    VgpuTrace(0, v7, a1, L"DxgkDdiResetVirtualFunction", 0LL);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196612,
      v5,
      (__int64)L"ResetVirtualFunction called, returning %1",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
