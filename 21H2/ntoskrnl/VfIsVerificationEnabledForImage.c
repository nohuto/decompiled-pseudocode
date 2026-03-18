/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405FDEC0
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1409644D8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140A821E0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140A89E7C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
