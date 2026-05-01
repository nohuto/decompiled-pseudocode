/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x1800AF7B0
 * Callers:
 *     TestClose @ 0x1800AF418 (TestClose.c)
 *     TestCreate @ 0x1800AF46C (TestCreate.c)
 *     TestOpen @ 0x1800AF508 (TestOpen.c)
 *     TestQueryData @ 0x1800AF5AC (TestQueryData.c)
 *     TestReport @ 0x1800AF63C (TestReport.c)
 *     TestUnlockData @ 0x1800AF690 (TestUnlockData.c)
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
