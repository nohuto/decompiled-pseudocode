/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405A05F8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408C04A8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CF0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409C88FC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
