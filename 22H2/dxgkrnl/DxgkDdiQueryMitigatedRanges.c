/*
 * XREFs of DxgkDdiQueryMitigatedRanges @ 0x1C0231F34
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C94B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0040104 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C0230E34 (-QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRA.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRanges(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int MitigatedRanges; // ebx
  unsigned int v7; // [rsp+28h] [rbp-20h]
  unsigned int v8; // [rsp+30h] [rbp-18h]

  MitigatedRanges = ADAPTER_RENDER::QueryMitigatedRanges(a1[338], a2, a3);
  if ( bTracingEnabled )
  {
    v8 = a3[1];
    v7 = *a3;
    VgpuTrace(1, MitigatedRanges, a1, L"DxgkDdiQueryMitigatedRanges", (wchar_t *)L"%d %d", v7, v8);
  }
  return MitigatedRanges;
}
