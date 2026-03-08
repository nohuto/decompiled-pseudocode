/*
 * XREFs of ULongLongMult @ 0x1C014D830
 * Callers:
 *     NtGdiStartDoc @ 0x1C027B370 (NtGdiStartDoc.c)
 *     ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A9A28 (-ReAllocate@-$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A9E20 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1C02ACC40 (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x1C02C43D0 (-init_probe@-$umptr_r@D@@SA-AV1@PEAD_K1@Z.c)
 *     ?init_probe@?$umptr_r@UtagPOINT@@@@SA?AV1@PEAUtagPOINT@@_K1@Z @ 0x1C02C4458 (-init_probe@-$umptr_r@UtagPOINT@@@@SA-AV1@PEAUtagPOINT@@_K1@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  HRESULT v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return v3;
}
