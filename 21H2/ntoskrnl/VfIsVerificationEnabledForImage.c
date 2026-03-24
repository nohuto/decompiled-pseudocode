/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405A06B8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408C0458 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409C25B8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CE0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409C88EC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
