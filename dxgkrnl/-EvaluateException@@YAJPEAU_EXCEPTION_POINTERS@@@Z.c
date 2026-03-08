/*
 * XREFs of ?EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1C02C88CC
 * Callers:
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C01A0930 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall EvaluateException(struct _EXCEPTION_POINTERS *a1)
{
  WdLogSingleEntry1(2LL, a1);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Exception encountered in pfnRenderGdi: EXCEPTION_POINTERS 0x%I64x",
    (__int64)a1,
    0LL,
    0LL,
    0LL,
    0LL);
  return 1LL;
}
