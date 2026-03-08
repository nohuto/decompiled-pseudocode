/*
 * XREFs of HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C0020640
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_UnregisterWithHSM @ 0x1C0011748 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMISC_ReleaseWdfReferenceOnPort @ 0x1C003289C (HUBMISC_ReleaseWdfReferenceOnPort.c)
 */

__int64 __fastcall HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_UnregisterWithHSM(v1);
  HUBMISC_ReleaseWdfReferenceOnPort(v1);
  return 4077LL;
}
