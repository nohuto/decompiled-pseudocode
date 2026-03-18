/*
 * XREFs of VfSuspectDriversLookupName @ 0x140A9AC20
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140A9AF40 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
