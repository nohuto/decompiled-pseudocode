/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405A08E8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408C05B8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409C35B8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C7CE0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409C98EC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
