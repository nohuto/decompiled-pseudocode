/*
 * XREFs of DxgkDdiQueryMitigatedRangeCount @ 0x1C0365CF0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C03641E8 (-QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGAT.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRangeCount(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int *v5; // rsi
  unsigned __int64 i; // rdi
  unsigned int v8; // [rsp+28h] [rbp-30h]

  ADAPTER_RENDER::QueryMitigatedRangeCount(a1[366], a2, a3);
  if ( bTracingEnabled )
  {
    v5 = a3 + 1;
    v8 = *a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiQueryMitigatedRangeCount", (wchar_t *)L"%d %d", v8, a3 + 1);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196614,
        *a3,
        (__int64)L"BAR %1 requests to have %2 mitigated ranges",
        i,
        *v5++,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
