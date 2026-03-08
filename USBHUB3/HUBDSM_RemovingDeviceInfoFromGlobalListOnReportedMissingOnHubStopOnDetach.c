/*
 * XREFs of HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C001FD80
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0030714 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 *     HUBMISC_ReleaseWdfReferenceOnPort @ 0x1C003289C (HUBMISC_ReleaseWdfReferenceOnPort.c)
 */

__int64 __fastcall HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_RemoveDeviceInfoFromGlobalChildList(v1);
  HUBMISC_ReleaseWdfReferenceOnPort(v1);
  return 4077LL;
}
