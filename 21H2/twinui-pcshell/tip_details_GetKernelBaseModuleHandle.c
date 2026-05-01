/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x1800AF7D0
 * Callers:
 *     TestClose @ 0x1800AF438 (TestClose.c)
 *     TestCreate @ 0x1800AF48C (TestCreate.c)
 *     TestOpen @ 0x1800AF528 (TestOpen.c)
 *     TestQueryData @ 0x1800AF5CC (TestQueryData.c)
 *     TestReport @ 0x1800AF65C (TestReport.c)
 *     TestUnlockData @ 0x1800AF6B0 (TestUnlockData.c)
 * Callees:
 *     <none>
 */

HMODULE tip_details_GetKernelBaseModuleHandle()
{
  HMODULE result; // rax

  result = (HMODULE)g_tip_details_kernelbaseModuleHandle;
  if ( !g_tip_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_tip_details_kernelbaseModuleHandle = (__int64)result;
  }
  return result;
}
