/*
 * XREFs of ?DpiKsrFinalize@@YAXPEAJ@Z @ 0x1C03A10A8
 * Callers:
 *     DpiKsrCallback @ 0x1C03A1650 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DpiKsrFinalize(int *a1)
{
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 1279LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pStatus != nullptr", 1279LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a1 = dword_1C013B9AC;
  if ( dword_1C013B9AC < 0 )
  {
    WdLogSingleEntry1(2LL, dword_1C013B9AC);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failing the KSR Finalize",
      1286LL,
      dword_1C013B9AC,
      0LL,
      0LL,
      0LL);
  }
  dword_1C013B9AC = 0;
}
