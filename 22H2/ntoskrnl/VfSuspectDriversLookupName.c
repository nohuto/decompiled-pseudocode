/*
 * XREFs of VfSuspectDriversLookupName @ 0x140ADB9F4
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140ADBCE0 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
