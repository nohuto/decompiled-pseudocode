/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405CBDD8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140800258 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140ABFB4C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140AC7860 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
